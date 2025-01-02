#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter how many numbers to find addition of them\n";
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
     int sum = 0;
        for(int j=0;j<a;j++)
            {

            sum +=arr[j];
        }
        cout<<"ans is:"<<sum;
}
