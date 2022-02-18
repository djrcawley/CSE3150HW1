#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

long long int* resize(long long int* factors, long long int* len){
    long long int lenValue = *len;
    long long int *temp = new long long int[lenValue];
    copy(factors, factors+lenValue, temp);
    delete[] factors;
    factors = new long long int[lenValue*2];
    copy(temp, temp+lenValue, factors);
    delete[] temp;
    *len *= 2;
    return factors;
}

long long int* factorsArr(long long int num, long long int* ArrayCount){
    long long int len = 10;
    long long int* lenPx = &len;
    long long int* factors = new long long int[10];
    long long int resultNumber = num;
    
    for(long long int i = 2; i*i <= num; i+=2){
        if(i == 4){
            i -= 1;
        }
        while(resultNumber % i == 0 && resultNumber > 0){
            if(*ArrayCount == len){
                factors = resize(factors, lenPx);
            }
            factors[*ArrayCount] = i;
            *ArrayCount += 1;
            resultNumber = resultNumber / i;
        }
    }
    if(resultNumber > 2){
        if(*ArrayCount == len){
            factors = resize(factors, lenPx);
        }
        factors[*ArrayCount] = resultNumber;
        *ArrayCount += 1;
    }
    return factors;
}

int main(){
    long long int num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        return 0;
    }
    long long int ArrayCount = 0;
    long long int* px = &ArrayCount;
    long long int* factors = factorsArr(num, px); 
    long long int PrintCount = 0;
    while (PrintCount != ArrayCount){
        cout << factors[PrintCount++] << " ";
    }
    cout << endl;
    delete[] factors;
    return 0;
}
