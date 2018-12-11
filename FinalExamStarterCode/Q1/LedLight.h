#pragma once

#include <ostream>

class LedLight
{
public:
	static LedLight CreateRandomLight();

	int watts() const;
	int lumens() const;
	int kelvin() const;
	double baseSize() const;
	double price() const;

private:
	LedLight(int watts, int luments, int kelvin, double baseSize, double price);

	int _watts;
	int _lumens;
	int _kelvin;
	double _baseSize;
	double _price;
};

std::ostream& operator<<(std::ostream& out, const LedLight& light);