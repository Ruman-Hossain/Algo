#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st; //Last in First out -> Stack

    //Push integer in  stack

    st.push(125);
    st.push(250);
    st.push(325);
    st.push(400);

    while(!st.empty()){
        cout<<st.top()<<endl;     // print the top element of the stack

        st.pop();                 // Removing that one after printing
    }


    return 0;
}
