/*จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
BMI = Weight / Height^2
เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร 
(เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)
*/
#include<stdio.h>
int main()
{
    float kg,m,BMI;
    printf("Enter your weight: ");
    scanf("%f",&kg);
    printf("\nEnter your height: ");
    scanf("%f",&m);
    BMI = kg/(m*m);
    printf("\nYour BMI is: %.1f",BMI);
    if(BMI < 18.5){
        printf("\nYour BMI is lower than average");
    }
    else if(BMI>=18.5 && BMI<=24.9){
        printf("\nYour BMI is average");
    }
    else if(BMI>=25.0 && BMI<=29.9){
        printf("\nYour BMI is above average");
    }
    else {
        printf("\nYou're too Obese");
    }


}