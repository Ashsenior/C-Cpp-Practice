#include <stdio.h>
#include <stdlib.h>

void product(int **a, int **b,int w,int z){
    // Creating a new product array using pointer to the pointer
    int **p_arr = malloc(w*sizeof(int*));
    for (int l=0;l<w;l++){
        *(p_arr+l) = malloc(z*sizeof(int));
    }

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

    for (int k=0;k<w;k++){
        for (int l=0;l<z;l++){
            printf("%d\t",*(*(p_arr+k)+l));
        }
        printf("\n");
    }
}

int main(){
    int rc[2][2];  
    // m and n for both of the matrix 
    for (int i=0;i<2;i++){
        printf(" Enter m and n for matrix %d : ",i+1);
        scanf("%d %d",&rc[i][0],&rc[i][1]);
    }
    // Dynamically allocating m number of pointer memory to each pointer to pointer
    int **mat1 = malloc((rc[0][0])*sizeof(int*));
    int **mat2 = malloc((rc[1][0])*sizeof(int*));
    // Dynamically allocating n number of integer memory to each pointer
    for (int i=0;i<rc[0][0];i++){
        *(mat1+i) = malloc(rc[0][1]*sizeof(int));
    } 
    for (int i=0;i<rc[1][0];i++){
        *(mat2+i) = malloc(rc[1][1]*sizeof(int));
    } 
    // Enterimg value in the matrix 
    printf(" Enter the values for array 1 : \n");
    for (int i=0;i<rc[0][0];i++){
        for (int j=0;j<rc[0][1];j++){
            scanf("%d",(*(mat1+i)+j));
        }
    }
    printf(" Enter the values for array 2 : \n");
    for (int i=0;i<rc[1][0];i++){
        for (int j=0;j<rc[1][1];j++){
            scanf("%d",(*(mat2+i)+j));
        }
    }

    product(mat1,mat2,rc[0][0],rc[1][1]);
    return 0;
}