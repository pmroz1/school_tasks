#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Verticle{
private:
	//private variables
	double x;
	double y;
	double z;
public:

	////////////////////////////////////////////

	Verticle(){//constructor
		/*'this' wskazuje na adres pamiêci obecnego obiektu (klasa object) */
		this->x = 0;
		this->y= 0;
		this->z= 0;	
	}
	void show(void){
		printf("\nX:%.2lf\nY:%.2lf\nZ:%.2lf\n\n",this->x,this->y,this->z);
	}
	void get_data(){
		printf("\nEnter X: ");
		cin>>x;
		printf("\nEnter Y: ");
		cin>>y;
		printf("\nEnter Z: ");
		cin>>z;
	}
	///////////////// HANDLE OPERANDS ///////////////////
	Verticle(double x, double y,double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	//Friends 
	friend bool operator== (const Verticle &, const Verticle &);
	friend bool operator!= (const Verticle &, const Verticle &);
};

bool operator == (const Verticle &vec1, const Verticle &vec2){
		if ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z))
			return true;
		else
			return false;
	}
bool operator != (const Verticle &vec1, const Verticle &vec2){
		if ((vec1.x != vec2.x) && (vec1.y != vec2.y) && (vec1.z != vec2.z))
			return true;
		else
			return false;
	}

int main(void){

	Verticle A,B;

	A.get_data();
	B.get_data();

	A.show();
	B.show();
	
	if (A == B)
	{
		cout << "Verticles are equal " << endl;
	}
	else 
	{
		cout << "Verticles are not equal " << endl;
	}


	return true;
}