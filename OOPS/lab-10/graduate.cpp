#include "graduate.h"
#include <cstring>

Graduate::Graduate (char* fna, char* lna, char* dn) : Student(fna, lna) {
    degree = new char [strlen(dn) + 1];
    strcpy(degree, dn);
}

ostream &operator <<(ostream &out, const Graduate &grad)
{
    out << "First Name is \t" << static.cast<Student>(grad);
    out << "Degree is \t" << grad.degree;
    return 0;
}


