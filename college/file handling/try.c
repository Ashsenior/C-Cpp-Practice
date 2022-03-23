#include <stdio.h>
typedef struct{
    int l;
    int b;
}rectangle;
typedef struct{
    int r;
}circle;
void area(rectangle a){
    printf("%d",a.l*a.b);
}
void area(circle c){
    printf("%d",3.14*c.r);
}
int main(){
    rectangle a;
    a.l=12;
    a.b=3;
    area(a);
    circle c;
    c.r=2;
    area(c);
    
    return 0;
}