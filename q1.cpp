#include <iostream>
using namespace std;

int main() {
  long long num;
  cout << "Enter a number to factor:  ";
  cin >> num;
  if (num <= 0){ //Max int
      cout << endl;
      return 0;
  }
  long long resultNumber = num;
  for(long long int i = 2; i <= num; i++){
    while(resultNumber % i == 0 && resultNumber > 0){
      cout << i << " ";
      resultNumber = resultNumber / i;
    }
  }
  cout << "\n";
  return 0;
} 