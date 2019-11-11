/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: joh_pot
 *    Title: Persistent Bugger.
 *    Availability: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec
 *
 ***************************************************************************************/

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class PersistTests {
    @Test
    public void BasicTests() {
        System.out.println("****** Basic Tests ******");
        assertEquals(3, Persist.persistence(39));
        assertEquals(0, Persist.persistence(4));
        assertEquals(2, Persist.persistence(25));
        assertEquals(4, Persist.persistence(999));
    }
}
