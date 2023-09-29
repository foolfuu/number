#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,
        temp;
    cout<<"How many numbers do you want to enter? ";
    cin>>n;
    int a[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"number("<<i+1<<") ";
        cin>>a[i];
    }

    for(int d = 0 ; d < n ; d++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(a[d] < a[j])
            {
                temp = a[d];
                a[d] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    getch();
	return 1;
}