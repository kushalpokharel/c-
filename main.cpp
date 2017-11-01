#include<iostream>
using namespace std;

int main()
{       int i,j,x,y;
        cout<<"enter the row ";
        cin>>i;
        cout<<"enter the column ";
        cin>>j;
        int arr1[i][j];
        cout<<"Input Matrix:"<<endl;
        for(x=0;x<i;x++)
        {
            for(y=0;y<j;y++)
            {
                cout<<"enter the row "<<x+1<<" column "<<y+1<<" ";
                cin>>arr1[x][y];
            }

        }
        cout<<"Output Matrix:"<<endl;
        for(x=0;x<i;x++)
        {
            for(y=0;y<j;y++)
            {
                cout<<arr1[y][x]<<endl;
            }

        }
        return 0;
}
