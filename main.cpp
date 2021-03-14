#include <iostream>

using namespace std;
int findIndex(int b[],int a,int c)
{
    if(a==0)
    {
        return -1;
    }
    else if(b[0]==c)
    {
        return a;
    }
    else
    {
        findIndex(b+1,a-1,c);
    }
}

int main()
{
    while(1)
    {
        int e;
        cout<<"Press 1 to continue or press any other number to quit\n";
        cin>>e;
        if (e==1)
        {
            cout<<"Enter size of the Array"<<endl;
            int a;
            cin>>a;
            int b[a];
            for(int i=0; i<a; i++)
            {
                cout<<"Enter element for "<< i+1 <<" index"<<endl;
                cin>>b[i];
            }
            cout<<"Enter the element you want to search"<<endl;
            int d;
            cin>>d;
            int c=findIndex(b,a,d);
            if(c==-1)
            {
                cout<<"\nElement is not found!!!\n";
            }
            else
            {
                cout<<"\nThe first index where element is present: "<<a-c<<endl;
            }
        }
        else
        {
            break;
        }
    }
}
