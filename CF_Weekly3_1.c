/*จงเขียนการทำงานต่อไปนี้ในรูปแบบภาษาซี (Level 2)
    c = 2a+b
    c = a^5+a^4+2a^3+3a^2+4a+3
    c = 2+3a
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter first and second number: ");
    scanf("%f %f",&a,&b);
    c=(2*a)+b;
    printf("c = 2a+b\n");
    printf("c=%.2f\n",c);
    c=pow(a,5)+pow(a,4)+(2*pow(a,3))+(3*pow(a,2))+(4*a)+3;
    printf("c = a^5+a^4+2a^3+3a^2+4a+3\n");
    printf("c=%.2f\n",c);
    c=2+(3*a);
    printf("c = 2+3a\n");
    printf("c=%.2f\n",c);
}