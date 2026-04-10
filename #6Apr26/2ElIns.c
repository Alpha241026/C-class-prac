//Inserting element in the specific position of an array

#include <stdio.h>

int main() {
    int arr[50]={10,2,6,90,87,15,67};
    int size=7;
    int element=25;
    int pos=3;
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    size++;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}