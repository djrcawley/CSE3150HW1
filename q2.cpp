#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        cout << endl;
        return 0;
    }
    int *factors;
    factors = (int *) calloc(num, sizeof(int)); //Array of Zeros
    int resultNumber = num;
    int ArrayCount = 0;
    for(unsigned int i = 2; i <= num; i++){
        while(resultNumber % i == 0 && resultNumber > 0){
            factors[ArrayCount++] = i;
            resultNumber = resultNumber / i;
        }
    }
    int PrintCount = 0;
    while (factors[PrintCount] != 0){
        cout << factors[PrintCount++] << " ";
    }
    cout << endl;
    return 0;
}
