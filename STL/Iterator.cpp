#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    /*
        ITERATOR DECLARATION:
                    vector< int > :: iterator i;
                    vector< double > :: iterator j;
    */

    vector<int>v;
    v.pb(5);
    v.pb(10);
    v.pb(15);
    v.pb(20);
    v.pb(25);

    vector<int>::iterator i;

    for(i=v.begin();i<v.end();i++){

        printf("%d\n", *i);        // printing using iterator

    }


    return 0;
}
