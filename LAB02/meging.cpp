#include <iostream>
using namespace std;

int main()
{
    int arr1[10], arr2[15], mergearr[20], i, k, size1, size2;
    cout << "please enter the size of the first array: " << endl;
    cin >> size1;
    cout << "Please input the " << size1 << " elements of the first array:" << endl;
    for (i = 0; i < size1; i++)
    {
        cin >> arr1[i];
        mergearr[i] = arr1[i];
    }

    k = i;
    cout << "please enter the size of the second array: " << endl;
    cin >> size2;
    cout << "Please enter the " << size2 << " elements of the second array:" << endl;
    for (i = 0; i < size2; i++)
    {
        cin >> arr2[i];
        mergearr[k] = arr2[i];
        k++;
    }
    cout << "the merged array is: ";
    for (i = 0; i < k; i++)
    {
        cout << mergearr[i] << " ";
    }

    return 0;
}