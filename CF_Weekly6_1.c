//ให้นักศึกษาเขียนโปรแกรมเพื่อรับข้อมูล String 1 ชุด แล้วแสดงผลลัพธ์โดยเปลี่ยนตัวอักษรตัวพิมพ์เล็กให้กลายเป็นตัวอักษรตัวพิมพ์ใหญ่ 
//และตัวอักษรตัวพิมพ์ใหญ่ กลายเป็นตัวอักษรตัวพิมพ์เล็กเช่นรับข้อมูล AbcDefg จะแสดงผล aBCdEFG (Level 3)

#include<stdio.h>
int main(){
    char str[100],*p;
    p = str;
    printf("Enter a string: ");
    scanf("%s",str);
    while(*p!='\0'){
        if(*p>64&&*p<91){
            *p+=32;
            printf("%c",*p);
            p++;
        }
        if(*p>96&&*p<123){
            *p-=32;
            printf("%c",*p);
            p++;
        }
    }
    
}
