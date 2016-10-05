#include <iostream>
#include <stdlib.h>
#include "Triangle.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "function.h"
using namespace std;


int main()
{
	char c;
	while ((c = getchar()) != 'e') {
		if (c == 'T') {	
	    	Triangle *ptr = new Triangle;
	    	ptr->Print();
	    	cout<<"Square is "<<ptr->Square()<<endl;
	    	delete ptr;
		}
		if (c == 'H') {
			Hexagon *ptr = new Hexagon;
			ptr->Print();
			cout<<"Square is "<<ptr->Square()<<endl;
			delete ptr;
		}
		if (c == 'O') {
			Octagon *ptr = new Octagon;
			ptr->Print();
			cout<<"Square is "<<ptr->Square()<<endl;
			delete ptr;
		}
	}
    return 0;
}
