#!/bin/bash

count() {
  find "$1" -type f \( -name "*.c" -o -name "*.cpp" \) 2>/dev/null | wc -l
}

CF=$(count Codeforces)
CSES=$(count CSES)
BEE=$(count Beecrowd)
AT=$(count AtCoder)
HR=$(count HackerRank)
LC=$(count LeetCode)

TOTAL=$((CF + CSES + BEE + AT + HR + LC))

TOTAL_SAFE=$((TOTAL > 0 ? TOTAL : 1))

angle() {
  echo "scale=6; 360 * $1 / $TOTAL_SAFE" | bc
}

A_CF=$(angle $CF)
A_CSES=$(angle $CSES)
A_BEE=$(angle $BEE)
A_AT=$(angle $AT)
A_HR=$(angle $HR)
A_LC=$(angle $LC)

R_CF=-90
R_CSES=$(echo "$A_CF - 90" | bc)
R_BEE=$(echo "$A_CF + $A_CSES - 90" | bc)
R_AT=$(echo "$A_CF + $A_CSES + $A_BEE - 90" | bc)
R_HR=$(echo "$A_CF + $A_CSES + $A_BEE + $A_AT - 90" | bc)
R_LC=$(echo "$A_CF + $A_CSES + $A_BEE + $A_AT + $A_HR - 90" | bc)

sed \
  -e "s/{{TOTAL}}/$TOTAL/g" \
  -e "s/{{CF}}/$CF/g" \
  -e "s/{{CSES}}/$CSES/g" \
  -e "s/{{BEE}}/$BEE/g" \
  -e "s/{{AT}}/$AT/g" \
  -e "s/{{HR}}/$HR/g" \
  -e "s/{{LC}}/$LC/g" \
  -e "s/{{A_CF}}/$A_CF/g" \
  -e "s/{{A_CSES}}/$A_CSES/g" \
  -e "s/{{A_BEE}}/$A_BEE/g" \
  -e "s/{{A_AT}}/$A_AT/g" \
  -e "s/{{A_HR}}/$A_HR/g" \
  -e "s/{{A_LC}}/$A_LC/g" \
  -e "s/{{R_CF}}/$R_CF/g" \
  -e "s/{{R_CSES}}/$R_CSES/g" \
  -e "s/{{R_BEE}}/$R_BEE/g" \
  -e "s/{{R_AT}}/$R_AT/g" \
  -e "s/{{R_HR}}/$R_HR/g" \
  -e "s/{{R_LC}}/$R_LC/g" \
  stats/stats.svg.template > stats/stats.svg
