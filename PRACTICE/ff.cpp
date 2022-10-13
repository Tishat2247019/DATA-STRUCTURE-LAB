#include <iostream>

using namespace std;

int main()
{
    int arr1[10]={11,21,25,11,22,21,71,21,3,3};
    int count;
    int j,item;

    cout<<"intput element"<<endl;
    cin>>item;
    for(j=0;j<10;j++)
    {
        count=0;
        for(j=0;j<10;j++)
        {
        if(arr1[j]==item)
        {
            count++;
        }
        }
    }

    cout<<"Number is "<<" "<<item<<" Number of appearance "  <<count<<endl;
    return 0;
}
