public class Money {
    public static int calculateYears(double principal, double interest, double tax, double desired) {
        // your code
        int years = 0;
        double interestOnPrincipal = 0;
        double taxedInterestOnPrincipal = 0;
        while (principal < desired) {
            interestOnPrincipal = principal * interest;
            taxedInterestOnPrincipal = interestOnPrincipal - interestOnPrincipal * tax;
            principal += taxedInterestOnPrincipal;
            years++;
        }
        return years;
    }
}