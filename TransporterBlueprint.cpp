#include "TransporterBlueprint.h"
TransporterBlueprint::TransporterBlueprint(/* args */)
{
}

TransporterBlueprint::~TransporterBlueprint()
{
}

Spaceships* TransporterBlueprint::createSpaceship(){
    Transporter* transporter = new Transporter();
    return transporter;
}