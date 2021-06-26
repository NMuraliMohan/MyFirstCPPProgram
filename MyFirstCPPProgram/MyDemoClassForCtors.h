#pragma once
#include <string> 
using namespace std; 

class MyDemoClassForConstructors
{
public: 
	double m_GPA;  // ==> 1
	int classOfStudy; // ==> 2
	std::string m_name; // ==> 3

/*	MyDemoClassForConstructors() {}

	MyDemoClassForConstructors(string str) : m_name{ str } {}

	MyDemoClassForConstructors(string str, double dbl) : m_name{ str }, m_GPA{ dbl } 
	{
	}

	*/
	////MyDemoClassForConstructors createAnObject( Murali, 6.7)
	//MyDemoClassForConstructors(string str, double dbl) {
	//	m_name = str;
	//	m_GPA = dbl;
	//}

};


