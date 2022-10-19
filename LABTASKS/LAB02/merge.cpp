#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[10];
  int i,k;
  for(int i =0;i<5;i++){
    c[i]=a[i];
  }
  k=i;
  for(int i = 0;i<5;i++){
    c[k]=b[i];
    k++;
  }
  for(int j = 0;j<k;j++){
    cout<<c[j]<< " ";
  }
return 0;
}
