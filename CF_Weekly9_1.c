//รับตัวเลข input มา 5 ตัวแล้วให้เรียงลำดับจากน้อยไปมากแสดงออกมาเป็น output
#include<stdio.h>
int swap(int *arr,int i){
    int temp;
    int *num;
    num=arr;
    temp=*(num+i);
    *(num+i)=*(num+i+1);
    *(num+i+1)=temp;
    return *arr;
}

int main(){
    int arr[5];
    printf("input 5 num: ");
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for(int r=0;r<20;r++){
        for(int i=0;i<4;i++){
            if(arr[i]>arr[i+1]){
                swap(arr,i);
            }
        }
    }
    for(int a=0;a<5;a++){
        printf("%d ",arr[a]);
    }
}