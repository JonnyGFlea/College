import org.junit.Test;
import static org.junit.Assert.assertEquals;
import org.junit.runners.JUnit4;

class SplitCamelCaseTest {
    @Test
    public void tests() {
        assertEquals( "Incorrect", "camel Casing", SplitCamelCase.camelCase("camelCasing"));
        assertEquals( "Incorrect", "camel Casing Test", SplitCamelCase.camelCase("camelCasingTest"));
        assertEquals( "Incorrect", "camelcasingtest", SplitCamelCase.camelCase("camelcasingtest"));
    }
}