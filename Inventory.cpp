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

void Inventory::sell()
{
  //IF there's available stock, reduce it by 1.
  if (m_in_stock >=0){
  	m_in_stock--;
  }
  else{
	cout << "There is no stock available" << endl;
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
