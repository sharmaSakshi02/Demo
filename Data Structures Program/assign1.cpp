#include<iostream>
using namespace std;
int main(){
    int i,j,k,x;
    cout<<"Enter any no."<<endl;
    cin>>x;
    string s1,s2;
    s1=to_string(x);
     s2=to_string(x);
     for(i=0;i<s1.length();i++){
         k=(int)(s1[i]);
         k=k-48;
         if(k%2==0){
             j=i+3;
             if(j>=s1.length()){
                 j=j-s1.length();
                 s2[i]=s1[j];
             }
             else{
                 s2[i]=s1[j];
             }
         }
         cout<<s2<<endl;
         return 0;
     }
    
}