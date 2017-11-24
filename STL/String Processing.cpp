#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    a="This is a Simple String ";   //Assigning Value of  a string

    b=a;                          // Copy

    c = a + b ;                 // Concatenation

    cout<<c<<endl;               // print string c

    printf("%s\n",c.c_str());    // string type print using printf() function


    cout<<c.size()<<endl;        // print the length of the string

    for(int i=0; i<c.size();i++){ //string print character by character
        cout<<c[i];
    }


    //string can be put in vector like this
    vector<string>vs;


    return 0;
}
