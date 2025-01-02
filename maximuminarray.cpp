#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];

     cout<<"enter number"+a<<"in which you want to find maximum\n";
      for(int i=0;i<a;i++)

    {

        cin>>arr[i];
    }

     int mx=arr[0];
     for(int j=1;j<a;j++)
     {
         if(arr[j]>a)
         {
           mx=arr[j];
         }

     }
     cout<<"max number is:\n"<<mx;
}
