/*
CH08-320201
Problem a5.p1b.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement 3 versions of the Quicksort algorithm with 3 different versions of the partition algorithm:
(b) (2 points) Hoare partition (use Wikipedia or other sources).
*/

#include <iostream>
#include <vector>

using namespace std;

//Hoare's's partition
int Partition (vector <int> &arr, int low, int high);
void QuickSort(vector <int> &A, int p, int r);

int main(){
  vector <int> A (7);
  A = {6,10,7,9,5,3,2};
  QuickSort(A, 0, 6);
  for(int k = 0; k < 7; k++){
    cout<<A[k]<<" ";
  }
  return 0;
}

int Partition (vector <int> &arr, int low, int high){
  int pivot = arr[high];
  int holder = (low - 1);
  for(int j = low; j <= high- 1; j++){
    if(arr[j] <= pivot){
      holder++;
      int temp = arr[holder];
      arr[holder] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[holder + 1];
  arr[holder + 1] = arr[high];
  arr[high] = temp;
  return (holder + 1);
}

void QuickSort(vector <int> &A, int p, int r){
  if(p < r){
    int q = Partition(A, p, r);
    QuickSort(A, p, q - 1);
    QuickSort(A, q + 1, r);
  }
}
