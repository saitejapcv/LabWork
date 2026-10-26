#include <iostream>
#include "graduate.h"
#include "student.h"

int main() {
    Student * sptr = 0, S("Karthik", "Krishnan");
    Graduate *gptr = 0, G("Anusha", "Srinivasan", "B.E");

    cout << "Student S's details" << S << "\n" ;
    cout << "G's details" << G << "\n";

    sptr = &G;
    cout << *gptr;
    sptr = &S;
    gptr = static_cast<Graduate*>(sptr);
    cout<<*gptr;
    return 0;
}