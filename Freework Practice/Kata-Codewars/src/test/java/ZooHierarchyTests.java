import org.junit.Test;
import static org.junit.Assert.assertArrayEquals;

public class ZooHierarchyTests {
    @Test
    public void example() {
        final String input = "fox,bug,chicken,grass,sheep";
        final String[] expected = 	{
                "fox,bug,chicken,grass,sheep",
                "chicken eats bug",
                "fox eats chicken",
                "sheep eats grass",
                "fox eats sheep",
                "fox"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void random() {
        final String input = "Jonathan, bear, rat";
        final String[] expected = 	{
                "Jonathan, bear, rat",
                "Jonathan, bear, rat"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void singleList() {
        final String input = "bear";
        final String[] expected = 	{
                "bear",
                "bear"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void doubleList() {
        final String input = "bear,cat";
        final String[] expected = 	{
                "bear,cat",
                "bear,cat"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void noLeaves() {
        final String input = "giraffe,bear,bug,panda";
        final String[] expected = 	{
                "giraffe,bear,bug,panda",
                "bear eats bug",
                "giraffe,bear,panda"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void lotsaLeaves() {
        final String input = "giraffe,leaves,leaves,leaves,bear,bug,leaves,leaves,panda";
        final String[] expected = 	{
                "giraffe,leaves,leaves,leaves,bear,bug,leaves,leaves,panda",
                "giraffe eats leaves",
                "giraffe eats leaves",
                "giraffe eats leaves",
                "bear eats bug",
                "bear eats leaves",
                "bear eats leaves",
                "giraffe,bear,panda"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void longone() {
        final String input = "bear,little-fish,little-fish,little-fish,little-fish,big-fish,big-fish,big-fish";
        final String[] expected = 	{
                "bear,little-fish,little-fish,little-fish,little-fish,big-fish,big-fish,big-fish",
                "big-fish eats little-fish",
                "big-fish eats little-fish",
                "big-fish eats little-fish",
                "big-fish eats little-fish",
                "bear eats big-fish",
                "bear eats big-fish",
                "bear eats big-fish",
                "bear"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }

    @Test
    public void random2() {
        final String input = "bicycle,fox,panda,sheep,busker,sheep,cow";
        final String[] expected = 	{
                "bicycle,fox,panda,sheep,busker,sheep,cow",
                "bicycle,fox,panda,sheep,busker,sheep,cow"};
        assertArrayEquals(expected, ZooHierarchy.whoEatsWho(input));
    }
}