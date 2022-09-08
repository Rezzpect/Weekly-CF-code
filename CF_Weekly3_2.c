/*จงเขียนการทำงานต่อไปนี้ในรูปแบบภาษาซี (Level 2)
    c = 2a+b
    c = a^5+a^4+2a^3+3a^2+4a+3
    c = 2+3a
*/
#include<stdio.h>
int main(){
    float a,b,d=0,e,f;
    int i,j;
    printf("Enter the first number and second number: ");
    scanf("%f %f",&a,&b);
    for(i=1;i<=3;i++){
        if(i<=2){
            d+=a;
        }
        else{
            d+=b;
        }
    }
    printf("c = 2a+b");
    printf(" = %.2f\n",d);
    d=0;
    for(i=1;i<=6;i++){
        switch (i)
        {
        case 1:
            d+=3;
            break;
        case 2:
            for(j=1;j<=4;j++){
                d+=a;
            }
            break;
        case 3:
            e=1;
            for(j=1;j<=2;j++){
                e*=a;
            }
            e*=3;
            d+=e;
            break;
        case 4:
            e=1;
            for(j=1;j<=3;j++){
                e*=a;
            }
            e*=2;
            d+=e;
            break;
        case 5:
            e=1;
            for(j=1;j<=4;j++){
                e*=a;
            }
            d+=e;
            break;
        case 6:
            e=1;
            for(j=1;j<=5;j++){
                e*=a;
            }
            d+=e;
            break;
        
        default:
            break;
        }
    }
    printf("c = a^5+a^4+2a^3+3a^2+4a+3");
    printf(" = %.2f\n",d);
    d=0;
    for(i=1;i<=3;i++){
        d+=a;
    }
    d+=2;
    printf("c = 2+3a");
    printf(" = %.2f\n",d);
}
