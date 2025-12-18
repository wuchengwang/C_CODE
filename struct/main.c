#include <stdio.h>

struct B{
    char c;
    short s;
    double d;
};

struct stu{
    struct B sb;
    char name[20];
    int age;
    char id[20];
};

void print1(struct stu t){
    printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct stu* ps){
    printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main(){
    struct stu s = {{'w', 1, 2.0}, "zhangsan", 20, "23354443"};//创建一个叫s的对象,并给s赋值
    //写一个函数打印s的内容
    print1(s);
    print2(&s);
    //.   ->
    //打印结构体中的变量
    //printf("%c\n", s.sb.c);
    //printf("%s\n", s.id);
    //struct stu* ps = &s;
    //printf("%c\n", (*ps).sb.c);//先将指针解引用再用.
    //printf("%c\n", ps->sb.c);//通过指针找到
    return 0;
}

//参数压栈，栈是一种数据结构，先进的后出， 后进的先出

