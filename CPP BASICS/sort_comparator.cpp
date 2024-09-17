#include <iostream>
using namespace std;

bool comp(int a, int b)
{
    return a<b;
}
void bubbleSort(int arr[], int n,bool (&comp) (int a,int b)) {
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n-i-1; j++) {
            if (comp(arr[j],arr[j+1]))//learn the syntax 
            {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    bubbleSort(arr, n,comp);// call fnc
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
