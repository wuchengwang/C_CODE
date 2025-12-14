//函数指针-存放的是数组的地址
#include <stdio.h>

int Add(int x, int y){
    return x + y;
}

int main(){
    int x = 10;
    int y = 20;
    Add(x, y);
    int (*pf)(int ,int) = Add;//pf就是函数指针变量，类比数组指针//Add === pf
    //函数的调用
    int ret = (*pf)(3, 5);
    printf("%d\n", ret);
    //printf("%p\n", &Add);
    //printf("%p\n", Add);
    return 0;
}
