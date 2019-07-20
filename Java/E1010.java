import java.util.Scanner;

public class E1010 {
	public static void main(String[] args) {
	    Scanner read = new Scanner(System.in);
	    int num, qtd;
	    double price, sum = 0;
	    for (int i = 0; i < 2; i++) {
    	    num = read.nextInt();
    	    qtd = read.nextInt();
    	    price = read.nextDouble();
    	    sum += qtd * price;
	    }
	    System.out.printf("VALOR A PAGAR: R$ %.2f\n", sum);
	}
}
