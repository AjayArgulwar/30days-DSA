#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n=2;
    while(n>0){
        int temp = arr[0];
        for(int i=0;i<size;i++){
            arr[i] = arr[i+1];
        }
        arr[size-1] = temp;
        n--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
