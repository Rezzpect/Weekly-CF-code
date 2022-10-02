//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
#include<stdio.h>
void py(int n){
    int row=1,column=1,b=n,a=n,c=n+n-1;
    while(1){
        if(column<=c){
            if(column<b||column>a){
                printf(" ");
                column++;
            }
            else{
                printf("*");
                column++;
            }
        }
        if(column>c){
            printf("\n");
            row+=1;
            column=1;
            b-=1;
            a+=1;
        }
        if(row>n){
            break;
        }
    }
}
int main(){
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    py(num);
}