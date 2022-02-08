#include <stdio.h>

int main(){
    int a,len;
    printf(" Enter the length of array and index of split: ");
    scanf("%d %d",&len,&a);
    int arr[len],first[a],added[len+a];
    for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    // Creates and fill a new array with the first part of the splitted array
    for (int i=0;i<len;i++){
        if (i<a){
            first[i] = arr[i];
        }
    }
    // Create a new array with first[] at the back of the arr[]
    for (int j=0;j<len+a;j++){
        if (j<len){
            added[j] = arr[j];
        }
        else {
            added[j] = first[j-len];
        }
    }
    for (int i=0;i<len+a;i++){
        printf("%d",added[i]);
    }
    return 0;
}