#ifndef Doctor_H
#define Doctor_H
#include "ManningTheSpaceships/Human.h"

/**
 * This class is derived from the Human class
 * This class is used to symbolize the Doctor
*/

class Doctor : public Human{
private:
    
public:
    ///generic Constructor
    Doctor(/* args */);
    ///generic Destructor
    ~Doctor();

    /**
     * This method Takes a Human* as a parameter.
     * This method will then Use the Human* to call the receiveTreatment Method.
     * After this method has executed the Human* will have been restored to 100% well-being.
     */
    void Heal(Human*);
};

#endif