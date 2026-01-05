// NIRANJAN YADAV
// ERP - 10895

// PROJECT TITLE – MARKS GRADING AND TOTAL CALCULATION

// AIM - The aim of this project is to create a  Marks Grading and Total Calculation System that calculates the total marks,percenatage and assign grades for multiple subjects based on user input

// DETAILED WALKTHROUGH ( HOW TO APPROACH THE PROBLEM ) – Create a 1D array for storing subject marks, Loops for calculation and total calculation, arthimetic operators for sum and percentage, conditional statement for grade assignment.
#include <stdio.h>

int main() {
    int n, i;
    float marks[100];
    float total = 0.0, percentage;
    char grade;
    int pass = 1;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of subjects!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        do {
            printf("Enter marks for subject %d (0 - 100): ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100)
                printf("Invalid marks! Please enter between 0 and 100.\n");

        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];

        if (marks[i] < 33)
            pass = 0;
    }

    percentage = total / n;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 45)
        grade = 'E';
    else
        grade = 'F';

    printf("\n--------- MARKS DETAILS ---------\n");
    for (i = 0; i < n; i++) {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }

    printf("--------------------------------\n");
    printf("Total Marks     : %.2f / %.2f\n", total, n * 100.0);
    printf("Percentage      : %.2f%%\n", percentage);
    printf("Grade           : %c\n", grade);

    if (pass)
        printf("Result          : PASS\n");
    else
        printf("Result          : FAIL\n");

    printf("--------------------------------\n");

    return 0;
}
