#include <iostream>
#include "Inventory.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
  //Variable Declarations
  char choice = 'q';
  Inventory stock("Cupcake",2.99,100);
  //Present user with menu do until they choose to quit
  do
  {
    cout<<"\nMENU\n====\n(S)ell item\n(Q)uit\n>";
    //Get user choice
    cin>>choice; 
    if( (choice == 'S' || choice == 's'))
    {
      //remove the item from stock    
      stock.sell();
      cout<<stock<<"\n";
    }
  }while( choice != 'q' && choice != 'Q');

  return 0;
}
