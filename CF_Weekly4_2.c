/*จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
BMI = Weight / Height^2
เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร 
(เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)
*/
#include<stdio.h>
int main()
{
    float kg,m,BMI;
    int temp;
    printf("Enter your weight: ");
    scanf("%f",&kg);
    printf("Enter your height: ");
    scanf("%f",&m);
    BMI = kg/(m*m);
    printf("\nYour BMI is: %f",BMI);
    temp=(int)BMI;
    switch (temp)
    {
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
        printf("\nYour BMI is above average");
        break;
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
    case 18:
        if(BMI>=18.5){
            printf("\nYour BMI is average");
        }
        else{
            printf("\nYour BMI is lower than average");
        }
        break;
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("\nYour BMI is lower than average");
        break;
    
    
    default:
        printf("\nYou're too Obese");
        break;
    }
  

    
}