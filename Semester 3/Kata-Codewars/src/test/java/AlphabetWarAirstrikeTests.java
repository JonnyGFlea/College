/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dcieslak
 *    Title: Alphabet war - airstrike - letters massacre
 *    Availability: https://www.codewars.com/kata/5938f5b606c3033f4700015a
 *
 ***************************************************************************************/

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;


public class AlphabetWarAirstrikeTests {

    @Test
    public void MassacreTest() {
        assertEquals("", AlphabetWarAirstrike.doMassacre("*"));
        assertEquals("", AlphabetWarAirstrike.doMassacre("*****"));
        assertEquals("", AlphabetWarAirstrike.doMassacre("a*"));
        assertEquals("a", AlphabetWarAirstrike.doMassacre("aa*"));
        assertEquals("a", AlphabetWarAirstrike.doMassacre("aa*b"));
        assertEquals("adfg", AlphabetWarAirstrike.doMassacre("aa****bdfg"));
        assertEquals("adfl", AlphabetWarAirstrike.doMassacre("aa**bdfg**c*g**jl"));
        assertEquals("adf", AlphabetWarAirstrike.doMassacre("aa**bdfg**c*g**jl*"));
        assertEquals("zzs", AlphabetWarAirstrike.doMassacre("zz*zzs"));
        assertEquals("vhlbvfl", AlphabetWarAirstrike.doMassacre("*dvu****dhlp***bbvflr*"));
//        assertEquals("dwhqezphazqqg", AlphabetWarAirstrike.doMassacre("dwhm**zqel*kk*czs*sphaw**mzqqg"));
    }

    @Test
    public void SampleTestCases() {
        assertEquals("Right side wins!", AlphabetWarAirstrike.alphabetWar("z"));
        assertEquals("Let's fight again!", AlphabetWarAirstrike.alphabetWar("****"));
        assertEquals("Let's fight again!", AlphabetWarAirstrike.alphabetWar("z*dq*mw*pb*s"));
        assertEquals("Let's fight again!", AlphabetWarAirstrike.alphabetWar("zdqmwpbs"));
        assertEquals("Right side wins!", AlphabetWarAirstrike.alphabetWar("zz*zzs"));
        assertEquals("Left side wins!", AlphabetWarAirstrike.alphabetWar("sz**z**zs"));
        assertEquals("Left side wins!", AlphabetWarAirstrike.alphabetWar("z*z*z*zs"));
        assertEquals("Left side wins!", AlphabetWarAirstrike.alphabetWar("*wwwwhww*z*"));
    }
}