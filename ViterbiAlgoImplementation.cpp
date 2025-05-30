#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  double A [2][2]={{0.7,0.3},{0.4,0.6}};
  double B [2][3]={{0.1,0.4,0.5},{0.7,0.2,0.1}};
  double pi [2] = {0.6,0.4};
  while(t--){
    int n;
    cout << "Enter number of observations below" << endl;
    cin >> n;
    int arr [n];
    cout << "Enter the observations below S-small M-medium L-large" << endl;
    for(int i=0;i<n;i++){
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
    double delta [n][2];
    int trace [n][2];
    for(int i =0;i<n;i++){
      trace[i][0]=0;
      trace[i][1]=0;
    }
    delta [0][0]=pi[0]*B[0][arr[0]];
    delta [0][1]=pi[1]*B[1][arr[0]];
    for(int i = 1; i < n ;i++){
      for(int j =0; j<2;j++){
        delta[i][j]=(max(delta[i-1][0]*A[0][j],delta[i-1][1]*A[1][j]))*B[j][arr[i]];
        if(delta[i-1][0]*A[0][j]>delta[i-1][1]*A[1][j]){
          trace[i][j]=0;
        }
        else{
          trace[i][j]=1;
        }
      }
    }
    vector<int> path(n);
    path[n - 1] = (delta[n - 1][0] > delta[n - 1][1]) ? 0 : 1;
    for (int i = n - 2; i >= 0; i--) {
      path[i] = trace[i + 1][path[i + 1]];
    }
    cout << "Most likely state sequence: ";
    for (int i = 0; i < n; i++) {
      if (path[i] == 0) {
      cout << "H ";
      } 
      else {
          cout << "C ";
      }  
    }
    cout << endl;
    
  }
  cout << "Execution done!!";
  cin >> t;

}