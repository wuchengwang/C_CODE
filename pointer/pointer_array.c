#include <stdio.h>

int main(){
    //指针数组
    //数组-数组中存放的是指针 
    //int* arr[3];//存放整形指针的数组
    int a[5] = {1,2,3,4,5,};
    int b[5] = {2,3,4,5,6};
    int c[5] = {3,4,5,6,7};
    int* arr[] = {a,b,c};
    int i = 0;
    for(i = 0;i<3;i++){
        int j = 0;
        for(j = 0;j<5;j++){
            //printf("%d ", *(arr[i] + j));
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}