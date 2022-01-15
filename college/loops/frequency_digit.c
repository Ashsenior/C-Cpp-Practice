#include <stdio.h>
#include <string.h>

int main(){
    int n,i=0,updated=0;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    printf(" Enter any number : ");
    scanf("%d",&n);
    while (n!=0){
        int a = n%10;
        printf("%d",a);
        n = n/10;
        arr[a]++;
    }
    for (int i=0;i<10;i++){
        printf("Frequency of %d is %d \n",i,arr[i]);
    }
    return 0;
}