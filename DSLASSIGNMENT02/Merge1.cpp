#include<iostream>
using namespace std;

int main(){
  int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[10],i,k;

  for( i =0;i<5;i++){
    c[i]=a[i];
  }
  k=i;
  for(int i = 0;i<5;i++){
    c[k]=b[i];
    k++;
  }
  for(int j = k-1;j>=0;j--){
    cout<<c[j]<< " ";
  }
return 0;
}

