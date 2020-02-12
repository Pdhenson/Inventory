#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//This is an inventory data structure. It holds the current values.  
Inventory::Inventory(string name, float price, int count)
{
	m_name = name;
	m_price = price;
	m_in_stock = count;
}

//Reduces the stock by 1
	void Inventory::sell()
{	if (m_in_stock >= 0)
	{
		m_in_stock--;
	}
	else{
		std::cout << "Not in stock" << std::endl; 
	}
}

//This section drives the code.
ostream& operator<<(ostream& stream, const Inventory& item)
{
	stream << item.m_name 
		<< " $"
		<< std::fixed << std::setprecision(2) << item.m_price;
	return stream;
}
