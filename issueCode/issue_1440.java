interface ITaintTest {
    String GetObj();
    void CallSink(String obj);
}

class UnsafeTest implements ITaintTest {
    @Override
    public String GetObj() {
        return null;
    }

    @Override
    public void CallSink(String obj) {
        issue_1440.sink(obj);
    }
}

class SafeTest implements ITaintTest {
    @Override
    public String GetObj() {
        return "Test";
    }

    @Override
    public void CallSink(String obj) { }
}

public class issue_1440 {
    public static void main(String[] args) {
        var x = source();
        Test(new SafeTest(), x);    // [!] FALSE POSITIVE
        Test(new UnsafeTest(), x);  // TRUE POSITIVE
    }

    private static void Test(ITaintTest obj, String t) {
        obj.CallSink(t);
        String s = obj.GetObj();
        s.length();
    }

    private static String source() { 
        return "TAINTED";
    }

    public static void sink(String obj) { }
}