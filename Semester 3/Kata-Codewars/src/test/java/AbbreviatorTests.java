import static org.junit.Assert.*;

import org.junit.Test;

public class AbbreviatorTests {

    private Abbreviator abbr = new Abbreviator();

    @Test
    public void testInternationalization() {
        assertEquals("r4y", abbr.abbreviate("really"));
        assertEquals("m[8c5mat5on d3y5a: mat, mat, cat5]a>", abbr.abbreviate("monolithic5mat5on doggy5a: mat, mat, cat5a"));
    }

    @Test
    public void doAbbreviateOnDash() {
        assertEquals("h3e-h2e", abbr.doAbbreviateOnDash("house-home"));
        assertEquals("n2d, n2d not w2t, to c6e t2s c2e-w2s", abbr.doAbbreviateOnDash("nord-home"));
    }

    @Test
    public void doAbbreviateOnWordsWithNumbers() {
        assertEquals("m[8c5mat5on", abbr.doAbbreviateOnWordsWithNumbers("monolithic5mat5on"));
    }
}