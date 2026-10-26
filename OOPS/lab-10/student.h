#ifndef STUDENT_H
#define STUDENT_H

class Student
{
protected:
    char *fname;
    char *lname;
    friend ostream &operator <<(ostream &, const Student &);

public:
    Student(cahr * = "", char * = "");
    ~Student();
}

#endif