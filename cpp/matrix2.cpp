#include <iostream>
using namespace std;
const int m = 3;
const int n = 2;
int a,b;
void display(int arr[m][n]){
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void display_transpose(int arr[n][m]){
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void sum(int a[m][n],int b[m][n]){
    int new_arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            new_arr[i][j] = a[i][j] + b[i][j];
        }
    }
    display(new_arr);
}
void sub(int a[m][n],int b[m][n]){
    int new_arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            new_arr[i][j] = a[i][j] - b[i][j];
        }
    }
    display(new_arr);
}
void transpose(int a[m][n]){
    int t_arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            t_arr[i][j] = a[j][i];
        }
    }
    display_transpose(t_arr);
}
void product(int a[2][n], int b[n][m]){
    int p_arr[2][m];
    for (int i=0;i<2;i++){
        //cout<<"1";
        for (int j=0;j<m;j++){
            //cout<<"2";
            p_arr[i][j] = 0;
            cout<<p_arr[i][j]<<"\t";
            int z = (m>n)?n:m;
            for (int k=0;k<z;k++){
               p_arr[i][j] += a[i][k]*b[k][j];
           } 
        }
    }
    for (int k=0;k<2;k++){
        for (int l=0;l<m;l++){
            cout<<p_arr[k][l]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int a[2][2] = {{1,2},{3,4}};
    int b[2][3] = {{2,1,5},{4,3,1}};
    //sum(a,b);
    //transpose(a);
    int choice;
    cin>>choice;
    if (choice==0){
        //sum(a,b);
    }
    else if(choice==1){
        //sub(a,b);
    }
    else if(choice==2){
        transpose(a);
    }
    else if(choice==3){
        product(a,b);
    }
    else {
        cout<<"Invalid option ";
    }
    return 0;
}