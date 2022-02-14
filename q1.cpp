#include <iostream>
using namespace std;

int main() {
  long long num;
  cout << "Enter a number to factor:  ";
  cin >> num;
  if (num <= 0){
      cout << endl;
      return 0;
  }
  long long resultNumber = num;
  for(long long int i = 2; i*i <= num; i+=2){
    if(i == 4){
      i -= 1;
    }
    while(resultNumber % i == 0 && resultNumber > 0){
      cout << i << " ";
      resultNumber = resultNumber / i;
    }
  }
  if(resultNumber > 2){
    cout << resultNumber;
  }
  
  cout << "\n";
  return 0;
} 