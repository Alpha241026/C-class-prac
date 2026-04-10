//Inserting element at the end of an array

#include <stdio.h>

int main() {
    int arr[50]={10,2,6,90,87,15,67};
    int size=7;
    int element=100;
    for(int i=size-1;i>=size;i--){
        arr[i+1]=arr[i];
    }
    arr[size]=element;
    size++;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}