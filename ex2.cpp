/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Design a class named Person, Student and Employee.
 *  A Person has a Name, Address and phone Number.
 *  A Student has an id and major.
 *  An Employee has a Salary and Employee Number.
 *  Write a constructor, setter and getter for each class.
 *  Write display() method in each class to display all the fields.
 *  Write a test program that creates a Person, Student, Employee, and invokes their display() methods.
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
 
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
 class Person{
 	
 	public:
	 	string Name;
 		string Address;
 		long Phone_Number;
 	Person(){
 		Name="NONE";
 		Address="NOT AVAILABLE";
 		Phone_Number=0;
	 }
	 Person(string nm,string addr,long long ph_nm){
	 	
	 	Name=nm;
	 	Address=addr;
	 	Phone_Number=ph_nm;
	 }
 	
	void setName(string name){
		Name=name;
	}
	string getName(){
		return Name;
	}
	void setAddress(string address){
		Address=address;
	}
	string getAddress(){
		return Address;
	}
	void setPhoneNumber(long long phone_number){
		Phone_Number=phone_number;
	}
	long long getPhoneNumber(){
		return Phone_Number;
	}
	void getPrintPerson(){
		cout <<"Person Name = " << Name <<endl;
		cout <<"Address = " << Address <<endl;
		cout <<"Phone Number = " << Phone_Number <<endl;
	}
 		
 	
 };
 class Student{
 	
 	public:
 		int Id;
 		string Major;
 	Student(){
 		Id=0;
 		Major="NOT AVAILABLE";
 		
	 }
	 Student(int ID, string maj){
	 	
	 	Id=ID;
	 	Major=maj;
	 	
	 }
 		 		
 	void setId(int id){
 		Id=id;
	 }
	int getId(){
	 	return Id;
	 }
	void setMajor(string major){
		Major=major;
	}
	string getMajor(){
		return Major;
	}
	void PrintStudent(){
		cout <<"Student ID = " << Id <<endl;
		cout <<"Student Major = " << Major <<endl;
	}
	
	 
 		
 };
 class Employee{
 	
 	public:
 		double Salary;
 		int Employee_Number;
 	Employee(){
 		Salary=0;
 		Employee_Number=0;
 	 }
	Employee(double sal,int emp_nm){
	 	
	 	Salary=sal;
	 	Employee_Number=emp_nm;
	 }
 		 		
 	void setSalary(double salary){
 		Salary=salary;
	 }
	double getSalary(){
		return Salary;
	}
	void setEmployeeNumber(int employee_number){
		Employee_Number=employee_number;
	}
	int getEmployeeNumber(){
		return Employee_Number;
	}
	void PrintEmployee(){
		cout <<"Employee Salary = " << Salary <<endl;
		cout <<"Employee Number = " << Employee_Number <<endl;
	}
 	
 };

 int main()
 {
 	Person P("Niraj","40640 High St.,FREMONT-94538",5567975);
 	P.getPrintPerson();

 }

