#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)

{

    int employee_id = 0;
    char name[80] = {0};

    printf("Enter Employee ID: ");

    scanf("%d", &employee_id);

    printf("Saved: %d \n", employee_id);

    getch();

    /*
    if(scanf("%d", &employee_id) != 1)
    {
        printf("Invalid ID\n");
        return 1;
    }

    printf("Employee Name: ");

    if(fgets(name, sizeof name, stdin) == NULL)
    
   {
        printf("INVALID NAME\n");
        return 1;
 
   }

    printf("Saved %d - %s \n", employee_id, name);
    */

    return 0;
}

