#!/bin/bash

count() {
  # Garante que o diretório existe antes de contar
  if [ -d "$1" ]; then
    find "$1" -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.py" -o -name "*.java" \) 2>/dev/null | wc -l
  else
    echo 0
  fi
}

CF=$(count Codeforces)
CSES=$(count CSES)
BEE=$(count Beecrowd)
AT=$(count AtCoder)
HR=$(count HackerRank)
LC=$(count LeetCode)

TOTAL=$((CF + CSES + BEE + AT + HR + LC))
TOTAL_SAFE=$((TOTAL > 0 ? TOTAL : 1))

# Circunferência para r=70 é ~439.82
CIRC=439.82

calc_dash() {
  echo "scale=2; ($1 / $TOTAL_SAFE) * $CIRC" | bc -l
}

calc_angle() {
  echo "scale=2; ($1 / $TOTAL_SAFE) * 360" | bc -l
}

# Valores de preenchimento (Dash)
A_CF=$(calc_dash $CF)
A_CSES=$(calc_dash $CSES)
A_BEE=$(calc_dash $BEE)
A_AT=$(calc_dash $AT)
A_HR=$(calc_dash $HR)
A_LC=$(calc_dash $LC)

# Rotações (em graus)
R_CF=-90
R_CSES=$(echo "$R_CF + $(calc_angle $CF)" | bc -l)
R_BEE=$(echo "$R_CSES + $(calc_angle $CSES)" | bc -l)
R_AT=$(echo "$R_BEE + $(calc_angle $BEE)" | bc -l)
R_HR=$(echo "$R_AT + $(calc_angle $AT)" | bc -l)
R_LC=$(echo "$R_HR + $(calc_angle $HR)" | bc -l)

# O segundo valor do dasharray deve ser a circunferência total
C=$CIRC

sed \
  -e "s/{{TOTAL}}/$TOTAL/g" \
  -e "s/{{CF}}/$CF/g" \
  -e "s/{{CSES}}/$CSES/g" \
  -e "s/{{BEE}}/$BEE/g" \
  -e "s/{{AT}}/$AT/g" \
  -e "s/{{HR}}/$HR/g" \
  -e "s/{{LC}}/$LC/g" \
  -e "s/{{A_CF}}/$A_CF/g" -e "s/{{C_CF}}/$C/g" -e "s/{{R_CF}}/$R_CF/g" \
  -e "s/{{A_CSES}}/$A_CSES/g" -e "s/{{C_CSES}}/$C/g" -e "s/{{R_CSES}}/$R_CSES/g" \
  -e "s/{{A_BEE}}/$A_BEE/g" -e "s/{{C_BEE}}/$C/g" -e "s/{{R_BEE}}/$R_BEE/g" \
  -e "s/{{A_AT}}/$A_AT/g" -e "s/{{C_AT}}/$C/g" -e "s/{{R_AT}}/$R_AT/g" \
  -e "s/{{A_HR}}/$A_HR/g" -e "s/{{C_HR}}/$C/g" -e "s/{{R_HR}}/$R_HR/g" \
  -e "s/{{A_LC}}/$A_LC/g" -e "s/{{C_LC}}/$C/g" -e "s/{{R_LC}}/$R_LC/g" \
  stats/stats.svg.template > stats/stats.svg