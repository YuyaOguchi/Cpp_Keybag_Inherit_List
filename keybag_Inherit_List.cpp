//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 5, Project 12 e
//  2/03/2016
//  keybag made with inheritance
//when running include listbase.cpp

#include <iostream>
#include "keybag_Inherit_List.h"
using namespace std;


keybag::keybag() {}
keybag::keybag(const List& other) :List(other){}

void keybag::insert(const value_type& entry, const key_type& keynumber){
    bool found = false;
    start();
    for(int i = 0; i < size(); i++) {
        if (currentkey() == entry){
            found = true;
            break;
        }
        advance();
    }
    start();
    if (found == false){
        List::insert(keynumber,entry);
        start();
    }

}

void keybag::removewithkey(const key_type& keynumber){
    start();
    for(int i = 0; i < size(); i++) {
        if (currentkey() == keynumber){
            remove_current();
            break;
        }
        advance();
    }
}

bool keybag::is_item(const key_type& keynumber){
    start();
    for(int i = 0; i < size(); i++) {
        if (currentkey() == keynumber){
            return true;
            break;
        }
        advance();
    }
    return false;
}

int main()
{
   keybag s;
   s.insert(10, 1);
   s.insert(20, 3);
   s.insert(30, 5);
   cout << "s" << endl;
   cout << s << endl;
}
