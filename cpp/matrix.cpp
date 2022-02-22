#include <iostream>
#include <cstring>
using namespace std;

class matrix{
    int m,n;
    int **arr;
    public:
        matrix(int a,int b){
            m = a;
            n = b;
            arr = new int *[m];
            for (int i=0;i<m;i++){
                arr[i] = new int[n];
            }
        }
        void display(void);
        void input(void){
            for (int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    cin>>arr[i][j];
                }
            }
        }
        matrix sum(matrix b);
        matrix sub(matrix b);
        matrix transpose(void);
        matrix product(matrix);
};

void matrix :: display(void){
    cout<<"<----------------->"<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

matrix matrix :: sum(matrix b){
    matrix ne(m,n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            ne.arr[i][j] = arr[i][j] + b.arr[i][j];
        }
    }
    ne.display();
    return ne;
}

matrix matrix :: sub(matrix b){
    matrix ne(m,n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            ne.arr[i][j] = arr[i][j] - b.arr[i][j];
        }
    }
    ne.display();
    return ne;
}

matrix matrix :: transpose(void){
    matrix t_matrix(n,m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            t_matrix.arr[i][j] = arr[j][i];
        }
    }
    t_matrix.display();
    return t_matrix;
}

matrix matrix :: product(matrix b){
    if (n==b.m){
        matrix p_arr(m,b.n);
        for (int i=0;i<m;i++){
            for (int j=0;j<b.n;j++){
                p_arr.arr[i][j] = 0;
                int z = (m<b.n)?m:b.n;
                for (int k=0;k<z;k++){
                    p_arr.arr[i][j] += arr[i][k]*b.arr[k][j];
                } 
            }
        }
        p_arr.display();
    }
    else{
        cout<<" Product cannot be taken out because order are not correct ! "<<endl;
    }
}

int main(){
    int m,n,rc[2][2];
    for (int i=0;i<2;i++){
        cout<<" Enter rows and column of matrice "<<i<<" : ";
        cin>>rc[i][0]>>rc[i][1];
    }
    matrix a(rc[0][0],rc[0][1]), b(rc[1][0],rc[1][1]);
    a.input();
    cout<<"Next array :"<<endl;
    b.input();
    cout<<" 0 for display "<<endl;
    cout<<" 1 for addition "<<endl;
    cout<<" 2 for subtraction "<<endl;
    cout<<" 3 for transpose "<<endl;
    cout<<" 4 for product "<<endl;
    int choice;
    string ch;
    do{
        cout<<" Enter your choice(0/1/2/3/4) : ";
        cin>>choice;
        switch (choice)
        {
        case 0:
            a.display();
            b.display();
            break;
        case 1:
            a.sum(b);
            break;
        case 2:
            a.sub(b);
            break;
        case 3:
            a.transpose();
            b.transpose();
            break;
        case 4:
            a.product(b);
            break;
        default:
            cout<<" Invalid input ! "<<endl;
            break;
        }
        cout<<" Want to use func again ? (yes/no) : ";
        cin>>ch;
    }while(ch=="yes");
    return 0;
}