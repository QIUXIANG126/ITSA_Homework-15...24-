#include <iostream>
#include <string>
using namespace std;

int main(){
    string key=" `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+{}|:\"<>?";
    string In,Out;
    getline(cin,In);
    for(int i=0;i<In.size();i++){
        if(In[i]>='A' && In[i]<='Z')In[i]+=32;
        if(In[i]>=32 &&In[i]<=126){
            if(In[i]=='+' || In[i]=='=' || In[i]=='\'' || In[i]=='\"' || In[i]=='?' || In[i]=='/' || In[i]=='\\' ||  In[i]=='|' || In[i]==' '){
                Out+=In[i];
            }else{
                Out+=key[key.find(In[i])+1];
            }
        }
    }
    cout << Out << endl;
}