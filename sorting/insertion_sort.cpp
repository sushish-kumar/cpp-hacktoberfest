#include <iostream>
using namespace std;

int main()
{
    //enter no. of elements in the array i.e. n.
    int n;
    cin>> n;
    int arr[n];
    
    //loop for entering the elemnts of array

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    
    //Sorting algorithm
    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    //printing Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
    
}
