import org.junit.Test;
import static org.junit.Assert.*;

public class TimeFormatterTests {
    @Test
    public void exampleTests() {
        assertEquals("5 days, 12 hours, 57 minutes and 36 seconds", TimeFormatter.formatDuration(478656));
        assertEquals("1 hour, 1 minute and 2 seconds", TimeFormatter.formatDuration(3662));
        assertEquals("1 second", TimeFormatter.formatDuration(1));
        assertEquals("1 minute and 2 seconds", TimeFormatter.formatDuration(62));
        assertEquals("2 minutes", TimeFormatter.formatDuration(120));
        assertEquals("1 hour", TimeFormatter.formatDuration(3600));
    }
}
