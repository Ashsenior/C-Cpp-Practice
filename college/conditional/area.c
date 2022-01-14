#include <stdio.h>
float area;
void square(int side){
    printf("Area is : %d \n",side*side);
}
void circle(int radius){
    const float pie = 3.14;
    area = (float) pie * radius * radius;
    printf(" Area is : %f \n",area);
}
void rectangle(int length ,int breadth){
    printf(" Area is : %d \n",length*breadth);
}
void trapezium(int par1,int par2,int height){
    printf("%d %d %d",par1,par2,height);
    area = (0.5) * (par1+par2) * height;
    printf(" Area is : %f \n",area);
}
void triangle(int base,int height){
    area = (float) (0.5) * base * height;
    printf(" Area is : %f \n",area);
}

int main(){
    int ch;
    char choice='n';
    do{
        int a,b,c;
        printf(" Enter your choice : ");
        scanf("%d",&ch);
        if (ch==0){
            printf("Square\n");
            scanf("%d",&a);
            square(a);
        }
        else if (ch==1){
            printf("Circle\n");
            scanf("%d",&a);
            circle(a);
        }
        else if (ch==2){
            printf("Rectangle\n");
            scanf("%d %d",&a,&b);
            rectangle(a,b);
        }
        else if (ch==3){
            printf("Trapezium\n");
            scanf("%d %d %d",&a,&b,&c);
            trapezium(a,b,c);
        }
        else if(ch==4){
            printf("Triangle\n");
            scanf("%d %d",&a,&b);
            triangle(a,b);
        }
        else {
            printf("Invalid choice");
        }
        printf("Want to do again(y/n) : ");
        scanf(" %c",&choice);
    }while(choice=='y');
    return 0;
}