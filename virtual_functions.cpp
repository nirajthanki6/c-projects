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
using namespace std; 

class Shape{
	public:
	virtual double getArea()=0; // getArea virtual function
};
class Circle:public Shape{
	protected:
		double radius;
	public:
		double getArea(){
			return 3.14*radius*radius;
		}
		Circle(){         //default constractor
			radius=0;
		}
		Circle(double radius){  //Parametric constractor
			this->radius=radius;
		}
	
};
class Rectangle:public Shape{
	protected:
		double width;
		double height;
	public:
		double getArea(){
			return width*height;
		}
		Rectangle(){ //default constractor
			width=0;
			height=0;
			
		}
		Rectangle(double width,double height){ //parametric constractor
			this->width=width;
			this->height=height;
		}
};

int main()
{
	double radius,width,height;
	int selection;
	
	
	cout << "0 -> Circle" <<endl;
	cout << "1 -> Rectangle" <<endl;
	cout <<"---YOUR CHOICE---"<<endl;
	cin >> selection;
	
	if(selection == 0){
		
		cout <<"Enter the Radius" <<endl;
		cin >> radius;
		
		Shape *c = new Circle(radius);
		cout << "The Area of Circle = " << c->getArea() <<endl;
	}
	else 
	{
		cout <<"Enter the Width = " <<endl;
		cin >> width;
		cout <<"Enter the Height = " <<endl;
		cin >> height;
		
		Shape *r = new Rectangle(width,height);
		cout << "The Area of Rectangle = " << r->getArea() <<endl;
	}

}

