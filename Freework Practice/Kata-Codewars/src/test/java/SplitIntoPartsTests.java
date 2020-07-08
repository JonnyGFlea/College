import static org.junit.Assert.*;
import org.junit.Test;


public class SplitIntoPartsTests {

    private static void testing(String actual, String expected) {
        assertEquals(expected, actual);
    }

    @Test
    public void test() {
        System.out.println("Fixed Tests splitInParts");
        String ans = SplitIntoParts.splitInParts("supercalifragilisticexpialidocious", 3);
        String sol = "sup erc ali fra gil ist ice xpi ali doc iou s";
        testing(ans, sol);
        ans = SplitIntoParts.splitInParts("HelloKata", 3);
        sol = "Hel loK ata";
        testing(ans, sol);
        ans = SplitIntoParts.splitInParts("HelloKata", 1);
        sol = "H e l l o K a t a";
        testing(ans, sol);
        ans = SplitIntoParts.splitInParts("HelloKata", 9);
        sol = "HelloKata";
        testing(ans, sol);
    }
}
