import org.junit.Test;
import static org.junit.Assert.assertEquals;
import org.junit.runners.JUnit4;

public class OddDashTests {

    @Test
    public void testBasic() {
        assertEquals("2-7-4", OddDash.dashatize(274));
        assertEquals("5-3-1-1", OddDash.dashatize(5311));
        assertEquals("86-3-20", OddDash.dashatize(86320));
        assertEquals("9-7-4-3-02", OddDash.dashatize(974302));
    }

    @Test
    public void testWeird() {
        assertEquals("0", OddDash.dashatize(0));
        assertEquals("1", OddDash.dashatize(-1));
        assertEquals("28-3-6-9", OddDash.dashatize(-28369));
    }

    @Test
    public void testEdgeCases() {
        assertEquals("2-1-4-7-48-3-64-7", OddDash.dashatize(Integer.MAX_VALUE));
        assertEquals("2-1-4-7-48-3-648", OddDash.dashatize(Integer.MIN_VALUE));
        assertEquals("1-1-1-1-1-1-1-1-1-1", OddDash.dashatize(-1111111111));
    }

}