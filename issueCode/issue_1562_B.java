public class issue_1562_B {
    public static void main(String[] args) {
        consume();
    }

    public static String provide() {
        return null;
    }

    public static void consume() {
        String value = provide();
        String value2 = value.toLowerCase();
        System.out.println(value2);
    }
}
