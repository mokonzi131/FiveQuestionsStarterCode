#include <iostream>
#include <string> 
#include <random>
using namespace std;

// TODO: implement the fuzzData function so that it obscures each data
//  point with a number in the range [-2.0, 2.0], i.e. if the initial number
//  paased into this function is 105, then this number should be modified to
//  a new double ranging from 103.0 - 107.0
void fuzzData(double& dataPoint);

int main()
{
	// NOTE: do not change anything inside of 'main'
	mt19937 engine{ random_device{}() };
	uniform_int_distribution<> dataDistribution{ 100, 200 };
	vector<double> data;
	for (int i = 0; i < 20; i++)
	{
		data.push_back(static_cast<double>(dataDistribution(engine)));
	}

	cout << "initial data: ";
	for (const double& d : data)
		cout << d << ", ";
	cout << endl;

	for (double& d : data)
		fuzzData(d);

	cout << "fuzzed data: ";
	for (const double& d : data)
		cout << d << ", ";
	cout << endl;
}