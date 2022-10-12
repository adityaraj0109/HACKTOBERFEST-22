// } Driver Code Ends
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s){

      stack<int> st;
      for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])){
          st.push(s[i] - '0');
        }
        else {
          int a = st.top(); st.pop();
          int b = st.top(); st.pop();

          switch (s[i]) {
            case '+': st.push(b+a);
            case '-': st.push(b-a);
            case '*': st.push(b*a);
            case '/': st.push(b/a);
          }
        }
      }
      return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;

    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code End