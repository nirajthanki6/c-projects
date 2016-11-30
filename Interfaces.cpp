/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Example of Interfaces..
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
 
#include<iostream>
using namespace std;
class Shape{
	public:
			
	virtual double getArea()=0;
	virtual double getPerimeter()=0;
	virtual void display()=0;
};
class Circle :public Shape{
	protected: double radius;
	public:
	Circle(){
}
Circle(double r,string c){
	radius=r;
}
void setRadius(double r){
	radius=r;
}
double getRadius(){
	return radius;
}
double getArea(){
	double area=3.14*radius*radius;
	return area;
}
double getPerimeter(){
	double perimeter=2*3.14*radius;
	return perimeter;
}
void display(){
	cout << "Area of Circle = " <<getArea() <<endl;
	cout << "Perimeter of Circle = " <<getPerimeter() <<endl;	
}
};
class Square :public Shape{
	protected: double site;
	public:
		Square(){ }
	Square(double s,string c){
	site=s;
}
void setSite(double s){
	site=s;
}
double getSite(){
	return site;
}
double getArea(){
	double area=site*site;
	return area;
}
double getPerimeter(){
	double perimeter=4*site;
	return perimeter;
}
void display(){
	cout << "Area of Square = " <<getArea() <<endl;
	cout << "Perimeter of Square = " <<getPerimeter() <<endl;
	
}
};

int main(){
	int choice;
	Circle c(25,"Black");
	cout <<"Area of circle is = " <<c.getArea() <<endl;
	cout << "Perimeter of circle is = " <<c.getPerimeter()<<endl;
	c.display();
	Square s(10,"Red");
	cout << "Area of Square is = " <<s.getArea()<<endl;
}

	
	
	
	

	
	

