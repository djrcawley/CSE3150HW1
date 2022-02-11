#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number to factor:  ";
  cin >> num;
  int resultNumber = num;
  //Long int is needed to allow max int to work
  for(long long int i = 2; i <= num; i++){
    while(resultNumber % i == 0 && resultNumber > 0){
      cout << i << " ";
      resultNumber = resultNumber / i;
    }
  }
  cout << "\n";
  return 0;
} 