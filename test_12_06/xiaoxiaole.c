#include <stdio.h>

void creat_cube(int n, int m, int cube[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d", &cube[i][j]);
        }
    }
}

void print_cube(int n, int m, int cube[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d ", cube[i][j]);
        }
        printf("\n");
    }
}

void cpy_cube(int n, int m, int dest[n][m], int src[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            dest[i][j] = src[i][j];
        }
    }
}

void merge_cube(int n, int m, int cube[n][m], int cube_1[n][m], int cube_2[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(cube_1[i][j] == 0 || cube_2[i][j] == 0){
                cube[i][j] = 0;
            }
        }
    }
}

void row_process(int n, int m, int cube[n][m]){
    int cube1[n][m];
    cpy_cube(n, m, cube1, cube);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m-2;j++){
            if(cube1[i][j] == cube1[i][j+1] && cube1[i][j+2] == cube1[i][j+1]){
                cube[i][j] = 0;
                cube[i][j+1] = 0;
                cube[i][j+2] = 0;
            }
        }
    }
}

void column_process(int n, int m, int cube[n][m]){
    int cube1[n][m];
    cpy_cube(n, m, cube1, cube);
    for(int j = 0;j<m;j++){
        for(int i = 0;i<n-2;i++){
            if(cube1[i][j] == cube1[i+1][j] && cube1[i+2][j] == cube1[i+1][j]){
                cube[i][j] = 0;
                cube[i+1][j] = 0;
                cube[i+2][j] = 0;
            }
        }
    }
}

void process_cube(int n, int m, int cube[n][m]){
    int cube_1[n][m];
    int cube_2[n][m];
    cpy_cube(n, m, cube_1, cube);
    cpy_cube(n, m, cube_2, cube);
    row_process(n, m, cube_1);
    //print_cube(n, m, cube_1);
    column_process(n, m, cube_2);
    merge_cube(n, m, cube, cube_1, cube_2);
    //print_cube(n, m, cube_2);
    
}

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF){
        int cube[n][m];
        creat_cube(n, m, cube);
        process_cube(n, m, cube);
        print_cube(n, m, cube);
        printf("\n");
    }
    return 0;
}