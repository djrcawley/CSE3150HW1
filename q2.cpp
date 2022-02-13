#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    long long int num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        return 0;
    }
    long long int len = 10;
    long long int* factors = new long long int[10];
    long long int resultNumber = num;
    long long int ArrayCount = 0;
    for(long long int i = 2; i <= num; i++){
        while(resultNumber % i == 0 && resultNumber > 0){
            if(ArrayCount == len){
                long long int *temp = new long long int[len];
                copy(factors, factors+len, temp);
                delete[] factors;
                factors = new long long int[len*2];
                copy(temp, temp+len, factors);
                delete[] temp;
            }
            factors[ArrayCount++] = i;
            resultNumber = resultNumber / i;
        }
    }
    long long int PrintCount = 0;
    while (PrintCount != ArrayCount){
        cout << factors[PrintCount++] << " ";
    }
    cout << endl;
    delete[] factors;
    return 0;
}
