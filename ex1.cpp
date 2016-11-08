/***********************************************************************************************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 ***********************************************************************************************************************************************************/
/***********************************************************************************************************************************************************
 *  main.c
 *
 *  Write a class named ClothingItem that holds data about an item in a retail store. The class should have the following member variables: 
 *  description: A string that holds a brief description of the item. unitsOnHand: An int that holds the number of units currently in inventory.
 *  price: A double that holds the item’s retail price.
 *  
 *  Write a constructor that accepts arguments for each member variable, mutator functions (set functions) that store values in these member variables 
 *  and accessor functions (get functions) that return the values in these member variables. Once you have written the class, write a main function that
 *  creates three ClothingItem objects, stores the data in them, and display the following information on the screen: 
 *
 *   No.                    Description                  Units On Hand                        Price
 * Item #1                    Jacket                        12                                59.95
 * Item #2                    Jeans                         40                                34.95
 * Item #3                    Shirt                         20                                24.95
 *
 *  Author:  THANKI NIRAJ and 19376
 ***********************************************************************************************************************************************************/
 
#include<iostream>
#include<stdlib.h>
using namespace std;

class ClothingItem{
	
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		void setdescription(string descript){
			description=descript;
		}
		string getdescription(){
			return description;
		}
		void setunitsOnHand(int unit_on_hand){
			unitsOnHand=unit_on_hand;
		}
		int getunitsOnHand(){
			return unitsOnHand;
		}
		void setprice(double pr){
			price=pr;
		}
		double getprice(){
			return price;
		}
		ClothingItem(){
			description="NOT AVAILABLE";
			unitsOnHand=0;
			price=0;
		}
		ClothingItem(string descript,int unit_on_hand,double pr){
			description=descript;
			unitsOnHand=unit_on_hand;
			price=pr;
		}
};

int main()
 {
 	ClothingItem C1("Jacket",12,59.95);
 cout << "No.\t" << "Description\t" << "Units On Hand\t" << "Price" <<endl;
 cout << "Item #1" ;
 cout << "\t" << C1.getdescription();
 cout << "\t\t" << C1.getunitsOnHand();
 cout << "\t\t" << C1.getprice() << endl;
 ClothingItem C2("Jeans",40,34.95);
 cout << "Item #2";
 cout << "\t" << C2.getdescription();
 cout << "\t\t" << C2.getunitsOnHand();
 cout << "\t\t" << C2.getprice() <<endl;
 ClothingItem C3("Shirt",20,24.95);
 cout << "Item #3" ;
 cout << "\t" << C3.getdescription();
 cout << "\t\t" << C3.getunitsOnHand();
 cout << "\t\t" << C3.getprice();
 }

