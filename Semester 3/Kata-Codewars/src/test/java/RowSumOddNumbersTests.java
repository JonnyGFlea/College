/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: hhelwich
 *    Title: Sum of odd numbers
 *    Availability: https://www.codewars.com/kata/55fd2d567d94ac3bc9000064
 *
 ***************************************************************************************/

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class RowSumOddNumbersTests {

    @Test
    public void test1() {
        assertEquals(1, RowSumOddNumbers.rowSumOddNumbers(1));
        assertEquals(64, RowSumOddNumbers.rowSumOddNumbers(4));
        assertEquals(74088, RowSumOddNumbers.rowSumOddNumbers(42));
    }
}