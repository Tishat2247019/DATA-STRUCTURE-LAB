#include<iostream>
using namespace std;

int main(){
    int size1,size2,k,i;
    cout<<"Please enter the size of the first array: ";
    cin>>size1;
    int arr1[size1];
    cout<<"Please enter the "<<size1<<" elements of the first array: ";
    for( i = 0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Please enter the size of the second array: ";
    cin>>size2;
    int arr2[size2];
    cout<<"Please enter the "<<size1<<" elements of the second array: ";
    for( i = 0;i<size2;i++){
        cin>>arr2[i];
    }
    int arr3[size1+size2];
    for( i = 0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    k = i;
    for(int j = 0;j<size2;j++){
        arr3[k]= arr2[j];
        k++;
    }
    cout<<"The array after merging is :"<<endl;
    for(int f  = 0;f<k;f++){
        cout<<arr3[f]<<" ";
    }


return 0;
}
