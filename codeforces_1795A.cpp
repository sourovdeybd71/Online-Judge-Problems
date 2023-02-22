#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n, m, p1=0, p2=0;
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;
        for (int i = 0; i < n-1; i++)
        {
            /* code */
            if(a[i]==a[i+1]){
                p1++;
            }

        }
        for (int i = 0; i < m-1; i++)
        {
            /* code */
            if(b[i]==b[i+1]){
                p2++;
            }

        }
        if(p1<=0 && p2<=0){
            cout<<"Yes"<<'\n';
        }
        else if(p1>=2 || p2>=2){
            cout<<"No"<<"\n";
        }
        else if(p1>=1 && p2>=1){
            cout<<"No"<<"\n";
        }
        else{
            if(a[n-1]==b[m-1]){
                cout<<"No"<<"\n";
            }
            else{
                cout<<"Yes"<<"\n";
            }
        }

        

    }
    
}