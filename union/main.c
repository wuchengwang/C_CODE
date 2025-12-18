//联合体也可以叫共用体
//联合体的成员是公用一块内存空间的，这样的一个联合体大小至少是最大成员的大小
#include <stdio.h>

union Un{
    char c;//占1个字节
    int i;//占4个字节
};

typedef union Un U;

int main(){
    U u = {10};
    printf("%p\n", &u);
    printf("%p\n", &(u.c));
    //printf("%d\n", sizeof(u));

    return 0;
}