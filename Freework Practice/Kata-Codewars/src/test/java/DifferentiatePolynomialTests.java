import org.junit.Test;
import static org.junit.Assert.assertEquals;
import org.junit.runners.JUnit4;
import java.math.BigInteger;

// TODO: Replace examples and use TDD development by writing your own tests

public class DifferentiatePolynomialTests {
    @Test
    public void sampleTests() {
        assertEquals(new BigInteger("5"), DifferentiatePolynomial.differentiate("x^2-x", 3));
        assertEquals(new BigInteger("-20"), DifferentiatePolynomial.differentiate("-5x^2+10x+4", 3));
        assertEquals(new BigInteger("12"), DifferentiatePolynomial.differentiate("12x+2", 3));
        assertEquals(new BigInteger("1"), DifferentiatePolynomial.differentiate("-x^2+3x-3", 1));
        assertEquals(new BigInteger("-9596923211223673338324"), DifferentiatePolynomial.differentiate("-49x^6+39x^5-53x^4-28x^3-x^2+32x-50", 7994));
        assertEquals(new BigInteger("10169373002395"), DifferentiatePolynomial.differentiate("12x^4+69x^3+59x^2-85x-63", 5960));
    }
}