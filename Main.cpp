#include "Class.hpp"
#include <iostream>

using namespace std;

void tester() {
	GroceryCounter counter = GroceryCounter();

	counter.total();

	counter.tens_button();
	counter.ones_button();
	counter.tenths_button();
	counter.hundredths_button();

	counter.total();

	counter.tens_button(5);
	counter.ones_button(4);
	counter.tenths_button(3);
	counter.hundredths_button(2);

	counter.total();

	counter.clear();

	counter.total();

}

int main() {

	tester();

	return 0;
}