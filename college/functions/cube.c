#include <stdio.h>
void cube(int a){
    printf("Cube is : %d",a*a*a);
}
int main(){
    int a;
    scanf("%d",&a);
    cube(a);
    return 0;
}