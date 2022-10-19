#include<iostream>
using namespace std;


int main(){

int arr[10]={1,2,3,4,5,3,4,7,8,9},counter=0;
for(int i = 0;i<10;i++){
        int j;
    for(j = 0;j<10;j++){
        if(arr[i]==arr[j]){
            arr[i]=arr[j];
            counter++;
            break;
        }
    }
    if(i==j){
        cout<<arr[i]<< " ";
    }
}
if(counter=0){
    cout<<"Ther array is already unique"<<endl;
}

return 0;
}
