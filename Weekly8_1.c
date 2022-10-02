//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสามเหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
#include<stdio.h>
int main(){
    int num,col=1;
    printf("enter num: ");
    scanf("%d",&num);
    for(int n=1;n<=num;n++){
        for(int i=1;i<=col;i++){
            printf("*");
        }
        printf("\n");
        col++;
    }
}