 #include<bits/stdc++.h>
 using namespace std;
 int LinearSearch(int *m,int n,int item){
     for(int i = 0;i<n;i++){
        if(*(m+i)==item){
         return i;
        }
     }
     return -1;
 }


 int main(){
    int n;
    cout<<"ENter the size of array: ";
    cin>>n;
    int *a = new int[n];
    //int * a = (int*)malloc(n*sizeof(n));
    //int * a = (int*)calloc(n,sizeof(n));
 for(int i = 0;i<n;i++){
    cin>>a[i];
 }
 int item;
 cout<<"Please inter the item to search :";
 cin>>item;
 int i =LinearSearch(a,10,item);
 if(i == -1){cout<<"Item not found";}
 else {cout<<a[i] << " found in "<<i<<" location";}

 return 0;
 }
