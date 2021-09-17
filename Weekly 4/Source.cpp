#include <iostream>

void task1();
void task2();
void task3();
void task4();
void clearcin();

int main() {

	bool Repeat{};
	char Choice{};
	char RepeatProgram{};
	bool RepeatChoice{};

	srand(time(nullptr));
	do {
		Repeat = false;
		system("cls");
		std::cout << "What task would you like to do?\n" << "A. Simple calculator with switch..case\n"
			<< "B. 10x10 dungeon crawler\n"
			<< "C. Function that holds 10 names/phone numbers, using struct\n"
			<< "D. Dice roll function\n";
		do {
			std::cin >> Choice;
			clearcin();
			RepeatChoice = false;
			Choice = toupper(Choice);
			switch (Choice) {
			case 'A': case '1':
				task1();
				break;
			case 'B': case '2':
				task2();
				break;
			case 'C': case '3':
				task3();
				break;
			case 'D': case '4':
				task4();
				break;
			default:
				std::cout << "You did not enter a valid input!\n";
				RepeatChoice = true;
				break;
			}
		} while (RepeatChoice);
		std::cout << "\nWould you like to try another task? Y/N\n";
		std::cin >> RepeatProgram;
		clearcin();
		RepeatProgram = toupper(RepeatProgram);
		if (RepeatProgram == 'Y') {
			Repeat = true;
		}
		else {
			Repeat = false;
			std::cout << "Thank you for trying my program, goodbye!\n";
			exit(0);
		}
	} while (Repeat == true);

	return 0;

}

void task1() {

	float Num1{};
	float Num2{};
	float Sum{};
	int Choice{};
	bool Repeat{};
	bool RepeatChoice{};

	do {
		std::cout << "What operation would you like to do?\n"
			<< "1. Addition\n"
			<< "2. Subtraction\n"
			<< "3. Multiplication\n"
			<< "4. Divition\n";
		do {
			std::cin >> Choice;
			clearcin();
			RepeatChoice = false;
			switch (Choice) {
			case 1:
				std::cout << "Please enter two numbers to add together, separated by space or enter:\n";
				std::cin >> Num1;
				std::cin >> Num2;
				clearcin();
				Sum = Num1 + Num2;
				std::cout << Num1 << " plus " << Num2 << " equals to " << Sum << "\n";
				break;
			case 2:
				std::cout << "Please enter two numbers to subtract from eachother, separated by space or enter:\n";
				std::cin >> Num1;
				std::cin >> Num2;
				clearcin();
				Sum = Num1 - Num2;
				std::cout << Num1 << " minus " << Num2 << " equals to " << Sum << "\n";
				break;
			case 3:
				std::cout << "Please enter two numbers to multiply together, separated by space or enter:\n";
				std::cin >> Num1;
				std::cin >> Num2;
				clearcin();
				Sum = Num1 * Num2;
				std::cout << Num1 << " multiplied by " << Num2 << " equals to " << Sum << "\n";
				break;
			case 4:
				std::cout << "Please enter two numbers to divide by eachother, separated by space or enter:\n";
				std::cin >> Num1;
				std::cin >> Num2;
				clearcin();
				Sum = Num1 / Num2;
				std::cout << Num1 << " divided by " << Num2 << " equals to " << Sum << "\n";
				break;
			default:
				std::cout << "You did not enter a valid input!\n";
				RepeatChoice = true;
				break;
			}
		} while (RepeatChoice);
	} while (Repeat == true);

}

void task2() {

}

void task3() {

}

void task4() {

}

void clearcin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}