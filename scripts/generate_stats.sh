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

export CF CSES BEE AT HR LC TOTAL
export A_CF A_CSES A_BEE A_AT A_HR A_LC
