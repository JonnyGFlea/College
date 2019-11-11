/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: bmw318mt
 *    Title: Money, Money, Money
 *    Availability: https://www.codewars.com/kata/563f037412e5ada593000114
 *
 ***************************************************************************************/

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class MoneyTests {

    @Test
    public void test() {
        System.out.println("Fixed Tests calculateYears");
        assertEquals(3, Money.calculateYears(1000, 0.05, 0.18, 1100));
        assertEquals(14, Money.calculateYears(1000, 0.01625, 0.18, 1200));
        assertEquals(0, Money.calculateYears(1000, 0.05, 0.18, 1000));
    }
}