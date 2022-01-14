#include <stdio.h>
void maxmin(int a, int b){
    printf("%d is greater \n",(a>b)?a:b);
    printf("%d is smaller",(a<b)?a:b);
}
int main(){
    maxmin(2,3);
    return 0;
}