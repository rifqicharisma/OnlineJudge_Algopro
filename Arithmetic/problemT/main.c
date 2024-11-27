#include <stdio.h>
#include <stdlib.h>

int main()
{
    int startHours, startMinutes, endHours, endMinutes;
    char courseCode1[11];

    scanf("%s %02d:%02d-%02d:%02d", &courseCode, &startHours, &startMinutes, &endHours, &endMinutes);

    startHours = (startHours + 23) % 24;
    endHours = (endHours + 23) % 24;

    printf("%s %02d:%02d-%02d:%02d\n", courseCode, startHours, startMinutes, endHours, endMinutes);
    return 0;
}
