#include<iostream>
using namespace std;

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10},arr2[10]={2,3,7,12,13,14,5,9,17,18};
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }

    return 0;
}
