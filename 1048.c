#include <stdio.h>
 
int main() {
 
    int Percentage;
    float Salary, NewSalary, MoneyEarned;
    scanf("%f", &Salary);
    if((Salary >= 0) && (Salary <= 400)){
        Percentage = 15;
        MoneyEarned = (Salary * Percentage)/100;
        NewSalary = Salary + MoneyEarned;
        printf("Novo salario: %.2f\n", NewSalary);
        printf("Reajuste ganho: %.2f\n", MoneyEarned);
        printf("Em percentual: %d %c\n", Percentage, '%');
    }
    else if((Salary >= 400.01) && (Salary <= 800)){
        Percentage = 12;
        MoneyEarned = (Salary * Percentage)/100;
        NewSalary = Salary + MoneyEarned;
        printf("Novo salario: %.2f\n", NewSalary);
        printf("Reajuste ganho: %.2f\n", MoneyEarned);
        printf("Em percentual: %d %c\n", Percentage, '%');
    }
    else if((Salary >= 800.01) && (Salary <= 1200)){
        Percentage = 10;
        MoneyEarned = (Salary * Percentage)/100;
        NewSalary = Salary + MoneyEarned;
        printf("Novo salario: %.2f\n", NewSalary);
        printf("Reajuste ganho: %.2f\n", MoneyEarned);
        printf("Em percentual: %d %c\n", Percentage, '%');
    }
    else if((Salary >= 1200.01) && (Salary <= 2000)){
        Percentage = 7;
        MoneyEarned = (Salary * Percentage)/100;
        NewSalary = Salary + MoneyEarned;
        printf("Novo salario: %.2f\n", NewSalary);
        printf("Reajuste ganho: %.2f\n", MoneyEarned);
        printf("Em percentual: %d %c\n", Percentage, '%');
    }
    else if(Salary > 2000){
        Percentage = 4;
        MoneyEarned = (Salary * Percentage)/100;
        NewSalary = Salary + MoneyEarned;
        printf("Novo salario: %.2f\n", NewSalary);
        printf("Reajuste ganho: %.2f\n", MoneyEarned);
        printf("Em percentual: %d %c\n", Percentage, '%');
    }
    
 
    return 0;
}