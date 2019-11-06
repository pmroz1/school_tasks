#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Vector{
private:
	//private variables
	int x;
	int y;
public:
	Vector(){//constructor
		/*'this' wskazuje na adres pamiêci obecnego obiektu (klasa object) */
		this->x = 0;
		this->y = 0;	
	}
	void show(void){
		printf("\n %d , %d\n",this->x,this->y);
	}
	void get_data(){
		printf("\nEnter X: ");
		cin>>x;
		printf("\nEnter y: ");
		cin>>y;
	}
	///////////////// HANDLE OPERANDS ///////////////////
	Vector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	Vector operator+ (const Vector &vec){
		return 
			Vector(this->x +vec.x,this->y+vec.y);
	}
	Vector operator- (const Vector &vec){
		return 
			Vector(this->x -vec.x,this->y-vec.y);
	}
};

int main(void){

	Vector A,B,Sum;

	A.get_data();
	B.get_data();
	
	Sum= A+B;
	cout<<"\nDodawanie: ";
	Sum.show();

	Sum= A-B;
	cout<<"\nOdejmowanie: ";
	Sum.show();
	cout<<"\n\n";
	


	return true;
}