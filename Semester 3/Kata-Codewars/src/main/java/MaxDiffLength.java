class MaxDiffLength {

    public static int mxdiflg(String[] a1, String[] a2) {
        //checks if empty
        if (a1.length == 0 || a2.length == 0) {
            return -1;
        }
        //instantiation
        int minX = a1[0].length(), maxX = a1[0].length();
        int minY = a2[0].length(), maxY = a2[0].length();

        for (int i = 1; i < a1.length; i++) {
            if (minX > a1[i].length()) {
                minX = a1[i].length();
            }
            if (maxX < a1[i].length()) {
                maxX = a1[i].length();
            }
        }

        for (int i = 1; i < a2.length; i++) {
            if (minY > a2[i].length()) {
                minY = a2[i].length();
            }
            if (maxY < a2[i].length()) {
                maxY = a2[i].length();
            }
        }

        return Math.abs(minX - maxY) > Math.abs(maxX - minY)
                ? Math.abs(minX - maxY)
                : Math.abs(maxX - minY);

    }
}