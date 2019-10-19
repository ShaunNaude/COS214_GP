//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_CRITTER_H
#define COS214_GP_CRITTER_H


class Critter {
private:
    int humanToleranceLevel;
public:
    Critter();

    int getHumanToleranceLevel() const;

    void setHumanToleranceLevel(int humanToleranceLevel);


};


#endif //COS214_GP_CRITTER_H
