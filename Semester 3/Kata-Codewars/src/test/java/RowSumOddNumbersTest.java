import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class RowSumOddNumbersTest {

    @Test
    public void test1() {
        assertEquals(1, RowSumOddNumbers.rowSumOddNumbers(1));
        assertEquals(64, RowSumOddNumbers.rowSumOddNumbers(4));
        assertEquals(74088, RowSumOddNumbers.rowSumOddNumbers(42));
    }
}