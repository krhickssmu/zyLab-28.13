#include <iostream>
using namespace std;

//update from user1
//updated from ruth 1
int main(){
  string name1, name2;
  int price1, price2, quantity1, quantity2;
  ItemToPurchase item1, item2;
  
  cout<<"Item 1"<<endl;
  cout<<"Enter the item name: "<<endl;
  getline(cin, name1);
  cout<<"Enter the item price: "<<endl;
  cin>>price1;
  cout<<"Enter the item quantity: "<<endl;
  cin>>quantity1;

  item1.SetName(name1);
  item1.SetPrice(price1);
  item1.SetQuantity(quantity1);

  cin.ignore();

  cout<<"Item 2"<<endl;
  cout<<"Enter the item name: "<<endl;
  getline(cin, name2);
  cout<<"Enter the item price: "<<endl;
  cin>>price2;
  cout<<"Enter the item quantity: "<<endl;
  cin>>quantity2;

  item2.SetName(name2);
  item2.SetPrice(price2);
  item2.SetQuantity(quantity2);

  cout<<"TOTAL COST"<<endl;
  cout<<item1.GetName()<<" "<<item1.GetQuantity()<<" @ $"<<item1.GetPrice();
  cout<<" = $"<<item1.GetQuantity()*item1.GetPrice()<<endl;

  
  cout<<item2.GetName()<<" "<<item2.GetQuantity()<<" @ $"<<item2.GetPrice();
  cout<<" = $"<<item2.GetQuantity()*item2.GetPrice()<<endl;
  cout<<endl;

  cout<<"Total: $"<<item1.GetQuantity()*item1.GetPrice()+item2.GetQuantity()*item2.GetPrice()<<endl;
  


  
  
  
  



  return 0;
}
