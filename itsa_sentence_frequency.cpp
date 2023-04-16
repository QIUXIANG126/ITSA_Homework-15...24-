#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    int c=0;
    cin>>a>>b;
    if(a.size()>128)a.resize(128);
    if(b.size()>512)b.resize(512);
    size_t found=-1;
    do{
        found=b.find(a,found+1);
        if(found!=string::npos)c+=1;
    }while(found!=string::npos);
    cout<<c<<endl;
}