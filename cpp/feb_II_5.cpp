#include <iostream>
#include <cstring>
using namespace std;

int xor_of(char l,char m){
    return l^m;
}

int main() {
	string a;
	int t;
    cout<<"Enter t :";
	cin>>t;
	for (int i=0;i<t;i++){
        cout<<"Enter string :";
	    cin>>a;
        cout<<a;
	    int n = a.size();
	    bool nope = false;
	    for (int j=0;j<n;j++){
	        if (j==0){
	            continue;
	        }
	        else {
	            int l = xor_of(a[j],a[n-j]);
	            int m = xor_of(a[j-1],a[n-j-1]);
                cout<<l<<m;
	            if (l!=m){
	                nope = true;
	                break;
	            }
	        }
	        if (nope){
	            cout<<"No"<<endl;
	            break;
	        }
	        else {
	            cout<<"Yes"<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
