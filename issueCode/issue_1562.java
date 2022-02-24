public class Foo1A {

    public static void main (String[] args) {
        String value = provide();
        consume(value);
    }

    public static String provide() {
        return null;
    }

    public static void consume(String value) {
        String value2 = value.toLowerCase();
        System.out.println(value2);
    }
}