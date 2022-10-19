#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[10]={1,2,3,4,5,5,4,8,9,10},check[10];
for(int i = 0;i<10;i++){
    check[i]=0;
}
for(int i = 0;i<10;i++){
       if(check[i]==0){
            int counter=0;
        for(int j = 0;j<10;j++){
            if(arr[i]==arr[j]){
                counter++;
                check[j]=1;
      }
    }
  cout<<arr[i]<<" = "<<counter<<" times"<<endl;
  }
}
return 0;
}
