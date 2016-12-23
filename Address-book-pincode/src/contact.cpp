#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        pincode.empty() &&
        email.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Contact::isNumeric() const
{
    int i,flag = 0;
    for(i=0; i < phoneNumber.length(); i++)
    {
        if(phoneNumber[i] >= '0' && phoneNumber[i] <= '9')
       {
            flag = 1;
        }

    }
    if(flag == 1 && phoneNumber.length() <= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}














    
