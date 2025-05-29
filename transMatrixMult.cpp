#include <bits/stdc++.h>
using namespace std;
int main(){
  double arr[4][4]={{0.25,0.35,0.25,0.15},{0.2,0.4,0.3,0.1},{0.1,0.2,0.6,0.1},{0.05,0.25,0.3,0.4}};
  double brr[4];
  cout << "Enter initial state vector below:" << endl;
  for(int i = 0;i<4;i++){
    cin >> brr[i];
  }

  double crr[4];
  int n;
  cout << "Enter no of days to elapse below:" << endl;
  cin >> n;
  double sum=0;
  for (int i = 0; i < n; i++){
    for(int j =0 ;j<4;j++){
      sum=0;
      for(int k = 0;k<4;k++){
        sum+=(brr[k])*(arr[k][j]);
      }
      crr[j]=sum;
    }
    for(int j = 0;j<4;j++){
      brr[j]=crr[j];
    }
  }
  for(int i =0;i<4;i++){
    cout << crr[i] << " ";
  }
  cout << endl;
}