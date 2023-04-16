#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b=0,c=0;
    for(int i=1;i<=10;i++){
        cin>>a;
        if(a>b)b=a;
        if(a<c)c=a;
    }
    cout<<fixed<<setprecision(2);
    cout<<"maximum:"<<b<<endl;
    cout<<"minimum:"<<c<<endl;
}