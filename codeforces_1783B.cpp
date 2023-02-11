#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
    cin>>n;
    list<int>l;
    for (int i = 1; i <= (n*n); i++)
    {
        /* code */
        l.push_back(i);
    }
    int grid[n][n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if((i+1)%2!=0){
            for (int j = 0; j < n; j++)
            {
                /* code */
                if((j+1)%2!=0){
                    grid[i][j]=l.back();
                    l.pop_back();
                }
                else{
                    grid[i][j]=l.front();
                    l.pop_front();
                }
            }
            
        }
        else{
              for (int j = n-1; j >=0 ; j--)
            {
                /* code */
                if((j+1)%2!=0){
                    grid[i][j]=l.front();
                    l.pop_front();
                }
                else{
                    grid[i][j]=l.back();
                    l.pop_back();
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    }
    
    
    
    
}