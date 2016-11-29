#ifndef ENV_H
#define ENV_H


class Env
{
private:
    double Temperature;
    double Irradiance;

public:
    /*Constructeurs*/
    Env();
    Env(double temp,double Ir);
    /*Setter*/
    void setTemperature(double temp);
    void setIrradiance(double Ir);
    /*Getter*/
    double getTemperature ();
    double getIrradiance ();
};

#endif // ENV_H
