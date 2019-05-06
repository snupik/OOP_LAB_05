#include "Header.h"
#include <iostream>

Excursion::Excursion()
{
	name[0] = '\0'; day = 0; month = 0; year = 0; duration = 0; price = 0;	guide[0] = '\0'; fraction = 0;
}

Excursion::~Excursion()
{
}

void Excursion::SetName(const char* a)
{
	strcpy_s(name, a);
}

void Excursion::SetDate(int a, int b, int c)
{
	this->day = a;
	this->month = b;
	this->year = c;
}

 void  Excursion::SetDuration(int a)
{
	this->duration = a;
}

void Excursion::SetPrice(double a)
{
	this->price = a;
}
void Excursion::SetGuide(const char* a)
{
	strcpy_s(guide, a);
}

void Excursion::SetFraction(double a)
{
	this->fraction = a;
}

double Excursion::Income()
{
	return this->price * this->fraction / 100;
}

void Excursion::SetNumb(int a)
{
	this->numb = a;
}