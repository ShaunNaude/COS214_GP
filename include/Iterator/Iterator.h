//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_ITERATOR_H
#define COS214_GP_ITERATOR_H

class Planet;
using namespace std;
class Iterator {
protected:
    Iterator();
public:
    virtual void Next()=0;
    virtual void First()=0;
    virtual bool IsDone()=0;
    virtual Planet* currentItem() const = 0;


};



#endif //COS214_GP_ITERATOR_H
