#include <iostream>
using namespace std;
int main()
{
    int n;

    // step 1. Ask user for total number of elements 
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];   // step 2. declare an array of size n
    
    // step 3. Take input elements from user 
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // step 4. Start bubble sort
    // Outer loop runs n-1 times (because after n-1 passes, array becomes sorted)

    for (int i = 0; i < n - 1; i++){
        // Inner loop: compares adjacent elements
        // (n-i-1) because after every pass, last element is already sorted
        for(int j = 0; j < n - i - 1; j++)
        {
            // Step 5: Compare two adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Step 6: Swap if left element is greater than right element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Step 7: Print sorted array
    cout <<"Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}