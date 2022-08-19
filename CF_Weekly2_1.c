 /*
 จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
*/
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter first and second number : ");
    scanf("%f %f",&a,&b);
    printf("Addition result : %.2f \n",a+b);
    printf("Subtraction result : %.2f \n",a-b);
    printf("Multiplication result : %.2f \n",a*b);
    if(b==0){
        printf("Division Error");
    }
    else{
        printf("Division result : %.2f",a/b);
    }
    return 0;
}