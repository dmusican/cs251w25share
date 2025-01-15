import java.util.Arrays;
public class Thing {
    public static void main(String[] args) {
        String[] words = {"a", "horse", "is",
                          "happiest", "now"};
        System.out.println(Arrays.toString(words));
        Arrays.sort(words);
        System.out.println(Arrays.toString(words));
        // Sort by length
        // Second parameter is a function of
        // TWO parameters, which are two
        // different words in list, and we should
        // return a postive value if the first
        // word is greater, 0 if same, negative
        // if second is greater
        Arrays.sort(words,
                    (a, b) -> a.length() - b.length());

        System.out.println(Arrays.toString(words));
    }
}
