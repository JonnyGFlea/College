import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class MaxDiffLengthTest {

    @Test
    public void test1() {
        System.out.println("mxdiflg Fixed Tests");
        String[] s1 = new String[]{"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
        String[] s2 = new String[]{"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
        assertEquals(13, MaxDiffLength.mxdiflg(s1, s2)); // 13
    }

    @Test
    public void test2() {
        System.out.println("Jonathan Tests");
        String[] s1 = new String[]{"cccooommaaqqoxii"};
        String[] s2 = new String[]{"aa", "a"};
        assertEquals(15, MaxDiffLength.mxdiflg(s1, s2)); // 115
    }
}
