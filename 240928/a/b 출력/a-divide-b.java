import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.printf("%d.", a/b);
        for (int i=0; i<20; i++) {
            a%=b;
            a*=10;
            System.out.printf("%d", a/b);
        }
    }
}