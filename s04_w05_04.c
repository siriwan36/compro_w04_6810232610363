#include <stdio.h>

int main(){
    //ประกาศตัวเเปรสำหรับเก็บข้อมูลของผู้ใช้ 3 คน
    char name[3]; //ชื่อเล่น
    int age[3]; //อายุ
    float height[3]; //ส่วนสูง
    float weight[3]; //น้ำหนัก
    char grade[3]; //รหัสเกรด

    //รับข้อมูลจากผู้ใช้ 3 คน
    for(int i = 0; i < 3; i++) {
        printf("Enter data for person %d:\n", i+1);
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
        //ใช้ space ก่อน %c เพื่อเครียร์ buffer เเละอ่าน character ให้ถูกต้อง
    }

    //เเสดงผลข้อมูลในรูปเเบบตาราง
    printf("\n│ Name │ Age │ Height(cm) │ weight(kg) │ Grade Code │\n");
    printf("│------│-----│------------│------------│-------------│\n");

    for(int i =0; i < 3; i++) {
        printf(".│ %c  │ %3d │ %5.1f   │    %5.1f    │     %c     │\n",
            name[i], age[i], height[i], weight[i], grade[i]);
    }
    return 0;
}