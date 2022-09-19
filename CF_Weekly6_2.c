/*
จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
*/
#include<stdio.h>
int main(){
    int row=1,column=1,n;
    printf("enter num: ");
    scanf("%d",&n);
    while(1){
        if(row<=n){
            if(row==1||row==n||column==1||column==n){
               printf("*");
               row++;
            }
            else{
               printf(" ");
               row++;
            }
        }
        else{
            printf("\n");
            column++;
            row=1;
        }
        if(column>n){
            break;
        }
    }
}
