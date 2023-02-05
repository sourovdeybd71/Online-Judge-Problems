#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    map<string,int> count;
    while (n--)
    {
        string s;
        cin>>s;
        if(count[s]>=1){
            cout<<s<<count[s]<<'\n';
        }
        else{
            cout<<"OK"<<'\n';
        }
        count[s]++;
        /* code */
    }
    
    
}