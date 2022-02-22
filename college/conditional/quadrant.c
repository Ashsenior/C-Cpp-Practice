#include <stdio.h>

int main(){
    double a,b;
    printf(" Enter x and y :");
    scanf("%lf %lf",&a,&b);
    printf("%lf %lf",a,b);
    if (a>0 && b>0){
        printf(" 1st quadrant ");
    }
    else if (a<0 && b>0){
        printf(" 2nd quadrant ");
    }
    else if (a<0 && b<0){
        printf(" 3rd quadrant ");
    }
    else if (a>0 && b<0){
        printf(" 4th quadrant ");
    }
    else{
        printf(" The point is origin ");
    }
    return 0;
}