#include <stdio.h>

int main(){
    char name = 'M' ; // ค่าชื่อผู้ใช้
    int age = 18;   // อายุ
    float weight = 39.2; // น้ำหนัก


    printf("Student %c is %d years old.\n", name, age); //เเสดงผลข้อมูล ชื่อ อายุ
    printf("his weight is %.1f kg.\n", weight); //เเสดงผลข้อมูล น้ำหนัก
    return 0; //คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}