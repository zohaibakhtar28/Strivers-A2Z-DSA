#include<iostream>
using namespace std;

void print1(int n)
{
    char ch = 'A';
    for(int i =0; i<n; i++)
    {
        
        for (int j = 0; j<=i; j++)
        {
            cout<<ch;
            
        }
        cout<<endl;
        ch+=1;
        
    }
}

void print2(int n)
{
    
    for(int i =0; i<n; i++)
    
    {
        char ch = 'A';
        
        for (int j = 0; j< n-i-1; j++)
        {
            cout<<" ";
            
        }
        int breakpt = (((2*i+1)/2) + 1);

        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<ch;
            if(j<breakpt-1){ch++;}
            else{ch--;}
        }
        

        for (int j = 0; j< n-i-1; j++)
        {
            cout<<" ";
            
        }

        cout<<endl;
        
        
    }
}


void print3(int n)
{
    
    for(int i =0; i<n; i++)
    {
        char ch = 'E';
        if(i>0 ){ch = ch -i;}
        for(int j =0; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        
    }
}

void print4(int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout<<"*";
        }

        for(int j =0; j<2*i; j++)
        {
            cout<<" ";
        }


        for(int j = 0; j<n-i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<=i ; j++)
        {
            cout<<"*";
        }

        for(int j =0; j< 2*n - 2*i - 2; j++)
        {
            cout<<" ";
        }


        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}

void print5(int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }

        for(int j =0; j<2*n - 2*i -2; j++)
        {
            cout<<" ";
        }


        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i =0; i<n-1; i++)
    {
        for(int j = 0; j< n-i-1; j++)
        {
            cout<<"*";
        }

        for(int j =0; j< 2*i +2 ; j++)
        {
            cout<<" ";
        }


        for(int j = 0; j< n-i-1; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    
}

void print6(int n)
{
    for(int i =0; i<2*n-1; i++)
    {
        for(int j =0; j<2*n-1; j++)
        {
            int top =i;
            int left = j;
            int right = (2*n) -2 -j;
            int bottom = (2*n) -2 -i;

            cout<< (n- min(min(top,bottom), min(left,right)));

        }
        cout<<endl;
    }
}

void print7(int n)
{
    for(int i =0; i<n; i++)
    {
        char ch = 'A';
        for (int j = n; j > i; j--)
        {
            cout<<ch++;
            
        }
        cout<<endl;
        
    }
}
int main()
{
    print6(4);
return 0;
}