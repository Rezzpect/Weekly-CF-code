/*จงเขียนการทำงานต่อไปนี้ในรูปแบบภาษาซี (Level 2)
    c = 2a+b
    c = a^5+a^4+2a^3+3a^2+4a+3
    c = 2+3a
*/
#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the first number and second number: ");
    scanf("%f %f",&a,&b);
    printf("c = 2a+b");
    printf(" = %.2f\n",(2*a)+b);
    printf("c = a^5+a^4+2a^3+3a^2+4a+3");
    printf(" = %.2f\n",(a*a*a*a*a)+(a*a*a*a)+2*(a*a*a)+3*(a*a)+4*a+3);
    printf("c = 2+3a");
    printf(" = %.2f\n",2+(3*a));
}
