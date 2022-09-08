/*
 จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
*/
#include<stdio.h>
int main()
{
    float i,a[2],ans,b=0;
    printf("Enter first and second number : ");
    scanf("%f",&a[0]);
    scanf("%f",&a[1]);
    ans=a[0];
    for(i=1;i<=a[1];i++){
        ++ans;
    }
    printf("Addition result is %.2f\n",ans);
    ans=a[0];
    for(i=1;i<=a[1];i++){
        --ans;
    }
    printf("Subtraction result is %.2f\n",ans);
    ans=a[0];
    for(i=1;i<a[1];i++){
        ans+=a[0];
    }
    printf("Multiplication result is %.2f\n",ans);
    ans=a[0]/a[1];
    printf("Division result is %.2f",ans);

}