#include<iostream>
#include<string. h>
using namespace std;

class Railway{
	private:
		char [100]name;
		char[100] So;
        int  Nu;
        int Time;
        char [100] de;
	    char[100] to;
		int tiket_id;
	public:
	info(){
		cout << endl << endl << endl << "\t\t\t\t\t\t-: Railway Riservation System :- " << endl << endl << endl;
		cout << "\t\t\tTrain number : ";
		cin >> this->Nu;
		cout << "\t\t\ttrain name  \t\t: ";
		cin >> this->name;
		cout << "\t\t\tSource \t\t: ";
		cin >> this->So;
		cout << "\t\t\tDestination : ";
		cin >> this->de;
        cout <<"\t\t\tTrain Time";
        cin >>this->Time;
	}
    print(){
   cout << "\t\t\t Your Train number is : "<< Nu<<endl; 
   cout << "\t\t\t Your Train name is : "<< name<<endl; 
   cout << "\t\t\t Your  Source is : "<< So<<endl; 
   cout << "\t\t\t Your Destination is : "<< de<<endl; 
   cout << "\t\t\t Your Train Time is : "<< Time<<endl; 
    
	success (){
		cout << endl << endl << "\t\t\tCongratulation Your agistration was done successfully....." << endl << endl;
	}
	
};

int main (){
	Railway r;
	r.info();
    r. print();
	r.success();
	return 0;
}