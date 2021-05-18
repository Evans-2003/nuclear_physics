program mass_excess
        implicit none
        real*16 :: e = 1.602176634E-19    ! Charge of electron
        real*16 :: u = 1.6605390666050E-27  ! amu -> kg
        real*16 :: m_p = 1.00727646662153   ! Mass of proton in amu
        real*16 :: m_n = 1.0086649158849    ! Mass of neutron in amu
        real*16 :: m_e = 5.4857990907016E-4   ! Mass of electron in amu
        real*16 :: c = 299792458     ! speed of light
        real*16 :: energy       ! Binding energy (in eV)
        real*16 :: m                ! Atomic mass
        integer :: n_p            ! Number of protons
        integer :: n_n            ! Number of neutrons
        integer :: m_a              ! Mass number

        write (*, "(a)", advance='no') "Enter no. of protons: "
        read *, n_p
        write (*, "(a)", advance='no') "Enter mass number: "
        read *, m_a
        n_n = m_a - n_p
        write (*, "(a)", advance='no') "Enter mass(in amu): "
        read *, m

        print * , "Mass excess = ", (m - m_a)*u*c**2/(e*10**6), " MeV"

        energy = (n_p*m_p + n_p*m_e + n_n*m_n - m)*u*c**2/(e*10**6)
        print *, "Binding energy = ", energy, " MeV"
        print *, "Binding energy per nucleon = ", energy/(n_p + n_n), "MeV"

end program mass_excess
