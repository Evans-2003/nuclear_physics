#include <stdio.h>
#include <math.h>

int main()
{
    //Charge of electron
    long double e = 1.602176634*pow(10,-19);

    //amu
    long double u = 1.6605390666050*pow(10,-27);

    //Mass of proton
    long double m_p = 1.00727646662153;      // in amu

    //Mass of neutron
    long double m_n = 1.0086649158849;   // in amu

    //Mass of electron
    long double m_e = 5.4857990907016*pow(10, -4);  // in amu

    //Speed of light
    long double c = 299792458;

    /* n_p -> number of proton, 
       n_n -> number of neutrons,
       m_a -> atomic mass number,
       m   -> atomic mass*/
    int n_p,n_n;
    double m;
    printf("Enter no. of protons: ");
    scanf("%d",&n_p);
    printf("Enter no. of neutrons: ");
    scanf("%d",&n_n);
    printf("Enter mass(in amu): ");
    scanf("%lf",&m);
    
    int m_a = n_p + n_n;
    
    printf("\nExcess mass energy -> %Lf MeV\n", (m*u - m_a*u)*pow(c,2)/(e*pow(10,6)));
    
    long double energy = (n_p*m_p + n_p*m_e + n_n*m_n - m)*u*pow(c,2)/e;
    printf("Binding energy -> %Lf MeV\n", energy/(pow(10,6)));
    printf("Binding energy per nucleon -> %Lf MeV\n", energy/(pow(10,6)*(n_p+n_n)));
}
