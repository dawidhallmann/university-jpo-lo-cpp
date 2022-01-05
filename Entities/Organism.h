//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ORGANISM_H
#define UNIVERSITY_JPO_LO_CPP_ORGANISM_H


class Organism {
public:
    Organism(int x, int y);
    void setCoords(int x, int y);
    virtual void action() = 0;
    virtual void collision() = 0;
    virtual void draw() = 0;

    int getX();
    int getY();
protected:
    static const int baseInitiative=0, baseStrength=0;
    int x, y;
};


#endif //UNIVERSITY_JPO_LO_CPP_ORGANISM_H
