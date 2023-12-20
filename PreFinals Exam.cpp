#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string subjects[9];
	subjects[0] = "Computer Programming 1";
	subjects[1] = "Calculus 1";
	subjects[2] = "Math in Modern World";
	subjects[3] = "Purposive Communication";
	subjects[4] = "Euthenics";
	subjects[5] = "Kritikal na Pagbasa at Pagsulat";
	subjects[6] = "Physical Education";
	subjects[7] = "Understanding the Self";
	subjects[8] = "NSTP 1";
	
	string instructors[6];
	instructors[0] = "Mrs. Connelyn Torres";
	instructors[1] = "Mrs. Janis Lopez";
	instructors[2] = "Mr. All";
	instructors[3] = "Mrs. Karize";
	instructors[4] = "Mr. Joseph Calara";
	instructors[5] = "Mr. Rico Garcia";
		
		cout << " ________________________________________" << endl;
		cout << "|           List of Subjects:            |" << endl;
		cout << "|________________________________________|" << endl;
		cout << "| Computer Programming 1                 |" << endl;
		cout << "| Calculus 1                             |" << endl;
		cout << "| Math in Modern World                   |" << endl;
		cout << "| Purposive Communication                |" << endl;
		cout << "| Euthenics                              |" << endl;
		cout << "| Kritikal na Pagbasa at Pagsulat        |" << endl;
		cout << "| Physical Education                     |" << endl;
		cout << "| Understanding the Self                 |" << endl;
		cout << "| NSTP 1                                 |" << endl;
		cout << "|________________________________________|" << endl;
		cout << endl;

		char firstLetter;
		char secondLetter;
		bool isNotFound = true;

		cout << "Enter the first letter of the subject: ";
		cin >> firstLetter;
		firstLetter = tolower(firstLetter);

		if (firstLetter == 'c') {

			cout << "Two (2) Subjects Found:" << endl;
			cout << "1. " << subjects[0] << endl;
			cout << "2. " << subjects[1] << endl;

			cout << "Enter the second letter of the subject: ";
			cin >> secondLetter;
			secondLetter = tolower(secondLetter);

			if (secondLetter == 'o') {
				
				cout << "Your Instructor for " << subjects[0] << " is " << instructors[0];
				isNotFound = false;
				
			}

			if (secondLetter == 'a') {
				
				cout << "Your Instructor for " << subjects[1] << " is " << instructors[1];
				isNotFound = false;
				
			}

		}

		if (firstLetter == 'p') {

			cout << "Two (2) Subjects Found:" << endl;
			cout << "1. " << subjects[3] << endl;
			cout << "2. " << subjects[6] << endl;

			cout << "Enter the second letter of the subject: ";
			cin >> secondLetter;
			secondLetter = tolower(secondLetter);

			if (secondLetter == 'u' || secondLetter == 'U') {
				cout << "Your Instructor for " << subjects[3] << " is " << instructors[2];
				isNotFound = false;
				
			}

			if (secondLetter == 'h' || secondLetter == 'H') {
				cout << "Your Instructor for " << subjects[6] << " is " << instructors[3];
				isNotFound = false;
				
			}

		}

		if (firstLetter == 'm' || firstLetter == 'M') {
			cout << "Your Instructor for " << subjects[2] << " is " << instructors[4];
			isNotFound = false;
			
		}

		if (firstLetter == 'e' || firstLetter == 'E') {
			cout << "Your Instructor for " << subjects[4] << " is " << instructors[5];
			isNotFound = false;
			
		}

		if (firstLetter == 'k' || firstLetter == 'K') {
			cout << "Your Instructor for " << subjects[5] << " is " << instructors[5];
			isNotFound = false;
			
		}

		if (firstLetter == 'u' || firstLetter == 'U') {
			cout << "Your Instructor for " << subjects[7] << " is " << instructors[5];
			isNotFound = false;
			
		}

		if (firstLetter == 'n' || firstLetter == 'N') {
			cout << "Your Instructor for " << subjects[8] << " is " << instructors[3];
			isNotFound = false;
			
		}

		if (isNotFound) {
			cout << "No subject Found!";
		}

		cout << endl;

	return 0;
}ut << endl;

	return 0;
}