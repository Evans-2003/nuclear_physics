#include <stdio.h>

int main(){
    //Charge of electron
    long double e = 1.602176634E-19;

    //amu
    long double u = 1.6605390666050E-27;

    //Mass of proton
    long double m_p = 1.00727646662153;      // in amu

    //Mass of neutron
    long double m_n = 1.0086649158849;   // in amu

    //Mass of electron
    long double m_e = 5.4857990907016E-4;  // in amu

    //Speed of light
    long double c = 299792458;

    /* n_p -> number of proton, 
       n_n -> number of neutrons,
       m_a -> atomic mass number,
       m   -> atomic mass*/
    int n_p,n_n, m_a;
    double m;
    printf("Enter no. of protons: ");
    scanf("%d",&n_p);
    printf("Enter mass number: ");
    scanf("%d",&m_a);
    n_n = m_a - n_p;
    printf("Enter mass(in amu): ");
    scanf("%lf",&m);
   
    printf("\nExcess mass energy -> %Lf MeV\n", (m*u - m_a*u)*c*c/(e*1E6));
    
    long double energy = (n_p*m_p + n_p*m_e + n_n*m_n - m)*u*c*c/e;
    printf("Binding energy -> %Lf MeV\n", energy/1E6);
    printf("Binding energy per nucleon -> %Lf MeV\n", energy/(1E6*(n_p+n_n)));
}
