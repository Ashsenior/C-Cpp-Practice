#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("newfile.txt");
    string s="hello";
    out<<s+" world";
    out.close();

    ifstream in;
    in.open("newfile.txt");
    string content;
    getline(in,content);
    cout<<content;
    in.close();
    return 0;
}