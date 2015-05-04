#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	//func is a TEMPORARY placeholder until dinosaur functions are complete.
	int func = 1;

	//Gameplay template.
	cout << "Player 1" << setw(40) << "Player 2" << endl;
	cout << "1. " << func << setw(40) << "1. " << func << endl;
	cout << setw(11) << "Health: " << func << setw(40) << "Health: " << func << endl;
	cout << "2. " << func << setw(40) << "2. " << func << endl;
	cout << setw(11) << "Health: " << func << setw(40) << "Health: " << func << endl;
	cout << "3. " << func << setw(40) << "3. " << func << endl;
	cout << setw(11) << "Health: " << func << setw(40) << "Health: " << func << endl;
	cout << "4. " << func << setw(40) << "4. " << func << endl;
	cout << setw(11) << "Health: " << func << setw(40) << "Health: " << func << endl;
	cout << "5. " << func << setw(40) << "5. " << func << endl;
	cout << setw(11) << "Health: " << func << setw(40) << "Health: " << func << endl;

	cout << endl;

	//Total healths from each team are summed in these two variables.
	int allHealth1 = func;
	int allHealth2 = func;

	//attackValue is a TEMPORARY placeholder until dinosaur functions are complete.
	int attackValue = 2;

	//Regulates rotation between players.
	int turn = 1;
	do{
		if (turn % 2 != 0){
			cout << "Player 1, your atatack!" << endl;
			cout << "Number of the dinosaur you are attacking with: ";
			int dinoAttack; //Needs to be function?
			cin >> dinoAttack;
			while (dinoAttack > 5 || dinoAttack < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoAttack;
			}
			cout << "Number of the dinosaur you are going to attack: ";
			int dinoDefend; //Needs to be function?
			cin >> dinoDefend;
			while (dinoDefend > 5 || dinoDefend < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoDefend;
			}
			allHealth2 = allHealth2 - attackValue; //Attack value is the random attack value generated in the dinosaur's function.
			dinoDefend = dinoDefend - attackValue;
			if (dinoDefend <= 0){
				dinoDefend = 0;
				//How can I make this dinosaur unattackable after it's health is gone?
			}
		}
		else{
			cout << "Player 2, your atatack!" << endl;
			cout << "Number of the dinosaur you are attacking with: ";
			int dinoAttack; //Needs to be function?
			cin >> dinoAttack;
			while (dinoAttack > 5 || dinoAttack < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoAttack;
			}
			cout << "Number of the dinosaur you are going to attack: ";
			int dinoDefend; //Needs to be function?
			cin >> dinoDefend;
			while (dinoDefend > 5 || dinoDefend < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoDefend;
			}
			allHealth1 = allHealth1 - attackValue; //Attack value is the random attack value generated in the dinosaur's function.
			dinoDefend = dinoDefend - attackValue;
			if (dinoDefend <= 0){
				dinoDefend = 0;
				//How can I make this dinosaur unattackable after it's health is gone?
			}
		}

		turn++;
	} while (allHealth1 != 0 && allHealth2 != 0); //Checks to see if either team has a an overall health value of zero.

	if (allHealth1 != 0){
		cout << "Player 1 is the champion of Jurassic Arena!" << endl;
	}
	else if (allHealth2 != 0){
		cout << "Player 2 is the champion of Jurassic Arena!" << endl;
	}
}