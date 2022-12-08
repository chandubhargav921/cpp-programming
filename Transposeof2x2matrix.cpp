#include <iostream>

using namespace std;

int main()
{ int r,c;
    cout<<"enter the nuber of rows"<<endl;
  cin>>r;
  cout<<"enter the number of columns"<<endl;
  cin>>c;
  int arr[r][c];
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>arr[i][j];
      }
  }
  for(int k=0;k<r;k++){
      for(int l=0;l<c;l++){
          cout<<arr[k][l];
      }
  }
  cout<<endl;
  int nr=c;
  int nc=r;
  int arr1[nr][nc];
  for(int m=0;m<nr;m++){
      for(int n=0;n<nc;n++){
          arr1[m][n]=arr[n][m];
        }
  }
  for(int q=0;q<nr;q++){
      for(int s=0;s<nc;s++){
          cout<<arr1[q][s];
        }
  }

    return 0;
}
