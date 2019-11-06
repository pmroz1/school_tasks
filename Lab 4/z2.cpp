//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
//class Fraction{
//private:
//	//private variables
//	double liczebnik;
//	double mianownik;
//public:
//	Fraction(){//constructor
//		/*'this' wskazuje na adres pamiêci obecnego obiektu (klasa object) */
//		this->liczebnik = 0;
//		this->mianownik= 0;	
//	}
//	void show(void){
//		printf("\n %lf , %lf\n",this->liczebnik,this->mianownik);
//	}
//	void get_data(){
//		printf("\nEnter liczebnik: ");
//		cin>>liczebnik;
//		printf("\nEnter mianownik: ");
//		cin>>mianownik;
//	}
//	///////////////// HANDLE OPERANDS ///////////////////
//	Fraction(double x, double y)
//	{
//		this->liczebnik = x;
//		this->mianownik = y;
//	}
//	Fraction operator* (const Fraction &vec){
//		return 
//			Fraction(this->liczebnik * vec.liczebnik,this->mianownik * vec.mianownik);
//	}
//	
//};
//
//int main(void){
//
//	Fraction A,B,Sum;
//
//	A.get_data();
//	B.get_data();
//
//	Sum=A*B;
//	Sum.show();
//	
//	
//
//
//	return true;
//}