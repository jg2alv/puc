package aeds1.livros.Fundamentos_da_Programacao_de_Computadores.Cap_06;

import java.util.*;

class Main {
    private Scanner scanner;

    public Main() {
        this.scanner = new Scanner(System.in);
    }

    public void close() {
        this.scanner.close();
    }

    public void ex_r_10() {
        String[] gab = new String[8];
        int pts = 0;
        int ap = 0;

        for (int i = 0; i < 8; i++)
            gab[i] = this.scanner.nextLine();

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 8; j++) {
                String ans = this.scanner.nextLine();
                if (ans == gab[i])
                    pts++;
            }

            if (pts >= 6)
                ap++;

            pts = 0;
        }

        System.out.printf("Percentual de alunos aprovados: %d%", ap * 10);
    }

    public void ex_r_15() {
        int[] nums = new int[10];
        int[] divs = new int[5];

        for (int i = 0; i < 10; i++)
            nums[i] = this.scanner.nextInt();

        for (int i = 0; i < 10; i++)
            divs[i] = this.scanner.nextInt();

        for (int n : nums) {
            boolean div = false;
            System.out.printf("Numero %d\n", n);

            for (int i = 0; i < 5; i++) {
                if (n % divs[i] == 0) {
                    div = true;
                    System.out.printf("Divisivel por %d na posicao %d", divs[i], i);
                }
            }

            if (!div)
                System.out.printf("Nao possui divisores no segundo vetor\n");
        }
    }

    public void ex_r_20() {
        double[] nums = new double[5];

        for (int i = 0; i < 5; i++)
            nums[i] = this.scanner.nextDouble();

        int code = this.scanner.nextInt();
        switch (code) {
            case 0:
                break;

            case 1:
                for (int i = 4; i >= 0; i--)
                    System.out.printf("%f ", nums[i]);
                break;

            case 2:
                for (int i = 0; i < 5; i++)
                    System.out.printf("%f ", nums[i]);
                break;

            default:
                System.out.println("Opcao invalida!");
                break;
        }

        System.out.println();
    }

    public void ex_r_25() {
        int[] primes = new int[10];
        boolean prime = true;
        int count = 101;
        int i = 0;

        while (i < primes.length) {
            for (int j = 2; j < Math.ceil(Math.sqrt(count)); j++) {
                if (count % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                primes[i] = count;
                i++;
            }

            count++;
            prime = true;
        }

        for (i = 0; i < primes.length; i++)
            System.out.printf("%d ", primes[i]);

        System.out.println();
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.ex_r_10();
        main.ex_r_15();
        main.ex_r_20();
        main.ex_r_25();

        main.close();
    }
}