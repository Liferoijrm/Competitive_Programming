#include <stdio.h>
 
int main() {

    int n, x, y;

    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    
    x--;
    y--;

    int alunos[n][n], up[n][n], path[n][n], banners = 1, exe = 0, i, j;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &alunos[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            up[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            path[i][j] = 0;
        }
    }

    up [x][y] = 1;

    while(exe == 0){

        if (y < (n-1) && alunos[x][y] <= alunos[x][y + 1] && up[x][y + 1] != 1 && alunos[x][y + 1] < 10){
            banners++;
            up[x][y + 1] = 1;
            y++;
            path[x][y] = 1;
        }

        else if (x < (n-1) && alunos[x][y] <= alunos[x + 1][y] && up[x + 1][y] != 1 && alunos[x + 1][y] < 10){
            banners++;
            up[x + 1][y] = 1;
            x++;
            path[x][y] = 2;
        } 

        else if (y > 0 && alunos[x][y] <= alunos[x][y - 1] && up[x][y - 1] != 1 && alunos[x][y - 1] < 10){
            banners++;
            up[x][y - 1] = 1;
            y--;
            path[x][y] = 3;
        }

        else if (x > 0 && alunos[x][y] <= alunos[x - 1][y] && up[x - 1][y] != 1 && alunos[x - 1][y] < 10){
            banners++;
            up[x - 1][y] = 1;
            x--;
            path[x][y] = 4;
        } 

        else {
            alunos[x][y] = 10;

            if (y < (n-1) && alunos[x][y + 1] < 10 && up[x][y + 1] == 1 && path[x][y] == 3){
                y++;
            }

            else if (x < (n-1) && alunos[x + 1][y] < 10 && up[x + 1][y] == 1 && path[x][y] == 4){
                x++;
            } 

            else if (y > 0 && alunos[x][y - 1] < 10 && up[x][y - 1] == 1 && path[x][y] == 1){
                y--;
            }

            else if (x > 0 && alunos[x - 1][y] < 10 && up[x - 1][y] == 1 && path[x][y] == 2){
                x--;
            } 

            else {
                exe = 1;
            }
        }
    }

    printf("%d\n", banners);
 
    return 0;
}