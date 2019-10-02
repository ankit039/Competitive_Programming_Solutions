#include <bits/stdc++.h>

using namespace std;



int main(){
    string s;
    cin>>s;
    stack<char> op;
    op.push(s[0]);
    for(int i=1;i<s.size();i++){
        //push if stack is empty "or" s[i] is not equal to the top element of satck
        if(op.empty() || s[i]!=op.top()){
            op.push(s[i]);
        }
        else{
            //popping the top element from stack if s[i] and element on top of the stack are same
            op.pop();
        }
    }
    if(op.empty()){
        cout<<"Empty String";
    }
    else{
        stack<char> ans;
        //reversing the stack
        while(!op.empty()){
            ans.push(op.top());
            op.pop();
        }
        while(!ans.empty()){
            cout<<ans.top();
            ans.pop();
        }
    }
return 0;  
}

