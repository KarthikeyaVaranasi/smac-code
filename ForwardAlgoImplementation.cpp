#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  const int N = 2;
  const int M = 3;
  double A [2][2]={{0.7,0.3},{0.4,0.6}};
  double B [2][3]={{0.1,0.4,0.5},{0.7,0.2,0.1}};
  double pi [2] = {0.6,0.4};
  while(t--){
    int T;
    cout << "Enter number of observations" << endl;
    cin >> T;
    cout << "Enter S for small , M for medium and L for large n times below" << endl;
    int arr [T];
    for(int i =0;i<T;i++){
      char x;
      cin >> x;
      if(x=='S'){
        arr[i]=0;
      }
      else if (x=='M'){
        arr[i]=1;
      }
      else{
        arr[i]=2;
      }
    }
    double alpha [T][2];
    for (int i = 0; i < 2; ++i) {
        alpha[0][i] = pi[i] * B[i][arr[0]];
    }
    for (int t = 1; t < T; ++t) {
        for (int j = 0; j < N; ++j) {
            double sum = 0.0;
            for (int i = 0; i < N; ++i) {
                sum += alpha[t - 1][i] * A[i][j];
            }
            alpha[t][j] = sum * B[j][arr[t]];
        }
    }
    double prob = 0.0;
    for (int i = 0; i < N; ++i) {
        prob += alpha[T - 1][i];
    }
    cout << "Probability of the observation sequence: " << prob << endl;
  }
}