#include<stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Eelement is: %d\n",arr[i]);
    }
    }

int indInsertion(int arr[],int size,int capacity,int index,int Element){

    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=Element;
    return 1;
}

int main(){
 int arr[100]={1,2,3,4,5};
 int size =5,Element=5,index=3;
  size +=1;

 indInsertion(arr,size,100,index,Element);
 display(arr,size);
 return 0;
}