#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue< int > q;  //Priority

    q.push( 569649 );       // inserting 569649
    q.push( 9678 );         // inserting 9678
    q.push( 9768456 );       // inserting 9768456

    while( !q.empty() ) {
        cout << q.top() << endl;   // printing the top
        q.pop();                   // removing that one
    }
    return 0;
}
