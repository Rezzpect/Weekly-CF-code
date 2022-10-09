//รับตัวเลข input มา 5 ตัวแล้วให้เรียงลำดับจากน้อยไปมากแสดงออกมาเป็น output
#include<stdio.h>
int arrange(int *arr,int *new){
    int temp,i,*num1,*num2;
    num1=arr;
    num2=new;
    for(int a=0;a<5;++a){
        printf("%d ",*(num1+a));
    }
    for(int round=0;round<=4;round++){
        for(i=0;i<=3;++i){
            if(temp>*(num1+i+1)){
                temp=*(num1+i+1);
            }
            
        }
        printf("%d\n",temp);
        for(int a=0;a<5;a++){
            if(*(num1+a)==temp){
                *(num1+a)=999999999;
            }
        }
        *(num2+round)=temp;
        temp=*(num1);
    }
    return *num1+*num2;
}

int  main(){
    int arr[5],new[5];
    printf("input 5 num: ");
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    arrange(arr,new);
    for(int a=0;a<5;a++){
        printf("%d ",new[a]);
    }
}