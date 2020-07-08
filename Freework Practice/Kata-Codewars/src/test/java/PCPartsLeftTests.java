import org.junit.Test;
        import static org.junit.Assert.assertEquals;
        import org.junit.runners.JUnit4;


public class PCPartsLeftTests {
    @Test
    public void SampleTests() {
        assertEquals("CPU, GPU, desktopCase.", PCPartsLeft.partsLeft(false, true, true, false, true, true, false, true));
        assertEquals("Your PC is ready to build!", PCPartsLeft.partsLeft(true, true, true, true, true, true, true, true));
        assertEquals("No items bought!", PCPartsLeft.partsLeft(false, false, false, false, false, false, false, false));
    }
}
