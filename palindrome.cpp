#include <iostream>
#include <typeinfo>
using namespace std;

bool isPrime(int num) {

	
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
		}

	}

	return true;

}



int rev(int n) {

	int remainder, reversed_number;

	while (n != 0) {
		remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}

	return reversed_number;

}

bool isPalindrome(int num) {

	
	if (num == rev(num)) {
		return true;
	}
	else {
		return false;
	}

}

int main() {

	int num;
	bool prime;
	bool palindrome;
	cout << "How many palindromic primes should be computed?\n";
	cin >> num;


	
	
	
	for (int i = 0; i <= num; i++) {
		cout << i;
		cout << isPalindrome(i);
		cout << isPrime(i) + "\n";
		
		if (isPrime(i) && isPalindrome(i)) {
			
			cout << to_string(i) + "\n";
		}
	}

	
}

