#include "LedLight.h"

#include <random>

LedLight LedLight::CreateRandomLight()
{
	std::mt19937 generator{ std::random_device{}() };

	std::uniform_int_distribution<> wattsDist{ 5, 50 };
	std::uniform_int_distribution<> lumensDist{ 400, 3000 };
	std::uniform_int_distribution<> kelvinDist{ 1500, 8000 };
	std::uniform_real_distribution<> baseSizeDist{ 1.0, 5.0 };
	std::uniform_real_distribution<> priceDist{ 5.50, 25.00 };

	return LedLight{
		wattsDist(generator),
		lumensDist(generator),
		kelvinDist(generator),
		baseSizeDist(generator),
		priceDist(generator) };
}

int LedLight::watts() const
{
	return _watts;
}

int LedLight::lumens() const
{
	return _lumens;
}

int LedLight::kelvin() const
{
	return _kelvin;
}

double LedLight::baseSize() const
{
	return _baseSize;
}

double LedLight::price() const
{
	return _price;
}

LedLight::LedLight(int watts, int luments, int kelvin, double baseSize, double price)
	: _watts{ watts }, _lumens{ luments }, _kelvin{ kelvin }, _baseSize{ baseSize }, _price{ price }
{
}

std::ostream & operator<<(std::ostream & out, const LedLight & light)
{
	out << "LED: watts(" << light.watts() << "), lumens(" << light.lumens()
		<< "), kelvin(" << light.kelvin() << "), baseSize(" << light.baseSize()
		<< "), price(" << light.price() << ")";

	return out;
}
