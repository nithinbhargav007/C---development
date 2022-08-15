//insertion sort algorithm
//The basic idea here is to insert a given element in a sorted position
//to do that start comparing the number to be inserted from the last element of the array and do right
//shift if the element is smaller than the element of array
#include <iostream>

using namespace std;
 
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
void InsertionSort(int A[], int n){
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}
 
int main() {
 
    int A[] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
    Print(A, sizeof(A)/sizeof(A[0]), "       A");
 
    InsertionSort(A, sizeof(A)/sizeof(A[0]));
    Print(A, sizeof(A)/sizeof(A[0]), "Sorted A");
 
    return 0;
}