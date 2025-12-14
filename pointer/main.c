#include <stdio.h>

int main(){
    //字符指针可以指向字符串
    //本质上是把“hello world”这个字符串的首字符的地址储存在了ps中
    char* ps = "hello world";
    char arr[] = "hello world";//将hello world放到了arr数组中
    printf("%s\n", ps);
    printf("%s\n", ps);
    return 0;
}
