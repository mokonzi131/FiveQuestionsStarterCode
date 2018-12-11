#pragma once

#include <string>

class SocialSecurityNumber
{
public:
	SocialSecurityNumber(std::string issueDate, int first, int middle, int last);
	~SocialSecurityNumber() = default; // NOTE: do not touch this line of code

	std::string info() const;

private:
	std::string _issueDate;
	std::string _firstDigits;
	std::string _middleDigits;
	std::string _finalDigits;
};