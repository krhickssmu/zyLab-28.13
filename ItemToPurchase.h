#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
    private:

    //data members
    string itemName;
    int itemPrice;
    int itemQuantity;

    public:

    //constructor
    ItemToPurchase();

    //mutators
    void SetName(string name);
    void SetPrice(int price);
    void SetQuantity(int quantity);

    //accessors
    string GetName();
    int GetPrice();
    int GetQuantity();
    
}
/* Type your code here */

#endif


#endif
