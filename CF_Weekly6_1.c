/*
จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมด้านเท่ากับตัวเลขที่รับเข้ามาที่มีด้านในกลวง ดังตัวอย่าง (Level 2)
*/
#include<stdio.h>
int main(){
    int row,column,n;
    printf("enter num: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(column=1;column<=n;column++){
            if(row==1||row==n||column==1||column==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
