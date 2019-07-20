import java.util.Scanner;

public class E1018 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
        int valor;
        valor = read.nextInt();
        System.out.printf("%d\n", valor);
        while(valor > 0){
            if(valor >= 100){
                cem++;
                valor -= 100;
            }
            else if(valor >= 50){
                cinquenta++;
                valor -= 50;
            }
            else if(valor >= 20){
                vinte++;
                valor -= 20;
            }
            else if(valor >= 10){
                dez++;
                valor -= 10;
            }
            else if(valor >= 5){
                cinco++;
                valor -= 5;
            }
            else if(valor >= 2){
                dois++;
                valor -= 2;
            }
            else{
                um++;
                valor -= 1;
            }
        }
        System.out.printf("%d nota(s) de R$ 100,00\n", cem);
    	System.out.printf("%d nota(s) de R$ 50,00\n", cinquenta);
    	System.out.printf("%d nota(s) de R$ 20,00\n", vinte);
    	System.out.printf("%d nota(s) de R$ 10,00\n", dez);
    	System.out.printf("%d nota(s) de R$ 5,00\n", cinco);
    	System.out.printf("%d nota(s) de R$ 2,00\n", dois);
    	System.out.printf("%d nota(s) de R$ 1,00\n", um);
    }
}
