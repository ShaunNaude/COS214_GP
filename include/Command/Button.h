#ifndef COS214_GP_BUTTON_H
#define COS214_GP_BUTTON_H
class Command;

/**
 * This class is The Invoker Component of the Command design pattern.
 * This class asks the command to carry out the request.
 * */

class Button {
private:

protected:
    /**
     * This variable Holds a reference to the Command component of the Command design pattern
     * */
    Command* command;
public:
    /**
     * The Button Constructor has a Command* as a parameter.
     * This parameter is used to initialise the command variable.
     * */
    Button(Command* C);
    /**
     * This Method will invoke the execute function of the command varible.
     * */
    bool press(int index);

};

#endif 
