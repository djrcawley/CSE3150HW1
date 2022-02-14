#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack< long long int> factors;
    long long num;
    cout << "Enter a number to factor:  ";
    cin >> num;
    if (num <= 0){
        return 0;
    }
    long long int resultNumber = num;
    for(long long int i = 2; i*i <= num; i+=2){
        if(i == 4){
            i -= 1;
        }
        while(resultNumber % i == 0 && resultNumber > 0){
            factors.push(i);
            resultNumber = resultNumber / i;
        }
    }
    if(resultNumber > 2){
        factors.push(resultNumber);
    }
     while (!factors.empty()) {
        cout << factors.top() << " ";
        factors.pop();
    }
    cout << endl;
    return 0;

}