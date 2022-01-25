#include <stdio.h>

int main(){
    int a=10;
    // A valid pointer
    int *ptr = &a;
    printf(" Value initially inside pointer : %d\n",*ptr);
    // Making it a NULL pointer
    ptr = 0;
    if (ptr==NULL){
        printf(" NULL pointer");
    }
    else{
        printf(" Not a NULL pointer");
    }
    return 0;
}