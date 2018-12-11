#pragma once

#include <string>
#include <iostream>
#include "IWritable.h"

class Pencil
{
public:
	void sharpen();
	void setQuote(std::string quote);
	void writeMessage(std::ostream& out) const;

private:
	std::string _quotation = "";
	bool _isSharp = false;
};