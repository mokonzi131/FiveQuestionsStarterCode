#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "LedLight.h"
using namespace std;

int main()
{
	vector<LedLight> lights;
	for (int i = 0; i < 10; i++)
		lights.push_back(LedLight::CreateRandomLight());

	for (const LedLight& light : lights)
		cout << light << endl;

	// TODO: find and print:
	// - the brightest light (lumens are used to measure brightness)
	// - the most economic light (watts measure power consumption, less watts => more economic)
	// - the smallest light (in terms of base size)
	// - the warmest light (kelvin measures warmth of a light, smaller kelvin => warmer color)
	// - the most expensive light (in terms of price)
}