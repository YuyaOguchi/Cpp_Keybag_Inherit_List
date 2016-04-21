//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 5, Project 12 b
//  2/03/2016
//  Set made with inheritance

#include <cstdlib>  // Provides size_t
#include <iostream>
#include "listbase.h"
class keybag:public List{
public:
    typedef int value_type;
    typedef int key_type;
    typedef std::size_t size_type;
    // CONSTRUCTOR
    keybag( );
    keybag(const List& other);
    // MODIFICATION MEMBER FUNCTIONS
    void insert(const value_type& entry, const key_type& keynumber);
    void removewithkey(const key_type& keynumber);
    // CONSTANT MEMBER FUNCTIONS
    bool is_item(const key_type& keynumber);
};
