//ให้นักศึกษาเขียนโปรแกรมเพื่อรับข้อมูล String 1 ชุด แล้วแสดงผลลัพธ์โดยเปลี่ยนตัวอักษรตัวพิมพ์เล็กให้กลายเป็นตัวอักษรตัวพิมพ์ใหญ่ 
//และตัวอักษรตัวพิมพ์ใหญ่ กลายเป็นตัวอักษรตัวพิมพ์เล็กเช่นรับข้อมูล AbcDefg จะแสดงผล aBCdEFG (Level 3)
#include<stdio.h>
#include <ctype.h>

int main(){
   char str[100];
   printf("Enter a string: ");
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++){
      if(isupper(str[i]) ) {
      printf("%c ", tolower(str[i]) );
      } 
      else {printf("%c ", toupper(str[i]) );
      }
   }
}