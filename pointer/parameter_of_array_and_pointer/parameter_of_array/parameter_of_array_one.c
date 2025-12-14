//将数组传给函数，函数参数的设计
//一维数组传参
#include <stdio.h>

void test(int arr[]){

}

void test(int *arr){

}

void test2(int *arr2[]){

}
//arr2中存放的是int*类型
void test2(int **arr2){

}

int main(){
    int arr[10];
    int *arr2[20] = {0};//存放int*的数组
    test(arr);
    test(arr2);//传首元素的地址即(int*)类型的地址，用int**接收(二级指针)
    return 0;
}

