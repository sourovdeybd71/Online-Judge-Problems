#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,c;
        cin>>n>>c;
        unordered_map<int, int> ump;
        for (int i = 1; i <=n; i++)
        {
            /* code */
            int p;
            cin>>p;
            ump[p]++;
        }
        int ans=0;
        for(auto it: ump){
            ans=ans+min(it.second, c);
        }
        cout<<ans<<'\n';
        
    }
    
}