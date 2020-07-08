/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: smolen
 *    Title: Where is my parent!?(cry)
 *    Availability: https://www.codewars.com/kata/58539230879867a8cd00011c
 *
 ***************************************************************************************/

import java.util.Random;
import org.junit.Test;
import static org.junit.Assert.assertEquals;

public final class WhereIsMyParentTests {
    private static void test(final String expected, final String input) {
        assertEquals("For input \"" + input + '"', expected, WhereIsMyParent.findChildren(input));
    }

    @Test public void basicTests() {
        test("AaBb", "abBA");
        test("AaaaaaZzzz", "AaaaaZazzz");
        test("AaBbbCcc", "CbcBcbaA");
        test("FfUuuuXx", "xXfuUuuF");
        test("", "");
    }
}