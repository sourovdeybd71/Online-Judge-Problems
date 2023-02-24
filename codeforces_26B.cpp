#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')' && st.empty()==false && st.top()=='('){
            st.pop();
            count++;
        }
        else{
            st.push(s[i]);
        }
    }
    cout<<count*2;
}