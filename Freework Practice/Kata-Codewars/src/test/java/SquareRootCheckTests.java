import org.junit.Test;
        import static org.junit.Assert.assertEquals;
        import java.util.Random;

public class SquareRootCheckTests {
    @Test
    public void shouldWorkForSomeExamples() throws Exception {
        assertEquals("negative numbers aren't square numbers", false, SquareRootCheck.isSquare(-1));
        assertEquals("0 is a square number (0 * 0)",    true,   SquareRootCheck.isSquare(0));
        assertEquals("3 isn't a square number", false,  SquareRootCheck.isSquare(3));
        assertEquals("4 is a square number (2 * 2)",    true,   SquareRootCheck.isSquare(4));
        assertEquals("25 is a square number (5 * 5)",   true,   SquareRootCheck.isSquare(25));
        assertEquals("26 isn't a square number",false,  SquareRootCheck.isSquare(26));
    }
}