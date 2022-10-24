#include <iostream>
using namespace std;

int main(){
  int row = 1;
  int n;
  cin >> n;

  while(row<=n){
    int col = 1;
    while(col<=(n-row+1)){
      cout << col;
      col = col + 1;
    }
    int star = row-1;
    while(star){
      cout << "*";
      star = star - 1;
    }
    int sta = row-1;
    while(sta){
      cout << "*";
      sta = sta -1;
    }
    int count = n-row+1;
    while(count){
      cout << count;
      count = count - 1;
    }
    cout << endl;
    row = row + 1;
  }
}
