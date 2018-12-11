#include "Pencil.h"

void Pencil::sharpen()
{
	_isSharp = true;
}

void Pencil::setQuote(std::string quote)
{
	_quotation = quote;
}

void Pencil::writeMessage(std::ostream & out) const
{
	if (_isSharp)
		out << _quotation;
}
