#include <stdio.h>
#include <stdlib.h>

int **init(int m,int n){
    int **mat = malloc(m*sizeof(int*));
    for (int i=0;i<m;i++){
        *(mat+i) = malloc(n*sizeof(int));
    }
    return mat;
}

void display(int **a,int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("<------------>\n");
}

int **sum(int **a,int **b,int w,int x){
    int **s_arr = init(w,x);
    for (int i=0;i<w;i++){
        for (int j=0;j<x;j++){
            *(*(s_arr+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    return s_arr;
}

int **input_mat(int m,int n){
    int **mat = init(m,n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",(*(mat+i)+j));
        }
    }
    return mat;
}

// Return the product_matrice of dot Product of two matrices 
int **dot(int **a,int **b,int w,int z){
    int **p_arr = init(w,z);

    for (int i=0;i<w;i++){
        for (int j=0;j<z;j++){
           *(*(p_arr+i)+j) = 0;
           for (int k=0;k<z;k++){
               int n = *(*(a+i)+k);
               int m = *(*(b+k)+j);
               *(*(p_arr+i)+j) += n*m;
           } 
        }
    }
    return p_arr;
}

int **sub(int **a,int **b,int w,int x){
    int **s_arr = init(w,x);
    for (int i=0;i<w;i++){
        for (int j=0;j<x;j++){
            *(*(s_arr+i)+j) = *(*(a+i)+j) - *(*(b+i)+j);
        }
    }
    return s_arr;
}

int **t(int **a,int w,int x){
    int **t_arr = init(w,x);
    for (int i=0;i<x;i++){
        for (int j=0;j<w;j++){
            *(*(t_arr+i)+j) = *(*(a+j)+i);
        }
    }
    return t_arr;
}

int main(){
    int **a,**b,rc[2][2],yes=0;
    for (int i=0;i<2;i++){
        printf(" Enter row and column of %d matrice : ",i+1);
        scanf("%d %d",&rc[i][0],&rc[i][1]);
    }
    printf(" Enter %d values for matrice 1 : \n",rc[0][0] * rc[0][1]);
    a = input_mat(rc[0][0],rc[0][1]);
    printf(" Enter %d values for matrice 2 : \n",rc[1][0] * rc[1][1]);
    b = input_mat(rc[1][0],rc[1][1]);
    do{
        int choice;
        printf(" Enter your choice (0/1/2/3) : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            display(sum(a,b,rc[0][0],rc[0][1]),rc[0][0],rc[0][1]);
            break;
        case 1:
            display(sub(a,b,rc[0][0],rc[0][1]),rc[0][0],rc[0][1]);
            break; 
        case 2:
            display(t(a,rc[0][0],rc[0][1]),rc[0][0],rc[0][1]);
            display(t(b,rc[1][0],rc[1][1]),rc[1][0],rc[1][1]);
            break;
        case 3:
            display(dot(a,b,rc[0][1],rc[1][0]),rc[0][1],rc[1][0]);
            break;  
        case 4:
            display(a,rc[0][0],rc[0][1]);
            display(b,rc[1][0],rc[1][1]);        
        default:
            printf(" Invalid input ! ");
            break;
        }
        printf(" Want to do again ? 0/1 : ");
        scanf("%d",&yes);
    }while(yes==1);
    return 0;
}