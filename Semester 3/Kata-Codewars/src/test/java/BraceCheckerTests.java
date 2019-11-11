/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: xDranik
 *    Title: Valid Braces
 *    Availability: https://www.codewars.com/kata/5277c8a221e209d3f6000b56
 *
 ***************************************************************************************/

import static org.junit.jupiter.api.Assertions.assertEquals;
import org.testng.annotations.Test;

public class BraceCheckerTests {

    private BraceChecker checker = new BraceChecker();

    @Test
    public void testValid() {
        assertEquals(true, checker.isValid("()"));
    }

    @Test
    public void testInvalid() {
        assertEquals(false, checker.isValid("[(])"));
    }

}