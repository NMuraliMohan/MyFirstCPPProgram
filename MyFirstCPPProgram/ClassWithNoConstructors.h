#pragma once
#include <iostream>
class ClassWithNoConstructors
{
public:
	float m_float;
	std::string m_string;
	wchar_t m_char;
	ClassWithNoConstructors() = delete;
	ClassWithNoConstructors(float GPA) : m_float(GPA){}
};
