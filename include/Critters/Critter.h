#ifndef COS214_GP_CRITTER_H
#define COS214_GP_CRITTER_H

/**
 * This class is anbstraction of a critter
 * */

class Critter {
private:
    /**
     * This variable is used to indicate how tolerant the critter is towards Humans
     * */
    int humanToleranceLevel;
public:
    ///generic Constructor
    Critter();
    ///generic get method
    int getHumanToleranceLevel() const;
    ///generic set method
    void setHumanToleranceLevel(int humanToleranceLevel);
    ///generic Destructor
    ~Critter();

};

#endif 
