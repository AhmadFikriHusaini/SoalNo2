#include <iostream>
#include <conio.h>
using namespace std;

class RetailItem {
	private :
		string description;
		int unitsOnHand;
		double price;
	public :
		void setDescription(string des){
			description = des;
		}
		void setUnitsOnHand(int unit){
			unitsOnHand = unit;
		}
		void setPrice(double p){
			price = p;
		}
		string getDescription(){
			return description;
		}
		int getUnitsOnHand(){
			return unitsOnHand;
		}
		double getPrice(){
			return price;
		}
};

int main(){
	RetailItem rt1;
	RetailItem rt2;
	RetailItem rt3;
	
	rt1.setDescription("Jacket");
	rt1.setUnitsOnHand(12);
	rt1.setPrice(59.95);
	
	rt2.setDescription("Designer Jeans");
	rt2.setUnitsOnHand(40);
	rt2.setPrice(34.95);
	
	rt3.setDescription("Shirt");
	rt3.setUnitsOnHand(20);
	rt3.setPrice(24.95);
	
	cout<<"Description";
	cout<<"\tUnits On Hands";
	cout<<"\tPrice"<<endl;
	cout<<"----------------------------------------";
	cout<<endl;
	cout<<rt1.getDescription();
	cout<<"\t\t"<<rt1.getUnitsOnHand();
	cout<<"\t\t"<<rt1.getPrice();
	cout<<endl;
	cout<<rt2.getDescription();
	cout<<"\t"<<rt2.getUnitsOnHand();
	cout<<"\t\t"<<rt2.getPrice();
	cout<<endl;
	cout<<rt3.getDescription();
	cout<<"\t\t"<<rt3.getUnitsOnHand();
	cout<<"\t\t"<<rt3.getPrice();
	cout<<endl;
	
	getch();
	
	return 0;
}
