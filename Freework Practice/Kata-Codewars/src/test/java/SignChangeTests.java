/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: kdmatrosov
 *    Title: Plus - minus - plus - plus - ... - Count
 *    Availability: https://www.codewars.com/kata/5bbb8887484fcd36fb0020ca
 *
 ***************************************************************************************/

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class SignChangeTests {
    @Test
    public void basicTest() {
        assertEquals(0, SignChange.signChange(new int[] {1, 3, 4, 5}));
        assertEquals(2, SignChange.signChange(new int[] {1, -3, -4, 0, 5}));
        assertEquals(0, SignChange.signChange(new int[] {}));
        assertEquals(3, SignChange.signChange(new int[] {-47, 84, -30, -11, -5, 74, 77}));
    }
}