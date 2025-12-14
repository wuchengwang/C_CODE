#include <stdio.h>

void test(int arr[3][5]){

}

void test(int (*arr)[5]){

}

int main(){
    int arr[3][5] = {0};
    test(arr);
    return 0;
}
//一定要分析传过去的是什么