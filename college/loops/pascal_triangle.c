#include <stdio.h>

int factorial(int n){
    if (n<=1){ return 1; }
    else{ return n*factorial(n-1); }
}

int main(){
    int n;
    printf("How many rows you want to display ? : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int c=0;c<=(n-i-2);c++){ printf(" "); }
        for (int c=0;c<=i;c++){
            printf(" %d ",factorial(i)/(factorial(c)*factorial(i-c)));
        }
        printf("\n");
    }
    return 0;
}