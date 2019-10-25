// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_COMMAND_H
#define COS214_GP_COMMAND_H


class Fleet;

class Command {
private:
protected:
    Fleet* receiver;
public:
    Command(Fleet* F);
    virtual bool execute(int index)=0;


};


#endif //COS214_GP_COMMAND_H
