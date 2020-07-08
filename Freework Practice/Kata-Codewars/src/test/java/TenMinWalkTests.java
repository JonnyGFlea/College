/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: JKphobic
 *    Title: Take a Ten Minute Walk
 *    Availability: https://www.codewars.com/kata/take-a-ten-minute-walk/java
 *
 ***************************************************************************************/

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class TenMinWalkTests {
        private static final char[][] fail = new char[][] {
                new char[] {'n'},
                new char[] {'n', 's'},
                new char[] {'n','s','n','s','n','s','n','s','n','s','n','s'},
                new char[] {'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'},
                new char[] {'n','s','n','s','n','s','n','s','n','n'},
                new char[] {'e','e','e','w','n','s','n','s','e','w'},
                new char[] {'n','e','n','e','n','e','n','e','n','e'},
                new char[] {'n','w','n','w','n','w','n','w','n','w'},
                new char[] {'s','e','s','e','s','e','s','e','s','e'},
                new char[] {'s','w','s','w','s','w','s','w','s','w'}
        };

        private static final char[][] pass = new char[][] {
                new char[] {'n','s','n','s','n','s','n','s','n','s'},
                new char[] {'e','w','e','w','n','s','n','s','e','w'},
                new char[] {'n','s','e','w','n','s','e','w','n','s'}
        };

        @Test
        public void Test() {
            assertEquals("Should return false if walk is too short.  ", false, TenMinWalk.isValid(fail[0]));
            assertEquals("Should return false if walk is too short.  ", false, TenMinWalk.isValid(fail[1]));
            assertEquals("Should return false if walk is too long.  ", false, TenMinWalk.isValid(fail[2]));
            assertEquals("Should return false if walk is too long.  ", false, TenMinWalk.isValid(fail[3]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[4]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[5]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[6]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[7]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[8]));
            assertEquals("Should return false if walk does not bring you back to start.  ", false, TenMinWalk.isValid(fail[9]));
            assertEquals("Should return true for a valid walk.  ", true, TenMinWalk.isValid(pass[0]));
            assertEquals("Should return true for a valid walk.  ", true, TenMinWalk.isValid(pass[1]));
            assertEquals("Should return true for a valid walk.  ", true, TenMinWalk.isValid(pass[2]));
        }
    }