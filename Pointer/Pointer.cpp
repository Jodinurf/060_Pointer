#include <iostream>
using namespace std;

class mahasiswa
{
public:
	int nim;
	void ShowNim();	//Deklarasi Method
};

void mahasiswa::ShowNim()		//implementasi method diluar class
{
	cout << "No Induk = " << nim << endl;
}

