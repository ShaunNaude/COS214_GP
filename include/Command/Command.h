#ifndef COS214_GP_COMMAND_H
#define COS214_GP_COMMAND_H
class Fleet;

/**
 * This class is the Command component of the Command design pattern
 * The purpose of this pattern was to make interfacing with the fleet as intuitive as possible
 * */

class Command {
private:
protected:
    /**
     * This variable is a pointer to the receiver component of the Command design pattern
     * */
    Fleet* receiver;
public:
    /**
     * The Command class constructor takes a Fleet* as a parameter.
     * The reason for the parameter is to initailse the receiver variable
     * */
    Command(Fleet* F);
    /**
     * This method is a pure Virtual function.
     * This function is implemented in the derived class.
     * The purpose of this function is to execute the Functions in the reciver variable.
     * This function takes an integer as a parameter, this integer is used to identify the plant.
     * */ 
    virtual bool execute(int index)=0;

};

#endif 
