
/*
Q2. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Price , Discount.
*/

#include<iostream>
using namespace std;

class Wellcome{
	public:
		int choice;
		int qty;
		int sub_total;
	public:
		Wellcome(){
			cout << "======================================================================================================================" << endl << endl ;
			cout << "\t\t\t\t\t-: Welcome to charcoal pizza :)  " << endl << endl;
			cout << "======================================================================================================================" << endl << endl << endl << endl ;
				
		}
		public:
	       manu(){
			cout << "\t\t1) Garlic pizza \t\t250" << endl;
			cout << "\t\t2) Tomato Pizaa \t\t350 " << endl;
			cout << "\t\t3) 7 Cheezy Pizza \t\t400 " << endl;
			cout << "\t\t4) mashroom Pizza \t\t450" << endl;
			cout << "\t\t5)To Exit........" << endl << endl << endl << endl;
			cout << "\t\tEnterr your choice for order pizza : ";
			cin >> choice;
		}
		pizza(){
			switch(choice)	{
				
				case 1:
					cout << endl <<  "\t\tGarlic pizza :- " << endl ;
					cout << "\t\tEnterr Quantity : ";
					cin >> qty;
				break;
				case 2:
					cout << endl << "\t\tTomato pizza :- " << endl;
					cout << "\t\tEnterr Quantity : ";
					cin >> qty;
				break;
				case 3:
					cout <<endl << "\t\t7 Cheezy Pizza :- "<< endl;
					cout << "\t\tEnterr Quantity : ";
					cin >> qty;
				break;
				case 4:
					cout << endl <<"\t\tMashroom Pizza :- "<< endl;
					cout << "\t\tEnterr Quantity : ";
					cin >> qty;
				break;
				default:
					cout <<endl <<  " Invald choise";
					break;
			}

	}
	bill(){
			cout << endl << endl << endl << endl<< "======================================================================================================================" << endl << endl ;
			cout << "\t\t\t\t\t-: Wellcome To charcoal pizza :)  " << endl << endl;
			cout << "======================================================================================================================" << endl << endl << endl << endl ;
			if(choice=1){
				cout << "\t\t\t\tcharcoal pizza " << endl << endl;
				cout << "\t\t\t\tGarlic pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl<< endl << endl;
			}
			else if(choice=2){
				cout << "\t\t\t\tcharcoal pizza " << endl << endl;
				cout << "\t\t\t\tTomato pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl<< endl << endl;
			}
			else if(choice=3){
				cout << "\t\t\t\tcharcoal pizza " << endl << endl;
				cout << "\t\t\t\t7 Cheezy izza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl << endl << endl;
			}
			else if(choice=4){
				cout << "\t\t\t\t " << endl << endl;
				cout << "\t\t\t\tmashroom pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl << endl << endl;
			}
			else{
				cout << "\t\t\t\tinvalid choice.... ";
			}
	}
	
};



int main (){
	Wllcome w;

	
	w.Wellcome();
	w.manu();
	w.pizza();
	if(w.choice <= 4){
	w.bill();	
	}
	
	
	return 0;
}
