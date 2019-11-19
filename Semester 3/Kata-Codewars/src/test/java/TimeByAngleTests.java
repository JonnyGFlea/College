/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: Clocky Mc Clock-Face
 *    Availability: https://www.codewars.com/kata/clocky-mc-clock-face/
 *
 ***************************************************************************************/
import org.junit.Test;
import static org.junit.Assert.assertEquals;


public class TimeByAngleTests {

    @Test
    public void test1200() {
        assertEquals("12:00", TimeByAngle.whatTimeIsIt(0));
        assertEquals("12:00", TimeByAngle.whatTimeIsIt(360));
    }

    @Test
    public void test0300() {
        assertEquals("03:00", TimeByAngle.whatTimeIsIt(90));
    }

    @Test
    public void test0600() {
        assertEquals("06:00", TimeByAngle.whatTimeIsIt(180));
    }

    @Test
    public void test0002() {
        assertEquals("12:02", TimeByAngle.whatTimeIsIt(1));
    }

    @Test
    public void test0004() {
        assertEquals("12:04", TimeByAngle.whatTimeIsIt(2));
    }

    @Test
    public void test0006() {
        assertEquals("12:06", TimeByAngle.whatTimeIsIt(3));
    }

    @Test
    public void test0008() {
        assertEquals("12:08", TimeByAngle.whatTimeIsIt(4));
    }

    @Test
    public void test0010() {
        assertEquals("12:10", TimeByAngle.whatTimeIsIt(5));
    }

    @Test
    public void test0012() {
        assertEquals("12:12", TimeByAngle.whatTimeIsIt(6));
    }

    @Test
    public void test0014() {
        assertEquals("12:14", TimeByAngle.whatTimeIsIt(7));
    }
    @Test
    public void test0016() {
        assertEquals("12:16", TimeByAngle.whatTimeIsIt(8));
    }
    @Test
    public void test0018() {
        assertEquals("12:18", TimeByAngle.whatTimeIsIt(9));
    }
    @Test
    public void test0020() {
        assertEquals("12:20", TimeByAngle.whatTimeIsIt(10));
    }

    @Test
    public void test0102() {
        assertEquals("01:02", TimeByAngle.whatTimeIsIt(31));
    }

    @Test
    public void test0104() {
        assertEquals("01:04", TimeByAngle.whatTimeIsIt(32));
    }

    @Test
    public void test0106() {
        assertEquals("01:06", TimeByAngle.whatTimeIsIt(33));
    }

    @Test
    public void test0108() {
        assertEquals("01:08", TimeByAngle.whatTimeIsIt(34));
    }

    @Test
    public void test0110() {
        assertEquals("01:10", TimeByAngle.whatTimeIsIt(35));
    }

    @Test
    public void test0112() {
        assertEquals("01:12", TimeByAngle.whatTimeIsIt(36));
    }

    @Test
    public void test0114() {
        assertEquals("01:14", TimeByAngle.whatTimeIsIt(37));
    }
    @Test
    public void test0116() {
        assertEquals("01:16", TimeByAngle.whatTimeIsIt(38));
    }
    @Test
    public void test0118() {
        assertEquals("01:18", TimeByAngle.whatTimeIsIt(39));
    }
    @Test
    public void test0120() {
        assertEquals("01:20", TimeByAngle.whatTimeIsIt(40));
    }

    @Test
    public void test0117() {
        assertEquals("01:17", TimeByAngle.whatTimeIsIt(38.5));
    }

    @Test
    public void test0220() {
        assertEquals("02:20", TimeByAngle.whatTimeIsIt(70));
    }

}
