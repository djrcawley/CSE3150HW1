#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        return 0;
    }
    vector<long long int> factors;
    long long int resultNumber = num;
    for(long long int i = 2; i*i <= num; i+=2){
        if(i == 4){
            i -= 1;
        }
        while(resultNumber % i == 0 && resultNumber > 0){
            factors.push_back(i);
            resultNumber = resultNumber / i;
        }
    }
    if(resultNumber > 2){
        factors.push_back(resultNumber);
    }
    for (long long int i : factors){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}