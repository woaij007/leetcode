// Quicksort

// Print Sub-Arrays 
// In this challenge, print your array every time your partitioning method finishes, i.e. whenever two subarrays, along with the pivot, is merged together.

// The first element in a sub-array should be used as a pivot.
// Partition the left side before partitioning the right side.
// The pivot should be placed between sub-arrays while merging them.
// Array of length 1 or less will be considered sorted, and there is no need to sort or to print them.
// Note 
// Please maintain the original order of the elements in the left and right partitions while partitioning around a pivot element.

// For example: Partition about the first element for the array A[]={5, 8, 1, 3, 7, 9, 2} will be {1, 3, 2, 5, 8, 7, 9}

// Input Format 
// There will be two lines of input:

// n - the size of the array
// ar - the n numbers of the array
// Output Format 
// Print every partitioned sub-array on a new line.

// Constraints 
// 1≤n≤1000 
// −1000≤x≤1000,x∈ar 
// Each number is unique.

// Sample Input
// 7
// 5 8 1 3 7 9 2

// Sample Output
// 2 3
// 1 2 3
// 7 8 9
// 1 2 3 5 7 8 9

// Task 
// The method quickSort takes in a parameter, ar, an unsorted array. Use the Quicksort algorithm to sort the entire array.

#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> &arr) {
   // Complete this function
    int size = arr.size();
    if (size < 2) {
        return;
    }

    vector <int> leftArray;
    vector <int> rightArray;

    int pivot = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] <= pivot) {
            leftArray.push_back(arr[i]);
        }
        else {
            rightArray.push_back(arr[i]);
        }
    }
    quickSort(leftArray);
    quickSort(rightArray);

    int index = 0;

    // Copy left array back into the original array
    for (unsigned int l = 0; l < leftArray.size(); ++l) {
        arr[index++] = leftArray[l];
        cout << leftArray[l] << " ";
    }

    // Copy the pivot between left & right arrays
    arr[index++] = pivot;
    cout << pivot << " ";

    // Copy right array back into the original array
    for (unsigned int r = 0; r < rightArray.size(); ++r) {
        arr[index++] = rightArray[r];
        cout << rightArray[r] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}