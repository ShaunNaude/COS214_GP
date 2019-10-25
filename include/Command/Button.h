// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_BUTTON_H
#define COS214_GP_BUTTON_H

class Command;

class Button {
private:
protected:
    Command* command;
public:
    Button(Command* C);
    bool press(int index);

};


#endif //COS214_GP_BUTTON_H
