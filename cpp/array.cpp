#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr(10,0);
    int q[4][3] = {{2,6,8},{3,5,7},{1,8,1},{5,9,15}};
    for (int i=0;i<4;i++){
        int a = q[i][0],b=q[i][1],k=q[i][2];
        arr[a-1] += k;
        arr[b] -= k;
    }
    display(arr);
    int maxval=0,it=0;
    for (int i=0;i<arr.size();i++){
        it+=arr[i];
        if (it>maxval){
            maxval=it;
        }
        cout<<"m "<<maxval<<" i "<<it<<endl;
    }
    return 0;
}