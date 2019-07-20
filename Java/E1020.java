import java.util.Scanner;

public class E1020 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int ano = 0, mes = 0, dia = 0;
        int dias;
        dias = read.nextInt();
        while(dias > 0){
            if(dias >= 365){
                ano++;
                dias -= 365;
            }
            else if(dias >= 30){
                mes++;
                dias -= 30;
            }
            else{
                dia++;
                dias -= 1;
            }
        }
        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    }
}
