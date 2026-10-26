#include <iostream>
#include "student.h"

Student::Student(char * first, char *last) {
    fname = new char [strlen(first) + 1];
    strcpy(fname, first);
    lname = new char [strlen(last) + 1];
    strcpy(lname, last);
}

ostream &operator <<(ostream &out, const Student &stud) {
    out << stud.fname << "\t" << stud.lname << "\n";
    return out;
}

