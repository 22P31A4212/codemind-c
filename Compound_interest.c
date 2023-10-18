#include<iostream> 
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    double p,r,t; 
    cin>>p>>r>>t; 
    cout<<fixed<<setprecision(2)<<p*pow(1+(r/100),t)<<endl; 
} 
