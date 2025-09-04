#include <stdio.h>   //ใช้สำหรับ printf

int main(){
    //ประก่ศตัวเเปร
    char nameInitial = 'L';    //ตัวอักษรเเรกของชื่อ
    int age = 18;              //อายุเป็นจำนวนเต็ม
    float weight = 39.2;       //น้ำหนักเเบบทศนิยม
    char gender[] = "Female";    //เพศ ใช้เป็นข้อความ

    //เเสดงผลลัพธ์
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);   //%.1f เเสดงทศนิยม 1 ตำเเหน่ง
    printf("gender = %s\n",gender);
}