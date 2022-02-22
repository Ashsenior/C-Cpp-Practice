#include <iostream>
#include <list>
using namespace std;

int display(list<int> l){
    list<int> :: iterator it = l.begin();
    for (it;it!=l.end();it++){
        cout<<*(it)<<"\t";
    }
    cout<<endl;
}

int check(list<int> l){
    list<int> :: iterator it = l.begin();
    int op=0;
    for (int i=0;i<l.size();i++){
        if (*(it)==i+1){
            int k=i+4;
            op++;
            l.insert(it,k);
            display(l); 
            it++;
            i++;
        }
        else {
            it++;
        }
    }
    return op;
}

int main(){
    int t;
    cout<<"Enter number of test cases : ";
    cin>>t;
    for (int i=0;i<t;i++){
        list<int> l;
        int n;
        cout<<"Enter number of values : ";
        cin>>n;
        for (int j=0;j<n;j++){
            int a;
            cin>>a;
            l.push_back(a);
        }
        cout<<"Number of operations : "<<check(l)<<endl;
    }
    return 0;
}