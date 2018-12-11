#include <iostream>
#include <string>
#include <vector>
#include "Pen.h"
#include "Pencil.h"
#include "IWritable.h"
using namespace std;

void writeData(const vector<IWritable*>& instruments)
{
	for (const IWritable* instrument : instruments)
	{
		instrument->writeMessage(std::cout);
		cout << endl;
	}
}

int main()
{
	Pen pen{ "I am a pen", 3 };
	Pencil pencil;
	pencil.sharpen();
	pencil.setQuote("to be or not to be");

	vector<IWritable*> writingInstruments;
	writingInstruments.push_back(&pen);
	writingInstruments.push_back(&pencil);
	writeData(writingInstruments);
}