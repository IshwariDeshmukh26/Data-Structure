#include <iostream>
using namespace std;

int main() 
{
    int n1, n2;

    // Input size of first array
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) 
    {
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) 
    {
        cin >> arr2[i];
    }

    // Find common elements
    cout << "Common elements are: ";
    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
