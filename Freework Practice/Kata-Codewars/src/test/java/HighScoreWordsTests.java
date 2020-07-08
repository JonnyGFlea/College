import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class HighScoreWordsTests {
    @Test
    public void sampleTests() {
        assertEquals("taxi", HighScoreWords.high("man i need a taxi up to ubud"));
        assertEquals("volcano", HighScoreWords.high("what time are we climbing up to the volcano"));
        assertEquals("semynak", HighScoreWords.high("take me to semynak"));
    }

}
