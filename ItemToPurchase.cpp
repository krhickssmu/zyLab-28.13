#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


string ItemToPurchase::GetName(){
    return itemName;
}

int ItemToPurchase::GetPrice(){
    return itemPrice;
}

int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}

void ItemToPurchase::SetName(string itemName){
    this->itemName = itemName;
}

void ItemToPurchase::SetPrice(int itemPrice){
    this->itemPrice = itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}


ItemToPurchase::ItemToPurchase(){
  this->itemName = "none";
  this->itemPrice = 0;
  this->itemQuantity = 0;
}

