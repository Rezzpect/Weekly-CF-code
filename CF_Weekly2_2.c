/*
 จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
*/
#include<stdio.h>
int main()
{
    int a[2];
    printf("Enter first and second number : ");
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    printf("%d %d",a[0],a[1]);
    printf(" %d ",a[0]+a[1]);
    printf("Result: Addition = %d | Subtraction = %d | Multiplication = %d | Divison = %d",a[0]+a[1],a[0]-a[1],a[0]*a[1],a[0]/a[1]);
}