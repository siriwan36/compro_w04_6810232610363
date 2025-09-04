#include <stdio.h>

int main(){
    int a=8;  //เก็บค่าตัวแปร
    int b=17;  //เก็บค่าตัวแปร
    float c=6.5; //เก็บค่าตัวแปร
    float d=7.0; //เก็บค่าตัวแปร

    printf("assign >> a=%db=%dc=%.1f\n",a,b,c,d); //แสดงค่าตัวแปรทั้งหมด
    printf("d+a=%.1f\n",d+a);  //แสดงผลลัพธ์ d+a
    printf("a-b=%d\n",a-b);    //แสดงผลลัพธ์ a-b
    printf("c*d=%.1f\n",c*d);  //แสดงผลลัพธ์ c*d
    printf("a*c=%.1f\n",a*c);  //แสดงผลลัพธ์ a*c
    printf("c/d=%.3f\n",c/d);  //แสดงผลลัพธ์ c/d
    printf("b/c=%.1f\n",b/c);  //แสดงผลลัพธ์ b/c
    printf("a%%b=%d\n",a%b);   //แสดงผลลัพธ์ a%b
    printf("c%%a=%d\n",((int)c)%a);         //แสดงผลลัพธ์ c % a โดยเปลี่ยน c เป็น int ก่อน
    printf("c%%d=%d\n",((int)c)%((int)d));  //แสดงผลลัพธ์ c % d เปลี่ยนเป็น int ทั้งคู่

    return 0;
}
//ในกรณีที่ run แล้วเกิด Error เนื่องจากการคำนวณค่า float และ int จำเป็นต้อง ต้องเปลี่ยนเป็น int ก่อนถึงจะหาผลลัพธ์ได้

//วิธ๊แก้ไขคือเปลี่ยนจาก float เป็น int ก่อน แล้วหาผลลัพธ์