class RowSumOddNumbers {
    public static int rowSumOddNumbers(int n) {
        if (n == 1) {
            return 1;
        }
        int starting = (n * (n - 1)) + 1, sum = starting;
        for (int i = 1; i < n; i++) {
            sum += (starting + 2);
            starting += 2;
        }
        return sum;
    }
}