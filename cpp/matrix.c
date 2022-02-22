#include <stdio.h>
const int m = 10;
const int n = 10;

void display(int arr[m][n],int w,int x){
    for(int i=0;i<w;i++){
        for (int j=0;j<x;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");
}

void sum(int a[m][n],int b[m][n],int w,int x){
    int new_arr[m][n];
    for (int i=0;i<w;i++){
        for (int j=0;j<x;j++){
            new_arr[i][j] = a[i][j] + b[i][j];
        }
    }
    display(new_arr,w,x);
}
void sub(int a[m][n],int b[m][n],int w,int x){
    int new_arr[m][n];
    for (int i=0;i<w;i++){
        for (int j=0;j<x;j++){
            new_arr[i][j] = a[i][j] - b[i][j];
        }
    }
    display(new_arr,w,x);
}
void transpose(int a[m][n],int w,int x){
    int t_arr[n][m];
    for (int i=0;i<x;i++){
        for (int j=0;j<w;j++){
            t_arr[i][j] = a[j][i];
        }
    }
    display(t_arr,x,w);
}
void product(int a[m][n], int b[n][m],int w,int x,int y,int z){
    int p_arr[m][n];
    for (int i=0;i<w;i++){
        for (int j=0;j<z;j++){
           p_arr[i][j] = 0;
           for (int k=0;k<z;k++){
               p_arr[i][j] += a[i][k]*b[k][j];
           } 
        }
    }
    for (int k=0;k<w;k++){
        for (int l=0;l<z;l++){
            printf("%d\t",p_arr[k][l]);
        }
        printf("\n");
    }
}

void input(int arr[m][n], int a,int b){
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

int main(){
    int a[m][n],b[m][n],row_col[2][2];

    for (int i=0;i<2;i++){
        printf(" Enter rows and column of %d arr : ",i+1);
        scanf("%d %d",&row_col[i][0], &row_col[i][1]);
    }
    printf(" Enter value inside matrix : ");
    input(a,row_col[0][0],row_col[0][1]);
    printf(" Second matrix : ");
    input(b,row_col[1][0],row_col[1][1]);

    int choice;
    char ch;
    do{
        printf(" Enter your choice(0/1/2/3) : ");
        scanf("%d",&choice);
        if (choice==0){
        sum(a,b,row_col[0][0],row_col[0][1]);
        }
        else if(choice==1){
        sub(a,b,row_col[0][0],row_col[0][1]);
        }
        else if(choice==2){
            transpose(a,row_col[0][0],row_col[0][1]);
            transpose(b,row_col[1][0],row_col[1][1]);
        }
        else if(choice==3){
            product(a,b,row_col[0][0],row_col[0][1],row_col[1][0],row_col[1][1]);
        }
        else {
            printf(" Invalid option ! ");
        }
        printf(" Want to do again ? (y/n) : ");
        scanf(" %c",&ch);
    }while(ch=='y');
    return 0;
}