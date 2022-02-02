#include <stdio.h>
void cube(int a){
    printf("Cube of %d is %d",a,a*a*a);
}
int main(){
    int a;
    printf(" Enter number :");
    scanf("%d",&a);
    cube(a);
    return 0;
}