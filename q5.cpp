#include <iostream>
#include <vector>
using namespace std;

vector<long long int> getFactors(long long int number) {
    vector<long long int> factors;
    long long int resultNumber = number;
    for(long long int i = 2; i <= number; i++){
        while(resultNumber % i == 0 && resultNumber > 0){
            factors.push_back(i);
            resultNumber = resultNumber / i;
        }
    }
    return factors;
}

void displayText(vector<long long int> factors, long long int number){
    if(factors.size() == 1){
        cout << "The prime factors of " << number << " is " << factors.at(0) << "." << endl;
    }
     else {
        cout << "The prime factors of " << number << " are ";
        for(long long int i = 0; i < factors.size()-2; i++) {
            cout << factors.at(i) << ", ";
        }
        cout << factors.at(factors.size()-2) << " and " << factors.at(factors.size()-1) << "." << endl;
    }
}

int main(){
    long long int num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        return 0;
    }
    displayText(getFactors(num), num);
    return 0;
}