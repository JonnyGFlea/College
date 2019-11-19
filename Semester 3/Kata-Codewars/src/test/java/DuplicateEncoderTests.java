/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: obnounce
 *    Title: Duplicate Encoder
 *    Availability: https://www.codewars.com/kata/duplicate-encoder/java
 *
 ***************************************************************************************/

import org.junit.Test;
import static org.junit.Assert.assertEquals;
import org.junit.runners.JUnit4;


    public class DuplicateEncoderTests {
        @Test
        public void test() {
            assertEquals("))(",
                    DuplicateEncoder.encode("ddn"));
            assertEquals(")()())()(()()(",
                    DuplicateEncoder.encode("Prespecialized"));
            assertEquals("))))())))",DuplicateEncoder.encode("   ()(   "));
        }
    }
