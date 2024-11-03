#include <iostream>
#include <string>
using namespace std;
#include "Human.h"
#include "Date.h"
#include "Lift.h"

int main()
{
	// countHumans не работает, не знаю что не так
	Date date1(12, 5, 2000);
	Human human1(1, "Ivan", "Ivanov", "Ivanovich", date1);
	human1.countHumans();
	human1.printHuman();
	Lift lift(1, 10);
	lift.liftOn();
	lift.setCurrentFloor(5);
	cout << lift.getCurrentFloor();
}
