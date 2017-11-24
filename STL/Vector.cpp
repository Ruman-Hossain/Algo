/*
Vector Declaration:

        vector< int > array;
        vector< double > water;
        vector< long long > balance;
        vector< char > characters;
        vector< day > diary;

Vector Push:
      array.push_back( 100 );
      
*/



#incldue<bits/stdc++.h>
using namespace std;
int main() {
    vector< int > v;
    v.push_back( 1 ); 
    v.push_back( 2 ); 
    v.push_back( 3 ); 
    v.push_back( 4 ); 

    for(int i=0; i<v.size(); i++) cout << v[i] << endl;
    
    return 0;   
}

/*
int main() {
    vector< int > v, t;
    v.push_back( 1 ); 
    v.push_back( 2 ); 
    v.push_back( 3 ); 
    v.push_back( 4 ); 

    t = v; // copying
    for(int i=0; i<t.size(); i++) cout << t[i] << endl;
        
    return 0;   
} 

*/

/*
Vector Declaration:                                                      Alternative Declaration:

        vector< int > v[100];                // 1 dimensional           vector< int > v[100]; 

        vector< vector< int > > v;          // // 2 dimensional         vector< int > v[100][100]; 

        vector< vector< vector< int > > > v; // 3 dimensional           vector< int > v[100][100][100]; 
*/
