import java.util.Scanner;

public class E1048 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double salary, newSalary = 0.0;
        int percent = 0;
        salary = read.nextDouble();
        if (salary <= 400){
            newSalary = salary * 0.15 + salary;
            percent = 15;
        }
        else if (salary <= 800){
            newSalary = salary * 0.12 + salary;
            percent = 12;
        }
        else if (salary <= 1200){
            newSalary = salary * 0.10 + salary;
            percent = 10;
        }
        else if (salary <= 2000){
            newSalary = salary * 0.07 + salary;
            percent = 7;
        }
        else {
            newSalary = salary * 0.04 + salary;
            percent = 4;
        }
        System.out.printf("Novo salario: %.2f\n", newSalary);
        System.out.printf("Reajuste ganho: %.2f\n", newSalary - salary);
        System.out.println("Em percentual: " + percent + " %");
    }
}
