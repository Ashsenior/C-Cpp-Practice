#include <stdio.h>

int A(int m,int n){
    if (m==0){
        return n+1;
    }
    else if(m>0 && n==0){
        return A(m-1,1);
    }
    else if(m>0 && n>0){
        return A(m-1,A(m,n-1));
    }
}

int main(){
    int m,n;
    printf(" Enter any 2 numbers : ");
    scanf("%d %d",&m,&n);
    printf(" Ackerman function returns : %d",A(m,n));
    return 0;
}