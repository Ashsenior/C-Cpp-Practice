#include <iostream>
#include <map>
#include <cstring>

using namespace std;

void display(map<string,int> a){
    map<string , int> :: iterator itr;
    for (itr=a.begin();itr!=a.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
}
void input(int n,map<string,int> &marks){
    string s;
    int a;
    for (int i=0;i<n;i++){
        cin>>s>>a;
        marks[s]=a;
    }
}
int main(){

    map<string , int> marks;
    input(3,marks);
    display(marks);
    cout<<marks.size();

    return 0;
}