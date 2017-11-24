#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<string,int>m;

    string str;

    while(cin>>str){
        if(str=="stop")
            break;
        m[str]++;

        cout<<str<<" Number counted "<<m[str]<<endl;
    }

    return 0;
}
