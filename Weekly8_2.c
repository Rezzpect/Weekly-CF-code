//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสามเหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)#include<stdio.h>
#include<stdio.h>
int main(){
    int num,column=1,row=1,c=1;
    printf("enter num: ");
    scanf("%d",&num);
    while(1){
        if(row<=c){
            printf("*");
            row++;
        }
        else{
            printf("\n");
            column++;
            row=1;
            c++;
        }
        if(column>num){
            break;
        }
    }
}