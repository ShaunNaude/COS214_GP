#ifndef Commander_H
#define Commander_H
#include "ManningTheSpaceships/Human.h"

/**
 * This class is derived from the Human class
 * This class is used to symbolize the Commander of the fleet
*/

class Commander : public Human{
private:
    
public:
    ///generic Constructor
    Commander(/* args */);
    ///generic Destructor
    ~Commander();
    
};

#endif