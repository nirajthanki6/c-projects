/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Design a class named Person and its two subclasses named Student and Employee.
 *	a. A Person has a Name, Address and phone Number.
 *	b. A Student has an id and major.
 *	c. An Employee has a Salary and Employee Number.
 *		• Override the toString() method in each class to display all the fields.
 *		• Draw the UML diagram for the classes.
 *		• Write a test program that creates a Person, Student, and Employee and invokes their toString() methods.
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
  
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
class person{              // declaration of person super class
	protected:
		string name;
		string address;
		int phone_number;
	public:
	void setname(string name){    // set the for the person name
		this->name=name;
	}
	string getname(){             // get the person name
		return name;
	}
	void setaddress(string address){   // set the address for person
		this->address=address;
	}
	string getaddress(){             // get the address for person
		return address;
	}
	void setphone_number(int phone_number){   // set the phone number of person
		this->phone_number=phone_number;
	}
	int getphone_number(){            // get the phone number of person
		return phone_number;
	}
	person(){                       //default constractor for person class
		name="NOT AVAILABLE";
		address="NOT AVAILABLE";
		phone_number=0;
	}
	person(string name,string address,int phone_number){   // parameterised constractor for person class
		this->name=name;
		this->address=address;
		this->phone_number=phone_number;
	}
	void toString(){                              // print data for person class                  
		cout <<"Person Name = " << name <<endl;
		cout <<"Address = " << address <<endl;
		cout <<"Phone Number = " << phone_number <<endl;
	}
		
};
class student:public person {          // Declaration of student sub-class from person super class
	protected:
		int id;
		string major;
	public:
	void setid(int id){       // set the id for student
		this->id=id;
	}
	int getid(){             // get the id for student
		return id;
 	}
	void setmajor(string major){    // set the Major for Student
		this->major=major;
	}
	string getmajor(){              // get the Majot for student
		return major;
	}
	student(){                      // default constractor for student class
		id=0;
		major="NOT AVAILABLE";
	}
	student(int id,string major){   // Parameterised constractor for student class
		this->id=id;
		this->major=major;
	}
	void toString(){                           // print student data for student class                 
		cout <<"Student ID = " << id <<endl;
		cout <<"Major = " << major <<endl;
	}
			
};
class employee:public person {      // Declaration of employee sub-class from person super class
	protected:
		int salary;
		int employee_no;
	public:
	void setsalary(int salary){   // set the salary for employee
		this->salary=salary;
	}	
	int getsalary(){     // get the salary for employee
		return salary;
	}
	void setemployee_no(int employee_no){    // set the employee number for employee
		this->employee_no=employee_no;
	}
	int getemployee_no(){       // get the employee number for employee
		return employee_no;
	}
	employee(){    // default constractor for employee class
		salary=0;
		employee_no=0;
	}
	employee(int salary,int employee_no){   // Parameterised Constractor for employee class
		this->salary=salary;
		this->employee_no=employee_no;
	}
	void toString(){                           // print student data for student class                 
		cout <<"Employee Salary = " << salary <<"$"<<endl;
		cout <<"Employee Number = " << employee_no <<endl;
	}
};

int main()
 {
 	person p("Niraj","40640 High Street,Fremont-95438",51055679);
        p.toString();
        student s(19376,"Computer Science");
	s.toString();
	employee e(5000,1);
	e.toString();
}

