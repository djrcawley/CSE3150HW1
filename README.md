For this assignment, you will write a series of C/C++ functions to prompt the user for an integer and display all the prime factors of that integer.  You may create additional functions if needed.  Your driver function should query the user once for a number to factor, print the result and terminate.

A simple algorithm for finding the prime factors of a number is to start with a tentative divisor=2 and increment it if it is not a divisor of the given number.  If it is a divisor of the number, then we print it out and check again.  If the divisor is ever greater than the remaining number, you are done and have successfully factored the integer.

The basic algorithm is simple, however, you will have to implement it in several different ways.

    Print the factors directly (as soon as you find them) to the console. (You are not storing anything).
    Store the factors in an array; then afterwards, print out each of the factors from the array. Think about the downsides. Is the code robust in all cases? 
    Store the factors in a vector; then afterwards, print out each of the factors from the vector.
    Store the factors in a stack; then afterwards, print out each of the factors from the stack.  This should display the results backwards from the previous methods.
    Store the factors in a vector; then return that vector to a function that will use it to display the results using English sentences.

Since there are 5 parts, all I ask is to produce the files q1.cpp through q5.cpp. The provided makefile will take care of the compilation. 
Example results

    Enter a number to factor:  324324
    2 2 3 3 3 3 7 11 13
    Enter a number to factor:  625
    5 5 5 5
    Enter a number to factor:  324324
    2 2 3 3 3 3 7 11 13
    Enter a number to factor:  625
    5 5 5 5
    Enter a number to factor:  324324
    2 2 3 3 3 3 7 11 13
    Enter a number to factor:  625
    5 5 5 5
    Enter a number to factor:  324324
    13 11 7 3 3 3 3 2 2
    Enter a number to factor:  625
    5 5 5 5
    Enter a number to factor: 324324
    The prime factors of 324324 are 2, 2, 3, 3, 3, 3, 7, 11 and 13.

    Enter a number to factor: 625
    The prime factors of 625 are 5, 5, 5 and 5.

    Enter a number to factor: 29
    The prime factor of 29 is 29.

    Enter a number to factor: 7
    The prime factor of 7 is 7.

    Enter a number to factor: 49
    The prime factors of 49 are 7 and 7.

    Enter a number to factor: 9876543210
    The prime factors of 9876543210 are 2, 3, 3, 5, 17, 17 and 379721.

    Enter a number to factor: 1234567890987654321
    The prime factors of 1234567890987654321 are 3, 3, 7, 19, 928163 and 1111211111.

    Enter a number to factor: 0
