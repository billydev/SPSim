#include "env.h"

Env::Env()
{
    this->Temperature=0;
    this->Irradiance=0;
}
Env::Env(double temp,double Ir)
{
    this->Temperature=temp;
    this->Irradiance=Ir;
}
void Env::setIrradiance(double Ir)
{
    this->Irradiance=Ir;
}
void Env::setTemperature(double temp)
{
    this->Temperature=temp;
}
double Env::getTemperature()
{
    return this->Temperature;
}
double Env::getIrradiance()
{
    return this->Irradiance;
}

