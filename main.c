#include <stdio.h>

#define SUBJECTS 5

int isValidMark(int mark) {
    return (mark >= 0 && mark <= 100);
}

int hasFailed(int marks[]) {
    for (int i = 0; i < SUBJECTS; i++) {
        if (marks[i] < 33)
            return 1;
    }
    return 0;
}

int calculateAverage(int marks[]) {
    int sum = 0;
    for (int i = 0; i < SUBJECTS; i++)
        sum += marks[i];
    return sum / SUBJECTS;
}

void printGrade(int avg) {
    printf("\nPassed\nStudent Grade: ");

    if (avg >= 80)      printf("A+\nExcellent");
    else if (avg >=70)  printf("A\nVery Good");
    else if (avg >=60)  printf("A-\nVery Good");
    else if (avg >=50)  printf("B\nGood");
    else if (avg >=40)  printf("C\nAverage");
    else                printf("D\nPoor");
}

int main() {
    int marks[SUBJECTS];
    char *subjects[SUBJECTS] = {"Bangla", "English", "Math", "Science", "ICT"};

    printf("Mark Analyzer\n\nEnter Marks\n");

    for (int i = 0; i < SUBJECTS; i++) {
        printf("%s : ", subjects[i]);
        scanf("%d", &marks[i]);

        if (!isValidMark(marks[i])) {
            printf("\nInvalid Input! Marks must be between 0 and 100.\n");
            return 0;
        }
    }

    if (hasFailed(marks)) {
        printf("\nGrade: F\nFAIL\n");
        return 0;
    }

    int average = calculateAverage(marks);
    printGrade(average);

    return 0;
}