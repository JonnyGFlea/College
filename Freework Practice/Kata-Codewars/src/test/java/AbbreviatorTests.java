/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: wthit56
 *    Title: Word a10n (abbreviation)
 *    Availability: https://www.codewars.com/kata/word-a10n-abbreviation
 *
 ***************************************************************************************/


import static org.junit.Assert.*;
import org.junit.Test;

public class AbbreviatorTests {

    private Abbreviator abbr = new Abbreviator();

    @Test
    public void testInternationalization() {
//        assertEquals("r4y", abbr.abbreviate("really"));
//        assertEquals("m8c5mat5on!", abbr.abbreviate("monolithic5mat5on!"));
//        assertEquals("m8c5mat5on! d3y5a: mat, mat, cat5a", abbr.abbreviate("monolithic5mat5on! doggy5a: mat, mat, cat5a"));
        assertEquals("sat_m8c5mat. b5n", abbr.abbreviate("sat_monolithic5mat. balloon"));
    }

    @Test
    public void doAbbreviateOnDash() {
        assertEquals("h3e-h3e", abbr.doAbbreviateOnDash("house-house"));
        assertEquals("n2d-n2d,n2d.t2k", abbr.doAbbreviateOnDash("nord-nord,nord.took"));
    }
}