#include <stdio.h>

int main(){
    int a=6;//เก็บค่าตัวแปร
    int b=3;//เก็บค่าตัวแปร
    double x=7.0;//เก็บค่าตัวแปร
    double y=6.5;//เก็บค่าตัวแปร

    printf("int r1=%d\n",a++*b+(int)y%3);// คำนวณ a * b + y % 3
    printf("int r2=%d\n",(a>b)&&(int)x/b<2);// คำนวณ a > b และ x / b < 2
    printf("float r3=%.1f\n",++x*y-a/2);// คำนวณ x * y - a / 2
    printf("float r4=%d\n",((x+=1.5)>y)||(b-->0));// คำนวณ x + 1.5 > y หรือ b-- > 0

    return 0;
}