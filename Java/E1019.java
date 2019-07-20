import java.util.Scanner;

public class 1019 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int hora = 0, min = 0, seg = 0;
        int tempo;
        tempo = read.nextInt();
        while(tempo > 0){
            if(tempo >= 3600){
                hora++;
                tempo -= 3600;
            }
            else if(tempo >= 60){
                min++;
                tempo -= 60;
            }
            else{
                seg++;
                tempo -= 1;
            }
        }
        System.out.printf("%d:%d:%d\n", hora, min, seg);
    }
}
