#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue< int > q;   // FIFO= First In First Out -> QUEUE

    q.push( 245 ); // inserting 100
    q.push( 360 ); // inserting 101
    q.push( 499 ); // inserting 102

    while( !q.empty() ) {

        cout << q.front() << endl;  // printing the front element

        q.pop();                    // removing that one after printing
    }

    return 0;
}
