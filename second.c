#include <stdio.h>
#include <conio.h> // getch();

int main(void){

    const int max_records = 1000; // constant

    int quantity = 5; // variable

    double unit_price = 249.50; // double variable

    char grade = 'A'; // char variable

    double stock_value = (double)quantity * unit_price; // Process

    printf("Max Records=%d | Qty=%d | Unit Price = %.2f | Grading=%c | Stock Value=%.2f \n",
           max_records, quantity, unit_price, grade, stock_value);

    getch();

    return 0;
}

