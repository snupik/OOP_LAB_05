#include "header.h"
#include <iostream>

MixExcursion::MixExcursion()
{
	guide[0] = '\0', driver[0] = '\0'; fraction = 0;
}

MixExcursion::~MixExcursion()
{
}

int MixExcursion::GetPrice()
{
	return this->price*duration;
}


void MixExcursion::Setdriver(const char* a)
{
	strcpy_s(driver, a);
}

void MixExcursion::Setn(int a)
{
	this->n = a;
}

