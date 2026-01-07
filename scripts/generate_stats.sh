#!/bin/bash

count() {
  [ -d "$1" ] && find "$1" -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.py" -o -name "*.java" \) 2>/dev/null | wc -l || echo 0
}

CF=$(count Codeforces)
CSES=$(count CSES)
BEE=$(count Beecrowd)
AT=$(count AtCoder)
HR=$(count HackerRank)
LC=$(count LeetCode)

TOTAL=$((CF + CSES + BEE + AT + HR + LC))
TOTAL_SAFE=$((TOTAL > 0 ? TOTAL : 1))

# Circunferência para r=80 é ~502.65
CIRC=502.65

calc_dash() { echo "scale=2; ($1 / $TOTAL_SAFE) * $CIRC" | bc -l; }
calc_angle() { echo "scale=2; ($1 / $TOTAL_SAFE) * 360" | bc -l; }

# Dash length
A_CF=$(calc_dash $CF); A_CSES=$(calc_dash $CSES); A_BEE=$(calc_dash $BEE)
A_AT=$(calc_dash $AT); A_HR=$(calc_dash $HR); A_LC=$(calc_dash $LC)

# Rotations
R_CF=-90
R_CSES=$(echo "$R_CF + $(calc_angle $CF)" | bc -l)
R_BEE=$(echo "$R_CSES + $(calc_angle $CSES)" | bc -l)
R_AT=$(echo "$R_BEE + $(calc_angle $BEE)" | bc -l)
R_HR=$(echo "$R_AT + $(calc_angle $AT)" | bc -l)
R_LC=$(echo "$R_HR + $(calc_angle $HR)" | bc -l)

sed \
  -e "s/{{TOTAL}}/$TOTAL/g" \
  -e "s/{{CF}}/$CF/g" -e "s/{{CSES}}/$CSES/g" -e "s/{{BEE}}/$BEE/g" \
  -e "s/{{AT}}/$AT/g" -e "s/{{HR}}/$HR/g" -e "s/{{LC}}/$LC/g" \
  -e "s/{{A_CF}}/$A_CF/g" -e "s/{{C_CF}}/$CIRC/g" -e "s/{{R_CF}}/$R_CF/g" \
  -e "s/{{A_CSES}}/$A_CSES/g" -e "s/{{C_CSES}}/$CIRC/g" -e "s/{{R_CSES}}/$R_CSES/g" \
  -e "s/{{A_BEE}}/$A_BEE/g" -e "s/{{C_BEE}}/$CIRC/g" -e "s/{{R_BEE}}/$R_BEE/g" \
  -e "s/{{A_AT}}/$A_AT/g" -e "s/{{C_AT}}/$CIRC/g" -e "s/{{R_AT}}/$R_AT/g" \
  -e "s/{{A_HR}}/$A_HR/g" -e "s/{{C_HR}}/$CIRC/g" -e "s/{{R_HR}}/$R_HR/g" \
  -e "s/{{A_LC}}/$A_LC/g" -e "s/{{C_LC}}/$CIRC/g" -e "s/{{R_LC}}/$R_LC/g" \
  stats/stats.svg.template > stats/stats.svg