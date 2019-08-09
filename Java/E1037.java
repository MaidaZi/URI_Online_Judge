import java.util.Scanner;

public class E1037 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double num;
        num = read.nextDouble();
        if (num >= 0.00 && num <= 25.00)
    		System.out.println("Intervalo [0,25]");
    	else if (num > 25.00 && num <= 50.00)
    		System.out.println("Intervalo (25,50]");
    	else if (num > 50.00 && num <= 75.00)
    		System.out.println("Intervalo (50,75]");
    	else if (num > 75.00 && num <= 100.00)
    		System.out.println("Intervalo (75,100]");
    	else
    		System.out.println("Fora de intervalo");
    }
}
