#include <iostream>
using namespace std;

 int main(){
     int a,b,c,d;
     a = 3;
     b = 5;
     c = a,b; // Will select the first value 'a'
     d = (a,b); // Will select the second value 'b';
     cout<<c<<d;
     return 0;
 }