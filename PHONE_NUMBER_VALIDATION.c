#include<iostream>  
#include<string>  
using namespace std;  
int main(){  
    int n;  
    cin>>n;  
    string str1=to_string(n);  
    if(str1.length()==10&&str1[0]!='0'){  
        cout<<"Valid"<<endl;  
    }else{  
        cout<<"Invalid"<<endl;  
    }  
}