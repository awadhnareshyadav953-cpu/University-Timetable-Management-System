
#include <stdio.h>

int main() {
    char *days[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    char *subjects[6][3] = {
        {"C Programming", "Physics", "Maths"},
        {"English", "Chemistry", "C Programming"},
        {"Maths", "Physics", "English"},
        {"Chemistry", "C Programming", "Maths"},
        {"Physics", "English", "Chemistry"},
        {"Maths", "C Programming", "Lab"}
    };

    printf("\nUNIVERSITY TIME TABLE\n");
    printf("----------------------------------------\n");
    printf("Day        9-10          10-11       11-12\n");

    for (int i = 0; i < 6; i++) {
        printf("%-11s", days[i]);

        for (int j = 0; j < 3; j++) {
            printf("%-14s", subjects[i][j]);
        }
        printf("\n");
    }

    return 0;
}
