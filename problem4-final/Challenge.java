import java.util.Arrays;

public class Challenge {
    
    public static int[] parseClueArray(String clue) {
        try {
            int startIndex = clue.indexOf('[');
            int endIndex = clue.indexOf(']');
            
            if (startIndex == -1 || endIndex == -1) {  
                return new int[0];
            }
            
            String arrayStr = clue.substring(startIndex + 1, endIndex);
            String[] parts = arrayStr.split(",");
            
            int[] result = new int[parts.length];
            for (int i = 0; i < parts.length; i++) {
                result[i] = Integer.parseInt(parts[i].trim());
            }
            
            return result;
        } catch (Exception e) {
            return new int[0];
        }
    }
    
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {  // descending order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    
    public static void displayFinalSolution() {
        System.out.println("FINAL SOLUTION: The team successfully solved all 4 problems!");
        System.out.println("Team completed: C → C++ → Python → Java relay!");
        System.out.println("Congratulations 🎉! You navigated the repo, decoded the nonsense, and came out version-controlled. Respect.");
    }
    
    public static void main(String[] args) {
        String previousClue = "JAVA_SORT_[0,1,1,2,3,5,8,13]";
        
        int[] extractedArray = parseClueArray(previousClue);
        bubbleSort(extractedArray);
        displayFinalSolution();
    }
}

/*
SOLUTION - PASTE YOUR FINAL SOLUTION HERE:
Member Name: Aayush Joshi
Final Solution Message: FINAL SOLUTION: The team successfully solved all 4 problems!
Team completed: C → C++ → Python → Java relay!
Congratulations 🎉! You navigated the repo, decoded the nonsense, and came out version-controlled. Respect.
*/