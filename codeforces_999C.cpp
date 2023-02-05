#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, vector<int>> idx;
    for (int i = 0; i < n; i++)
    {
        /* code */
        //see code of STL/map.cpp to understand this
        idx[s[i]].push_back(i);
    }
    map<int,bool> visited;
    for(char ch='a';ch<='z';ch++){
        for (int i = 0; i < idx[ch].size() && k>=1; i++)
        {
            /* code */
            int index= idx[ch][i];
            visited[index]=true;
            k--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(!visited[i]){
            cout<<s[i];
        }
        
    }
    cout<<'\n';
    
}