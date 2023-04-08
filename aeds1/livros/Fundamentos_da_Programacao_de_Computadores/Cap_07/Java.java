package aeds1.livros.Fundamentos_da_Programacao_de_Computadores.Cap_07;

import java.util.*;

class Main {
    private Scanner scanner;

    public Main() {
        this.scanner = new Scanner(System.in);
    }

    public void close() {
        this.scanner.close();
    }

    public void ex_r_05() {
        final int[][] mat = new int[4][7];
        int sml = Integer.MAX_VALUE;
        int grt = Integer.MIN_VALUE;
        int row = 0;
        int col = 0;

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                mat[r][c] = this.scanner.nextInt();
            }
        }

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                int curr = mat[r][c];

                if (curr < sml) {
                    row = r;
                    sml = curr;
                }
            }
        }

        for (int c = 0; c < mat[0].length; c++) {
            int curr = mat[row][c];
            if (curr > grt) {
                grt = curr;
                col = c;
            }
        }

        System.out.printf("\nLinha: %d\nColuna: %d\n", row + 1, col + 1);
    }

    public void ex_r_10() {
        int[][] mat = new int[10][10];
        int temp;

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                mat[r][c] = this.scanner.nextInt();
            }
        }

        for (int i = 0; i < mat.length; i++) {
            temp = mat[1][i];
            mat[1][i] = mat[7][i];
            mat[7][i] = temp;
        }

        for (int i = 0; i < mat.length; i++) {
            temp = mat[i][3];
            mat[i][3] = mat[i][9];
            mat[i][9] = temp;
        }

        for (int i = 0, j = mat.length - 1; i < mat.length; i++, j--) {
            temp = mat[i][i];
            mat[i][i] = mat[i][j];
            mat[i][j] = temp;
        }

        for (int i = 0; i < mat.length; i++) {
            temp = mat[4][i];
            mat[4][i] = mat[i][9];
            mat[i][9] = temp;
        }
    }

    public void ex_p_17() {
        int[][] mat = new int[10][10];
        double avg = 0;

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                mat[r][c] = this.scanner.nextInt();
            }
        }

        for(int i = 0; i < mat.length; i++)
            avg += mat[i][i];

        System.out.printf("Average: %f\n", avg / mat.length);
    }

    public void ex_p_21() {
        int[][] mat = new int[5][5];

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                mat[r][c] = this.scanner.nextInt();
            }
        }

        for (int r = 0; r < mat.length; r++) {
            for (int c = 0; c < mat[0].length; c++) {
                mat[r][c] *= mat[r][r];
                System.out.printf("%d ", mat[r][c]);
            }

            System.out.println();
        } 
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.ex_r_05();
        main.ex_r_10();
        main.ex_p_17();
        main.ex_p_21();

        main.close();
    }
}