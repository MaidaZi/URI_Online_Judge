import java.util.Scanner;

public class E1038 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int cod, qtd;
        cod = read.nextInt();
        qtd = read.nextInt();

		switch (cod){
			case 1:
				System.out.printf("Total: R$ %.2f\n", 4.00 * (double)qtd);
			    break;
			case 2:
                System.out.printf("Total: R$ %.2f\n", 4.50 * (double)qtd);
			    break;
			case 3:
                System.out.printf("Total: R$ %.2f\n", 5.0 * (double)qtd);
			    break;
			case 4:
                System.out.printf("Total: R$ %.2f\n", 2.0 * (double)qtd);
			    break;
			case 5:
                System.out.printf("Total: R$ %.2f\n", 1.5 * (double)qtd);
	            break;
            default:
                break;
		}
    }
}
