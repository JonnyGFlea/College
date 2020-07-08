import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class DigitalRootTests {
    @Test
    public void Tests() {
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(911));
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(992));
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(20));
        assertEquals( "Nope!" , 0, DigitalRoot.digital_root(0));
        assertEquals( "Nope!" , 9, DigitalRoot.digital_root(423));
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(11));
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(2));
        assertEquals( "Nope!" , 2, DigitalRoot.digital_root(493193));
        assertEquals( "Nope!" , 6, DigitalRoot.digital_root(132189));
        assertEquals( "Nope!" , 7, DigitalRoot.digital_root(16));
        assertEquals( "Nope!" , 6, DigitalRoot.digital_root(456));

    }
}