//一级指针传参
/*#include <stdio.h>

void test(char* p){

}

int main(){
    char ch = 'w';
    char* p1 = &ch;
    test(&ch);
    test(p1);
    //int arr[] = {1,2,3,4,5};
    //int* p = arr;
    //int sz = sizeof(arr)/sizeof(arr[0]);
    return 0;
}*/

//二级指针传参
#include <stdio.h>

void test(int** p2){
    //用二级指针来接收
}

int main(){
    int a = 10;
    int* pa = &a;//pa是一级指针
    int** ppa = &pa;//ppa是二级指针
    test(ppa);
    test(&pa);
    int* arr[10] = {0};
    test(arr);//首元素是int*类型
    return 0;
}