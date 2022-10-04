#include<bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[],int n)
{
    int slow=arr[0];
    int fast=arr[0];

    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);

    fast=arr[0];

    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];

    }

    cout<<slow<<endl;


}



int main()
{
    int arr[5]={1,2,3,4,4};
    findDuplicate(arr,5);
}