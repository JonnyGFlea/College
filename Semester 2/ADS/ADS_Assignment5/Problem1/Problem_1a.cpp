/*
CH08-320201
Problem a5.p1a.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement 3 versions of the Quicksort algorithm with 3 different versions of the partition algorithm:
(a) (2 points) Lomoto partition as on the lecture slides (Lecture 8).
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Lomutos's Partition
vector<int>Partition (vector <int> &A, int p, int q);
void QuickSort(vector <int> &A, int p, int r);

int main(){
  vector<int>A(7);
  A = {5,4,3,2,1,0,-1};
  QuickSort(A, 0, 6);
  for(int k = 0; k < 7; k++)
      cout<<A[k]<<" ";
  return 0;
}

vector<int>Partition (vector <int> &A, int p, int q){
  int x1 = A[p];
  int x2 = A[p + 1];
  int i1 = p;
  int i2 = p + 1;
  for(int k = p + 1; k <= q; k++){
    if(A[k] < x1){
      i1++;
      swap(A[i1], A[k]);
    }
  }
  swap(A[p], A[i1]);

  for(int k = p + 1; k <= q; k++){
    if(A[k] < x2){
      i2++;
      swap(A[i2], A[k]);
    }
  }
  swap(A[p + 1], A[i2]);
  vector<int>arr(2);
  arr[0] = i1;
  arr[1] = i2;
  return arr;
}

void QuickSort(vector <int> &A, int p, int r){
  if(p < r){
    vector <int> piv (2);
    piv = Partition(A, p, r);
    QuickSort(A, p, piv[0] - 1);
    QuickSort(A, piv[0] + 1, piv[1] - 1);
    QuickSort(A, piv[1] + 1, r);
  }
}
