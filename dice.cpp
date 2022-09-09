#include <iostream>


int main() {

	int num;
	std::cout << "How many times should we roll the dice?\n";
	std::cin >> num;

	for (int count = 1; count <= num; count++) {
		int rand1 = rand() % 6;
		int rand2 = rand() % 6;
		int sum = rand1 + rand2;
		std::cout << "You rolled " + std::to_string(rand1) + " + " + std::to_string(rand2) + " = " + std::to_string(sum) + "\n";
	}

	return 0;
}


