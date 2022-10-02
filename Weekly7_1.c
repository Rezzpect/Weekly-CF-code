//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
#include<stdio.h>
void py(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int c=1;c<=n-i;c++){
            printf(" ");
        }
        for(int b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
        a+=2;
    }
}

int main(){
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    py(num);
}