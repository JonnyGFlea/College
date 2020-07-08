/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: The Deaf Rats of Hamelin
 *    Availability: https://www.codewars.com/kata/the-deaf-rats-of-hamelin
 *
 ***************************************************************************************/
import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class PiedPiperTests {
    @Test
    public void ex1() {
        assertEquals(0, PiedPiper.countDeafRats("~O~O~O~O P"));
    }

    @Test
    public void ex2() {
        assertEquals(1, PiedPiper.countDeafRats("P O~ O~ ~O O~"));
    }

    @Test
    public void ex3() {
        assertEquals(2, PiedPiper.countDeafRats("~O~O~O~OP~O~OO~"));
    }
    @Test
    public void ex4() {
        assertEquals(2, PiedPiper.countDeafRats("~O~O~O P O~O~~OO~O~O~O~O~  ~OO~"));
    }

}
