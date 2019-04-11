/*
Course: CH08-320201
Problem a6.p2a.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de


(a) (8 points) Implement Hollerith’s original version of the Radix Sort
*/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

void bucket_sort(vector<int>& a, int ex){
  int index = 0;
  if(ex == 0){
    return;
  }

  vector<int> b[10];
  for(ui k = 0; k < a.size(); k++){
    index = (a[k]/ex)%10;
    b[index].push_back(a[k]);
  }

  for(int k = 0; k < 10; k++){
    if(b[k].size() > 1){
      bucket_sort(b[k], ex/10);
    }
  }

  index = 0;
  for(int k = 0; k < 10; k++){
    for(ui w = 0; w < b[k].size(); w++){
      a[index++] = b[k][w];
    }
  }
}

void radix_sort(vector<int>& a){
  int maxx = 0;
  int ex = 1;
  for(ui i = 0; i < a.size(); i++){
    maxx = max(maxx, a[i]);
  }

  while(maxx/ex > 0) ex *= 10;
  ex /= 10;

  bucket_sort(a, ex);
}

int main(){
  int holder;
  cin >> holder;
  vector<int> a(holder);
  for(int k = 0; k < n; k++){
    cin >> a[k];
  }

  radix_sort(a);

  for(int k = 0; k < n; k++){
    cout << a[k] << " ";
  }
  cout << endl;

  return 0;
}
