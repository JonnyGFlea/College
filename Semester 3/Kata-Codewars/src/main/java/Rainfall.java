import java.util.stream.*;

public class Rainfall {
    public static double mean(String town, String strng) {
        if (strng.contains(town + ":") == false) {
            return -1.0;
        }
        return (DoubleStream.of(makeArr(town, strng)).sum()) / 12.0;
    }

    public static double variance(String town, String strng) {
        if (strng.contains(town + ":") == false) {
            return -1.0;
        }
        double[] doubValArr = makeArr(town, strng), dataPoints = new double[12];
        double mean = (DoubleStream.of(doubValArr).sum()) / 12.0;
        for (int i = 0; i < 12; i++) {
            dataPoints[i] = doubValArr[i] - mean;
            dataPoints[i] = dataPoints[i] * dataPoints[i];
        }
        return (DoubleStream.of(dataPoints).sum()) / 12.0;
    }

    public static double[] makeArr(String town, String strng) {
        double[] doubleArr = new double[12];
        int i = 0;
        strng = strng.substring(strng.indexOf(town));
        if (strng.contains("\n")) {
            strng = strng.substring(0, strng.indexOf("\n"));
        }
        while (i != 11) {
            doubleArr[i] = Double.parseDouble(strng.substring(strng.indexOf(" ") + 1, strng.indexOf(",")));
            strng = strng.substring(strng.indexOf(",") + 1);
            i++;
        }
        doubleArr[i++] = Double.parseDouble(strng.substring(4));
        return doubleArr;
    }
}