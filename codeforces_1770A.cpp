#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n, m;
        cin>>n>>m;
        list<int>l;
        
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int in;
            cin>>in;
            l.push_back(in);
            sum+=in;

        }
        l.sort();
        for (int i = 0; i < m; i++)
        {
            /* code */
            int in;
            cin>>in;
            sum-=l.front();
            sum+=in;
            l.pop_front();
            l.push_front(in);
            l.sort();
        }
        cout<<sum<<"\n";
        
        
    }
    
}