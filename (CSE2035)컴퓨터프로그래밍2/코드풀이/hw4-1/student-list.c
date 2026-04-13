#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student-list.h"

// TODO: Fill in this function.
void addStudentAtEnd(StudentNode **phead, char *name, int hour, int minute) {
    StudentNode *new_student = (StudentNode*)malloc(sizeof(StudentNode));
    strncpy(new_student->name, name, MAX_NAMELEN);
    new_student->name[MAX_NAMELEN] = '\0';
    Attendance tmp_state;
    if (hour <= 8 || (hour == 9 && minute == 0)){
        tmp_state = Present;
    }
    else if (hour == 9 && (0 < minute && minute <= 15)){
        tmp_state = Late;
    }
    else tmp_state = Absent;

    new_student->state = tmp_state;
    new_student->next = NULL;

    if (*phead == NULL) {
        *phead = new_student;
    }
    else {
        StudentNode *tmp = *phead;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_student;
    }
}

// TODO: Fill in this function.
void printStudentList(StudentNode *head) {
    StudentNode *cur_student = head;
    while(cur_student != NULL){
        if (cur_student->state == Late)
            printf("%s is late.\n", cur_student->name);
        else if(cur_student->state == Present)
            printf("%s is present.\n", cur_student->name);
        else
            printf("%s is absent.\n", cur_student->name);
        cur_student = cur_student->next;
    }
}
