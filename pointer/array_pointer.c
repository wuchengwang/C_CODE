#include <stdio.h>

/*int main(){
    //数组指针是指向数组的指针
    //整形指针-是指向整形的指针
    //字符指针-是指向字符的指针
    int a = 10;
    int* pa = &a;
    char ch = 'w';
    char* pc = &ch;
    int arr[] = {1,2,3,4};
    double* d[5];
    double* (*pd)[5] = &d;//这里的[5]是指这个指针指向数组，double*指的是这个数组内元素的类型是double*类型的，pd就是一个数组指针
    int (*parr)[10] = &arr;//取出的是数组的地址
    //parr就是一个数组指针-其中存放的是数组的地址
    //arr;//arr-数组名是首元素的地址-arr[0]的地址
    return 0;
}
//&数组名(&arr)取出的是整个地址的地址*/

//the use of array pointer

void print(int (*p)[4], int r, int c){
    int i= 0;
    int j = 0;
    for(i = 0;i<r;i++){
        for(j = 0;j<c;j++){
            printf("%d ", *((*(p + i)) + j));
        }
        printf("\n");
    }
}

int main(){
    int arr[3][4] = {{1,2,3,4}, {2,3,4,5}, {3,4,5,6}};
    print(arr, 3, 4);//这里的arr表示首元素的地址，二维数组的首元素是第一行的地址
    return 0;
}

//int (*parr3[10])[5] -- parr3是一个存储数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素都是int类型
