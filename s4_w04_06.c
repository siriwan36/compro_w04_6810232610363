#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate(){
    const int LOCAL_BONUS = 50;
    
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main(){
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);

    // Try to print >> LOCAL_BONUS in main >> DISCUSS the result
    //printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);
    return 0;
}
/*  1.ค่าคงที่ GLOBAL_RATE เเละ LOCAL_BONUS ต่างกันอย่างไร?
- GLOBAL_RATE เป็นค่าคงที่ีะดับ global ใช้งานได้จากทุกฟังก์ชันในโปรเเกรม
- LOCAL_BONUS เป็นค่าคงที่ีะดับ local ใช้ได้เฉพาะในฟังก์ชัน calculate()

2.เกิดอะไรขึ้นถ้าเราเทียบ GLOBAL_RATE =20; หรือ LOCAL_BONUS = 80; ?
- โปรเเกรมจะเกิด compile-time error เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศเเล้ว

3.ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้ ?
-เพราะ LOCAL_BONUS ถูกประกาศเป็ฯ local ในฟังก์ชัน calculate() เเละมี scope อยู่เเต่ในฟังก์ชัน

4.อธิบาย เเละเเสดงการทดลอง:
-ถ้า uncomment บรรทัด 'printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);'
โปรเเกรมจะ compile ไม่ผ่าน เเละเเสดง error ว่า LOCAL_BONUS ไม่ถูกประกาศใน main()
*/