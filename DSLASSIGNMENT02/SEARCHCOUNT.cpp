#include<bits/stdc++.h>
using namespace std;


int main(){

int arr[10]={1,2,3,4,5,5,4,8,9,10},a,counter=0;
cout<<"Enter a number to search: ";
cin>>a;
for(int i = 0;i<10;i++){
    if(arr[i]==a){
        counter++;
    }
}
if(counter==0){
    cout<<"The number is not in the array"<<endl;
}
else
cout<<a<<" occurs "<<counter<< " times in the array"<<endl;
return 0;
}
