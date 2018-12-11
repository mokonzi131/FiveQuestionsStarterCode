#include <iostream>
#include <string>
#include <vector>
#include "SocialSecurityNumber.h"
using namespace std;

int main() // NOTE: you may not change anything inside of `main`
{
	vector<SocialSecurityNumber> ssns;
	ssns.emplace_back("01/01/2000", 111, 22, 3333);
	ssns.emplace_back("01/01/2001", 444, 55, 6666);

	vector<SocialSecurityNumber> copies;
	for (SocialSecurityNumber& ssn : ssns)
		copies.push_back(move(ssn));

	cout << "initial social security numbers: " << endl;
	for (const SocialSecurityNumber& ssn : ssns)
		cout << "SSN: " << ssn.info() << endl;

	cout << "copied social security numbers: " << endl;
	for (const SocialSecurityNumber& ssn : copies)
		cout << "SSN: " << ssn.info() << endl;
}