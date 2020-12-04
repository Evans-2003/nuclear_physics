#include <stdio.h>

int abs(signed int n);
long double exponent(int base, signed int pow);

int main()
{
    //Mass of proton
    long double m_p = 1.6726219236951*exponent(10,-27);

    //Mass of neutron
    long double m_n = 1.6749274980495*exponent(10,-27);

    //Mass of electron
    long double m_e = 9.109383701528*exponent(10,-31);

    //Charge of electron
    long double e = 1.602176634*exponent(10,-19);

    //amu
    long double u = 1.66053886*exponent(10,-27);

    //Speed of light
    long double c = 299792458;

    /* n_p -> number of proton, 
       n_n -> number of neutrons,
       n_e -> number of electrons,
       m_a -> atomic mass number,
       m   -> atomic mass*/
    int n_p,n_n,n_e;
    double m;
    printf("Enter no. of protons: ");
    scanf("%d",&n_p);
    printf("Enter no. of neutrons: ");
    scanf("%d",&n_n);
    printf("Enter no. of electrons: ");
    scanf("%d",&n_e);
    printf("Enter mass(in amu): ");
    scanf("%lf",&m);
    
    int m_a = n_p + n_n;
    
    printf("\nExcess mass energy -> %Lf MeV\n", (m*u - m_a*u)*exponent(c,2)/(e*exponent(10,6)));
    
    long double energy = (n_p*m_p + n_n*m_n + n_e*m_e - m*u)*exponent(c,2)/e;
    printf("Binding energy -> %Lf MeV\n", energy/(exponent(10,6)));
    printf("Binding energy per nucleon -> %Lf MeV\n", energy/(exponent(10,6)*(n_p+n_n)));
}

int abs(signed int n)
{
    if (n<0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

long double exponent(int base, signed int pow)
{
    long double result = 1;
    if (pow>0)
    {
        for (int i = 0; i<pow; i++)
        {
            result = result*base;
        }
    }
    else if (pow<0)
    {
        for (int i = 0; i<abs(pow); i++)
        {   
            result = result/base;
        }
    }
    return result;
}
