#include<bits/stdc++.h>
using namespace std;

struct data{
    char name[100];
    int height,weight;
    long long income;

};
bool compare( data a, data b ) {
    if( a.income == b.income ) {
        if( a.height == b.height ) {
            if( a.weight == b.weight )
              return strlen( a.name ) < strlen( b.name );
            else return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}
int main()
{
    int n;
    while(1){
        cout<<"Enter the value of n : ";
        cin>>n;
        struct data p[n];

        for(int i=0;i<n;i++){

            cout<<i+1<<". ";
            cout<<"Name : ";
            cin>>p[i].name;

            cout<<"\tHeight : ";
            cin>>p[i].height;

            cout<<"\tWeight : ";
            cin>>p[i].weight;

            cout<<"\tIncome : ";
            cin>>p[i].income;

            cout<<endl;
        }

        sort(p,p+n,compare); //SORTING FUNCTION CALLING TO SORT

        for(int i=0;i<n;i++){
            cout<<i+1<<". ";
            cout<<"Name : "<<p[i].name<<endl;
            cout<<"\tHeight : "<<p[i].height<<endl;
            cout<<"\tWeight : "<<p[i].weight<<endl;
            cout<<"\tIncome : "<<p[i].income<<endl;
            cout<<endl;
        }
    }
    
            /*
            For Vector Sorting It would be like this

                 sort( v.begin(), v.end(), compare );

            */

    return 0;
}
