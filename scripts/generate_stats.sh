#!/bin/bash

# Função para contar arquivos nas pastas
count() {
  [ -d "$1" ] && find "$1" -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.py" -o -name "*.java" \) 2>/dev/null | wc -l || echo 0
}

# Contagem
CF=$(count Codeforces); CSES=$(count CSES); BEE=$(count Beecrowd)
AT=$(count AtCoder); HR=$(count HackerRank); LC=$(count LeetCode)

# Totais e Constantes
TOTAL=$((CF + CSES + BEE + AT + HR + LC))
TOTAL_SAFE=$((TOTAL > 0 ? TOTAL : 1))
CIRC=502.65

# --- FUNÇÕES DE CÁLCULO (AWK Universal) ---

# Calcula o comprimento do traço (Dash)
# Garante um mínimo visual de 5.0 para contagens > 0
calc_dash() {
  awk -v cnt="$1" -v tot="$TOTAL_SAFE" -v circ="$CIRC" 'BEGIN {
    val = (cnt / tot) * circ;
    if (cnt > 0 && val < 5.0) print 5.0;
    else printf "%.2f", val;
  }'
}

# Calcula o ângulo de rotação para a próxima fatia
# Garante um mínimo visual de 4.0 graus para contagens > 0
calc_angle() {
  awk -v cnt="$1" -v tot="$TOTAL_SAFE" 'BEGIN {
    ang = (cnt / tot) * 360;
    if (cnt > 0 && ang < 4.0) print 4.0;
    else printf "%.2f", ang;
  }'
}

# --- GERAÇÃO DOS VALORES ---

# Valores de Dash (comprimento visual)
A_CF=$(calc_dash $CF); A_CSES=$(calc_dash $CSES); A_BEE=$(calc_dash $BEE)
A_AT=$(calc_dash $AT); A_HR=$(calc_dash $HR); A_LC=$(calc_dash $LC)

# Rotações (cumulativas com OVERLAP FIX)
# Subtraímos 0.3 graus no início de cada nova fatia (exceto a primeira)
# para garantir que não haja espaços escuros entre elas.
R_CF=-90
R_CSES=$(awk "BEGIN {printf \"%.2f\", $R_CF + $(calc_angle $CF) - 0.3}")
R_BEE=$(awk "BEGIN {printf \"%.2f\", $R_CSES + $(calc_angle $CSES) - 0.3}")
R_AT=$(awk "BEGIN {printf \"%.2f\", $R_BEE + $(calc_angle $BEE) - 0.3}")
R_HR=$(awk "BEGIN {printf \"%.2f\", $R_AT + $(calc_angle $AT) - 0.3}")
R_LC=$(awk "BEGIN {printf \"%.2f\", $R_HR + $(calc_angle $HR) - 0.3}")

# --- SUBSTITUIÇÃO NO TEMPLATE ---

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

echo "Badge gerado com sucesso e gaps corrigidos em stats/stats.svg"