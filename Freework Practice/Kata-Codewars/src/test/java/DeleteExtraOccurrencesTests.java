import static org.junit.Assert.assertArrayEquals;

        import org.junit.Test;

/**
 * @author Marko Bekhta
 */
public class DeleteExtraOccurrencesTests {
    @Test
    public void deleteNth() throws Exception {
        assertArrayEquals(
                new int[] { 9, 5, 20, 3, 15, 17, 21, 12, 7, 2, 13, 4, 11, 1, 0 },
                DeleteExtraOccurrences.deleteNth( new int[] { 9, 5, 20, 3, 15, 17, 20, 21, 12, 7, 12, 17, 2, 13, 4, 15, 11, 15, 1, 4, 12, 9, 21, 0}, 1 )
        );
        assertArrayEquals(
                new int[] { 1, 1, 1, 1, 1 },
                DeleteExtraOccurrences.deleteNth( new int[] { 1, 1, 1, 1, 1 }, 5 )
        );
        assertArrayEquals(
                new int[] { 1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5 },
                DeleteExtraOccurrences.deleteNth( new int[] { 1, 2, 3, 1, 1, 2, 1, 2, 3, 3, 2, 4, 5, 3, 1 }, 3 )
        );
        assertArrayEquals(
                new int[] { 1, 1, 3, 3, 7, 2, 2, 2 },
                DeleteExtraOccurrences.deleteNth( new int[] { 1, 1, 3, 3, 7, 2, 2, 2, 2 }, 3 )

        );
        assertArrayEquals(
                new int[] { 2, 2, 2 },
                DeleteExtraOccurrences.deleteNth( new int[] { 2, 2, 2, 2 }, 3 )

        );
        assertArrayEquals(
                new int[] { 20, 37, 21 },
                DeleteExtraOccurrences.deleteNth( new int[] { 20, 37, 20, 21 }, 1 )
        );
        assertArrayEquals(
                new int[] { },
                DeleteExtraOccurrences.deleteNth( new int[] { }, 5 )
        );

    }

}