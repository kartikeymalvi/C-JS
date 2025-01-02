#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"number how many numbers you want to reverse\n";
    cin>>a;

    int arr[a];
    cout<<"enter numbers\n";
    for(int i=0;i<a;i++)
    {

        cin>>arr[i];
    }
    for(int i=a;i>=1;i--)

    {
       cout<<i<<"\n";
    }

}
