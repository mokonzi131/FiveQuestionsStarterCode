#include <iostream>
#include <string>
using namespace std;

// TODO: implement the `CreditCard` class here

ostream& operator<<(ostream& out, const CreditCard& card) // NOTE: do not modify this function
{
	out << "CARD: bank(" << card.bank() << "), name(" << card.name()
		<< "), number(" << card.number() << "), securityCode(" << card.securityCode()
		<< "), expiration(" << card.expiration() << ")";
	return out;
}

int main() // NOTE: do not modify this function
{
	CreditCard card{ "Bank of America", "George Washington", 1111222233334444, 999, "01/01/1776" };
	cout << card << endl;
}