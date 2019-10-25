//
// Created by danienel21 on 2019/10/25.
//

#include "Command/Button.h"
#include "Command/Command.h"

Button::Button(Command *C) {
    command = C;
}

bool Button::press(int index) {
    return command->execute(index);
}
