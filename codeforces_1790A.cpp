#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        
    string PI="314159265358979323846264338327";

    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(PI[i]==s[i]){
            ans++;

        }
        else{
            break;
        }
        
    }
    cout<<ans<<endl;
    }
    
}