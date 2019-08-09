import java.util.Scanner;

public class E1040 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        float n1, n2, n3, n4, media, notaF, exame;
        notaF = 0;
        n1 = read.nextFloat();
        n2 = read.nextFloat();
        n3 = read.nextFloat();
        n4 = read.nextFloat();

        media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10 ;
        System.out.printf("Media: %.1f\n", media);

        if(media >= 7.0){
            System.out.printf("Aluno aprovado.\n");
        }
        else if(media < 5.0){
            System.out.printf("Aluno reprovado.\n");
        }
        else if(media < 7){
            System.out.printf("Aluno em exame.\n");
            exame = read.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", exame);

            notaF = (exame + media) / 2;

            if(notaF >= 5.0){
                System.out.printf("Aluno aprovado.\n");
                System.out.printf("Media final: %.1f\n", notaF);
            }
            else {
                System.out.printf("Aluno reprovado.\n");
                System.out.printf("Media final: %.1f\n", notaF);
            }
        }
    }
}
