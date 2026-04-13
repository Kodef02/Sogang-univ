#include <cstdio>
#include "lecture.hpp"
#include "student.hpp"

using std::cout;
using std::endl;


// TODO: Fill in these functions.

void Student::PrintGrade() {
    for (int i = 0; i < lecture_cnt; i++) {
        Lecture *lec = lectures[i];
        const char * code = lec->GetCode();
        Grade grade;
        if (lec->GetGradeOf(this->GetID(), &grade)) {
            cout << code << " : " << GradeToString(grade) << endl;
        }
    }
}

bool Student::Register(Lecture *lec) {
    if (lecture_cnt >= MAX_LECTURE) {
        return false;
    }

    if (!lec->AddStudent(this->GetID())) {
        return false;
    }

    lectures[lecture_cnt++] = lec;
    return true;
}
