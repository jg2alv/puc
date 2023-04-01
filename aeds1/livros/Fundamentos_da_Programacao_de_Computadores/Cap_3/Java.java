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
        double sal, perc, nsal;

        sal = this.scanner.nextDouble();
        perc = this.scanner.nextDouble();
        nsal = sal * (perc / 100);

        System.out.printf("%f\n", nsal);

    }

    public void ex_r_10() {
        double radius, area;

        radius = this.scanner.nextDouble();
        area = Math.PI * Math.pow(radius, 2);

        System.out.printf("%f\n", area);
    }

    public void ex_r_15() {
        double price0, perc_prof, perc_tax, price, prof, tax;

        price0 = this.scanner.nextDouble();
        perc_prof = this.scanner.nextDouble();
        perc_tax = this.scanner.nextDouble();

        prof = price0 * (perc_prof / 100);
        tax = price0 * (perc_tax / 100);
        price = price0 + prof + tax;

        System.out.printf("%f\n", price);
    }

    public void ex_r_20() {
        double deg, h, rad, l;

        deg = this.scanner.nextDouble();
        h = this.scanner.nextDouble();
        rad = Math.toRadians(deg);
        l = h * Math.sin(rad);

        System.out.printf("%f\n", l);
    }

    public void ex_r_25() {
        double price_total, price_ticket;
        int n;

        price_total = this.scanner.nextDouble();
        price_ticket = this.scanner.nextDouble();
        n = (int) Math.ceil(price_total / price_ticket);

        System.out.printf("%d\n", n);
    }

    public void ex_p_05() {
        double price, nprice;

        price = this.scanner.nextDouble();
        nprice = price * 0.9;

        System.out.printf("%f\n", nprice);
    }

    public void ex_p_10() {
        double l, area;

        l = this.scanner.nextDouble();
        area = Math.pow(l, 2);

        System.out.printf("%f\n", area);
    }

    public void ex_p_15() {
        double b1, b2, sal;

        b1 = this.scanner.nextDouble();
        b2 = this.scanner.nextDouble();
        sal = this.scanner.nextDouble();

        sal -= 1.02 * (b1 + b2);

        System.out.printf("%f\n", sal);
    }

    public void ex_p_20() {
        double deg, dis, rad, l;

        deg = this.scanner.nextDouble();
        dis = this.scanner.nextDouble();

        rad = Math.toRadians(deg);
        l = dis / Math.cos(rad);

        System.out.printf("%f\n", l);
    }

    public void ex_p_25() {
        double hour, min, conv, tmin, sec;

        hour = this.scanner.nextDouble();
        min = this.scanner.nextDouble();
        conv = hour * 60;
        tmin = conv + min;
        sec = tmin * 60;

        System.out.printf("%f\n", conv);
        System.out.printf("%f\n", tmin);
        System.out.printf("%f\n", sec);
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.ex_r_05();
        main.ex_r_10();
        main.ex_r_15();
        main.ex_r_20();
        main.ex_r_25();
        main.ex_p_05();
        main.ex_p_10();
        main.ex_p_15();
        main.ex_p_20();
        main.ex_p_25();

        main.close();
    }
};