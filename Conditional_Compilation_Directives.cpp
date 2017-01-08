/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Description of this source file.
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
#include<iostream>
#include<stdlib.h>
using namespace std;

#define US 0
#define ENGLAND 1
#define JAPAN 2

#define ACTIVE_COUNTRY US

#if ACTIVE_COUNTRY == US
string currency[]="Dollar";
#elif ACTIVE_COUNTRY == ENGLAND 
string currency[]="Pound";
#else
string currency[]="yen";
#endif

int main()
{
	cout << currency[US] << endl;

}

