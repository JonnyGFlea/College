public class SquareRootCheck {
    public static boolean isSquare(int n) {
        if(Math.sqrt(n) == (int)Math.sqrt(n)) {
            return true;
        }
        return false;
    }
}