#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    string KEY="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t found;
    getline(cin,a);
    if(a.size()>1000)a.resize(1000);
    for(int i=0;i<26;i++){
        found =-1;
        do{
            found=a.find(KEY[i],found+1);
            if(found!=string::npos) a[found]+=32;
        }while(found!=string::npos);
    }
    found=0;
    size_t found2,found3;string b;
    int c,g=-1;
    while(found!=string::npos){
        found2=found;
        found=a.find(" ",found+1);
        if(found2==0){
            b=a.substr(found2,found);
        }else{
            b=a.substr(found2+1,found-found2);
        }
        if(b[b.size()-1]==' ')b.erase(b.find(" "));
        found3=a.find(b);
        c=0;
        while(found3!=string::npos){
            if(found3!=string::npos)c+=1;
            if(c!=1)g=found3;
            found3=a.find(b,found3+1);
        }
        cout<<g<<endl;
        if(g!=-1)a.erase(g-1,b.size()+1);
        g=-1;
    }
    cout<<a;
}