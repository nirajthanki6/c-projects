/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Use Templates .
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
 

template <class T>
T add(T a, T b)
{
	return a+b;
}

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
 int a=10;
 int b=20;
 cout << add(a,b)<<endl;
 
 double c=10.5;
 double d=65.3;
 cout << add(c,d)<<endl;
 
 string e="Hello";
 string f=" World!";
 cout << add(e,f) <<endl;
}

