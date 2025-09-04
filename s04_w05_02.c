#include <stdio.h>  // เรียกใช้ฟังก์ชันมาตรฐานเช่น printf, scanf

int main() {
    char name[30];       // ตัวแปรเก็บชื่อผู้ใช้ (ไม่เกิน 30 ตัวอักษร)
    int age;             // ตัวแปรเก็บอายุ
    float height;        // ตัวแปรเก็บส่วนสูง

    char subject[30];    // ตัวแปรเก็บชื่อวิชา
    float grade;         // ตัวแปรเก็บเกรดที่ได้
    char symbol;         // ตัวแปรเก็บตัวอักษรแทนเกรด

    // รับค่าชื่อ, อายุ, และส่วนสูงจากผู้ใช้ (บรรทัดที่ 1)
    scanf("%s %d %f", name, &age, &height);

    // รับชื่อวิชา, เกรด, และตัวอักษรแทนเกรดจากผู้ใช้ (บรรทัดที่ 2)
    scanf("%s %f %c", subject, &grade, &symbol);

    // แสดงผลข้อมูลผู้ใช้: ชื่อ, อายุ, และส่วนสูง (แสดงทศนิยม 1 ตำแหน่ง)
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลผลการเรียน: ชื่อวิชา, ชื่อผู้ใช้, เกรด (ทศนิยม 2 ตำแหน่ง), และตัวอักษรแทนเกรด
    printf("In subject %s, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;  // จบการทำงานของโปรแกรม
}