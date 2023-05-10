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

int main()
{
	mahasiswa mhs{ 1 };		//object mhs
	mhs.ShowNim();			//Member Access Operator

	mahasiswa& ref = mhs;	//pointer reference refMhs
	ref.nim = 2;			//member access Operator
	mhs.ShowNim();

	mahasiswa* pMhs = &mhs;	//Pointer Deference pMhs
	pMhs->nim = 3;			//arrow operator
	pMhs->ShowNim();
