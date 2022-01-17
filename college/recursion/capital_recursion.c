#include <stdio.h>
static int in = 0;
void capital(char a[]){
    if (a[in]>=65 && a[in]<=90){
        printf(" Capital letter %c at index %d ",a[in],in);
    }
    else{
        in++;
        capital(a);
    }
}

int main(){
    char st[2];
    printf(" Enter a string : ");
    scanf("%s",&st);
    capital(st);
    return 0;
}