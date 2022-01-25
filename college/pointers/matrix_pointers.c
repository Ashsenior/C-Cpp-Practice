#include <stdio.h>
#include <stdlib.h>

void product(int *a[10], int *b[10],int w,int x,int y,int z){
    int *p_arr[10];
    for (int l=0;l<10;l++){
        p_arr[l] = (int*) malloc(10*sizeof(int));
    }
    for (int i=0;i<w;i++){
        for (int j=0;j<z;j++){
           *(p_arr[i]+j) = 0;
           for (int k=0;k<z;k++){
               int n = *(a[i]+k);
               int m = *(b[k]+j);
               *(p_arr[i]+j) += n*m;
           } 
        }
    }
    for (int k=0;k<w;k++){
        for (int l=0;l<z;l++){
            printf("%d\t",*(p_arr[k]+l));
        }
        printf("\n");
    }
}

int main(){
    int rc[2][2];
    int *mat1[10],*mat2[10];
    // Dynamically allocating memory to the array of pointers
    for (int k=0;k<10;k++){
        mat1[k] = malloc(10*sizeof(int));
        mat2[k] = malloc(10*sizeof(int));
    }    
    for (int i=0;i<2;i++){
        printf(" Enter m and n for matrix %d : ",i+1);
        scanf("%d %d",&rc[i][0],&rc[i][1]);
    }
    printf(" Enter the values for array 1 : \n");
    for (int i=0;i<rc[0][0];i++){
        for (int j=0;j<rc[0][1];j++){
            scanf("%d",(mat1[i]+j));
        }
    }
    printf(" Enter the values for array 2 : \n");
    for (int i=0;i<rc[1][0];i++){
        for (int j=0;j<rc[1][1];j++){
            scanf("%d",(mat2[i]+j));
        }
    }

    product(mat1,mat2,rc[0][0],rc[0][1],rc[1][0],rc[1][1]);
    return 0;
}