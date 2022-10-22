#include <iostream>
using namespace std;

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {20, 19, 18, 17, 11, 12, 13, 14, 15, 16};
    int arr3[10];
    int n1, n2;
    /* cout << "please enter the number of elements of the first array :";
    cin >> n1;
    cout << "please enter the " << n1 << " elements of the first array :" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "please enter the number of elements of the second array :";
    cin >> n2;
    cout << "please enter the " << n1 << " elements of the first array :" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    } */
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (arr1[i] == arr2[j])
            {
                arr3[j] = arr1[i];
                counter++;
                break;
            }
            /* if (counter != 0)
            {
                arr3[i] = arr1[i];
            } */
        }
    }
    if (counter == 0)
    {
        cout << "There is no common elements" << endl;
    }
    /* cout << counter << endl; */
    for (int k = 0; k < counter; k++)
    {
        cout << arr3[k] << " ";
    }
    return 0;
}