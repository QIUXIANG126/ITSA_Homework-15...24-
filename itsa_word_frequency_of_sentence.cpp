#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string KEY="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key="abcdefghijklmnopqrstuvwxyz";
    int b=0;
    getline(cin,a);
    if(a.size()>100)a.resize(100);
    for(int i=0;i<26;i++){
        size_t found =-1;
        do{
            found=a.find(KEY[i],found+1);
            if(found!=string::npos) a[found]=key[i];
        }while(found!=string::npos);
    }
    size_t found= -1;
    do{
        found=a.find(" ",found+1);
        if(found!=0 && a[found-1]!=' ' && a.size()!=0)b+=1;
    }while(found!=string::npos);
    cout<<b<<endl;
    for(int i=0;i<26;i++){
        size_t found= -1;
        b=0;
        do{
            found=a.find(key[i],found+1);
            if(found!=string::npos)b+=1;
        }while(found!=string::npos);
        if(b!=0)cout<<key[i]<<" : "<<b<<endl;
    }
}