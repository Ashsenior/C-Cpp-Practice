#include <stdio.h>

int main(){
    int m,n;
    printf(" Enter the m and n for the matrix : ");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    return 0;
}