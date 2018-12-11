#include "Pen.h"

Pen::Pen(std::string data, int color)
	: _data{ data }, _inkColor{ color }
{
}

void Pen::writeMessage(std::ostream & out) const
{
	out << _data;
}
