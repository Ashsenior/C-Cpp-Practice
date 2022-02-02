#include <stdio.h>
void maxmin(int a, int b){
    if (a==b){
        printf(" Both numbers are equal !");
    }
    else {
        printf("%d is greater \n",(a>b)?a:b);
        printf("%d is smaller \n",(a<b)?a:b);
    }
}
int main(){
    int a,b;
    for (int i=0;i<2;i++){
        printf(" Enter values of a and b :");
        scanf(" %d %d",&a,&b);
        maxmin(a,b);
    }
    return 0;
}