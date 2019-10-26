#ifndef COS214_GP_ITERATOR_H
#define COS214_GP_ITERATOR_H
class Planet;
using namespace std;

/**
 * This class is the Iterator in the Iterator Design pattern.
 * This class Defines an interface for accessing and traversing elements.
 * */

class Iterator {
protected:
    ///generic Constructor
    Iterator();
public:
    ///generic Iterator Next
    virtual void Next()=0;
    ///generic method to get first item
    virtual void First()=0;
    ///generic method to check
    virtual bool IsDone()=0;
    ///generic method to access item at current index
    virtual Planet* currentItem() const = 0;

};

#endif 
