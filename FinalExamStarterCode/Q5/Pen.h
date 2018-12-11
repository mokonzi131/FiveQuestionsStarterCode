#pragma once

#include <string>
#include "IWritable.h"

class Pen
{
public:
	Pen(std::string data, int color);

	void writeMessage(std::ostream& out) const;

private:
	std::string _data;
	int _inkColor;
};