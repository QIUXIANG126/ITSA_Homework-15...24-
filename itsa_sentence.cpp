#include <iostream>
#include <string>
using namespace std;

int main(){
    string In,Out1,Out2;
    getline(cin,In);
    if(In.size()<=1000){
        for(int i=0;i<In.size();i++){
        if(In[i]>=65 && In[i]<=90)In[i]+=32;
        }
        In+=" ";
        size_t found=0;
        size_t foundRE=0;
        while(found!=string::npos){
            int foundL = found;
            found=In.find(" ",found+1);
            int foundR = found;
            for(int i=foundL;i<=foundR;i++){
                if(In[i]!=' ')Out1+=In[i];
            }

            if(Out1.size()==1){
                if(Out1[0]>=97 && Out1[0]<=122){
                    Out1[0]-=32;
                }
            }
        
            foundRE=Out2.find(Out1);
            if(foundRE == string::npos ){
                Out2+=Out1+" ";
            }
            Out1.clear();
        }
        for(int i=0;i<Out2.size();i++){
            if(Out2[i]>=65 && Out2[i]<=90)Out2[i]+=32;
        }
        Out2.erase(Out2.find_last_of(" "));
        cout << Out2 << endl;
    }
}
