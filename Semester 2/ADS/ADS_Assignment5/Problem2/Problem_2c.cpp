/*
CH08-320201
Problem a5.p2a&c.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

(a) (8 points) Implement a modified version of the Quicksort algorithm, where the sequence
of elements is always split into three subsequences by simultaneously using the first two
elements as pivots.
(b) (5 points) Determine and prove the best-case and worst-case running time for the modified
Quicksort from subpoint (a).
(c) (2 points) Implement a modified version of the Randomized Quicksort algorithm, where
the sequence of elements is alway
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void quicksort(int arr[], const int& p, const int& r);
int randomizedPartition(int arr[], const int& p, const int& r);
int partition(int arr[], const int& p, const int& r);
void swap(int& a, int& b);


int main(){
  //instantiate variables
  srand(time(NULL));
  int n;
  cin >> n;
  int arr[n+2];

  for(int k = 0; k < n; k++){
    cin >> arr[k];
  }
  quicksort(arr, 0, n-1);
  for(int k = 0; k < n; k++){
    cout << arr[k] << " ";
  }
  cout << endl;
  return 0;
}
void swap(int& a, int& b){
  int tmp = a;
  a = b;
  b = tmp;
}

int partition(int arr[], const int& p, const int& r){
  int piv = p;
  int holder = p;
  for(int k = p+1; k <= r; k++){
    if(arr[k] < arr[piv]){
      holder++;
      swap(arr[k], arr[holder]);
    }
  }
  swap(arr[piv], arr[holder]);
  return holder;
}

int randomizedPartition(int arr[], const int& p, const int& r){
  int piv = (rand()%(r-p+1))+p;
  swap(arr[piv], arr[p]);
  return partition(arr, p, r);
}

void quicksort(int arr[], const int& p, const int& r){
  if(p < r){
    int piv = randomizedPartition(arr, p, r);
    quicksort(arr, p, piv-1);
    quicksort(arr, piv+1, r);
  }
}
