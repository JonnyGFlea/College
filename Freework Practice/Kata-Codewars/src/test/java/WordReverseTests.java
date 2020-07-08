import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class WordReverseTests {
    @Test
    public void test() {
        assertEquals("emocleW", new WordReverse().spinWords("Welcome"));
        assertEquals("Hey wollef sroirraw", new WordReverse().spinWords("Hey fellow warriors"));
    }

}