public class Main {
    public static void main(String[] args) {
        System.out.printf("Number of arguments: %d\n", args.length);
        for (int i = 0; i < args.length; ++i) {
            System.out.printf("%2d. %s\n", i+1, args[i]);
        }
    }
}
