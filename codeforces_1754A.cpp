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
        string s;
        cin>>s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            /* code */
            char c=s[i];
            if(c=='Q'){
                st.push(c);
            }
            else{
                if(st.empty()==false){
                    st.pop();
                }

            }


        }
        if(st.empty()==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        

    }
    
}