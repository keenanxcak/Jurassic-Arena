#include <iostream>
#include <iomanip>
using namespace std;

const int maxdinos = 2;

int main(){

	//Content between dashed lines is an IDEA as to how to select the dinosaurs. It is an extremely rough outline.
	//----------
	//dinoID will correlate the number entered to the dinosuar.
	//const int dinoID = 5;
	//int dinoSelection1[dinoID];
	//int dinoSelection2[dinoID];

	//cout << "Player 1 select your dinosaurs." << endl;
	//cout << "1. ";
	//cin >> dinoSelection1[0];
	//cout << "2. ";
	//cin >> dinoSelection1[1];
	//cout << "3. ";
	//cin >> dinoSelection1[2];
	//cout << "4. ";
	//cin >> dinoSelection1[3];
	//cout << "5. ";
	//cin >> dinoSelection1[4];

	//cout << "Player 2 select your dinosaurs." << endl;
	//cout << "1. ";
	//cin >> dinoSelection2[0];
	//cout << "2. ";
	//cin >> dinoSelection2[1];
	//cout << "3. ";
	//cin >> dinoSelection2[2];
	//cout << "4. ";
	//cin >> dinoSelection2[3];
	//cout << "5. ";
	//cin >> dinoSelection2[4];
	////----------

	cout << "Let the battle begin!" << endl << endl;
	//func is a TEMPORARY placeholder until dinosaur functions are complete.
	int func = 1;
	const int NumOfDino = 5;
	int Player1[NumOfDino];
	int Player2[NumOfDino];

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

	//Total number of dinosaurs from the team are summed into the variable allHealth1. 
	int allHealth1 = maxdinos;
	//Total number of dinosaurs from the team are summed into the variable allHealth2. 
	int allHealth2 = maxdinos;
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
			while (dinoAttack > maxdinos || dinoAttack < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoAttack;
			}
			cout << "Number of the dinosaur you are going to attack: ";
			int dinoDefend; //Needs to be function?
			cin >> dinoDefend;
			while (dinoDefend > maxdinos || dinoDefend < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoDefend;
			}
			dinoDefend = dinoDefend - attackValue;
			if (dinoDefend <= 0){
				dinoDefend = 0;
				//How can I make this dinosaur unattackable after it's health is gone?
			}
			if (dinoDefend == 0){
				allHealth2 = allHealth2 - 1; //Attack value is the random attack value generated in the dinosaur's function.
			}
		}
		else{
			cout << "Player 2, your atatack!" << endl;
			cout << "Number of the dinosaur you are attacking with: ";
			int dinoAttack; //Needs to be function?
			cin >> dinoAttack;
			while (dinoAttack > maxdinos || dinoAttack < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoAttack;
			}
			cout << "Number of the dinosaur you are going to attack: ";
			int dinoDefend; //Needs to be function?
			cin >> dinoDefend;
			while (dinoDefend > maxdinos || dinoDefend < 0){ //Checks that user's input is valid.
				cout << "Invalid input. Try again: ";
				cin >> dinoDefend;
			}
			dinoDefend = dinoDefend - attackValue;
			if (dinoDefend <= 0){
				dinoDefend = 0;
				//How can I make this dinosaur unattackable after it's health is gone?
			}
			if (dinoDefend == 0){
				allHealth1 = allHealth1 - 1; //Attack value is the random attack value generated in the dinosaur's function.
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