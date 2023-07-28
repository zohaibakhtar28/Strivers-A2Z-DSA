#include<iostream>
using namespace std;
int main()
{
    string str = "earlytobedearlytorise";  //Characters will be lowercase only.
    int hash[26] ={0};
    for(int i =0; i<str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char x;
        cin>>x;
        cout<<"Count of"<<" "<<x<<" "<<"is: "<<hash[x-'a']<<endl;
    }

return 0;
}