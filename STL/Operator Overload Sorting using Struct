#include<bits/stdc++.h>
using namespace std;

struct data{
    char name[100];
    int height,weight;
    long long income;

    bool operator<(const data& b)const{
        if(income==b.income){
            if(height==b.height){
                if(weight==b.weight){
                    return strlen(name)<strlen(b.name);
                }
                else
                    return weight<b.weight;
            }
            else
                return height<b.height;
        }
        else
            return income<b.income;
    }
};
int main()
{

    struct data p[100];
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cout<<i+1<<". Name  :";
            cin>>p[i].name;
            cout<<"  Height :";
            cin>>p[i].height;
            cout<<"  Weight :";
            cin>>p[i].weight;
            cout<<"  Income :";
            cin>>p[i].income;
        }
        sort(p,p+n);
        for(int i=0;i<n;i++){
            cout<<i+1<<". ";
            cout<<"\tName   :"<<p[i].name<<endl;
            cout<<"  \tHeight :"<<p[i].height<<endl;
            cout<<"  \tWeight :"<<p[i].weight<<endl;
            cout<<"  \tIncome :"<<p[i].income<<endl;

            cout<<endl;
        }

    }
    return 0;
}
