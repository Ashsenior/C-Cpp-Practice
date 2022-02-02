#include <stdio.h>
void findall(int radius){
    printf("Diameter is %d \n",radius*2);
    float c = 2 * radius * 3.14;
    printf("Circumference is %f \n",c);
    float a = 3.14 * radius * radius;
    printf("Area is %.2f \n",a);
}
int main(){
    int r;
    printf(" Enter the radius of circle :");
    scanf("%d",&r);
    findall(r);
    return 0;
}