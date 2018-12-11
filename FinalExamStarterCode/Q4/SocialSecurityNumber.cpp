#include "SocialSecurityNumber.h"

SocialSecurityNumber::SocialSecurityNumber(std::string issueDate, int first, int middle, int last)
	: _issueDate{ issueDate }, _firstDigits { std::to_string(first) }, _middleDigits{ std::to_string(middle) }, _finalDigits{ std::to_string(last) }
{
}

std::string SocialSecurityNumber::info() const
{
	return _firstDigits + "-" + _middleDigits + "-" + _finalDigits + " issued: " + _issueDate;
}
