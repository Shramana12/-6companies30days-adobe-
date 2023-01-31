class Solution {
    public int magicalString(int n) {
        if (n <= 3)
            return 1;
        int[] arr = new int[n];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 2;

        int countIndex = 2;
        int endIndex = 3;
        int currNum = 1;
        int res = 1;

        while (endIndex < n) {
            int currCount = arr[countIndex++];
            int i = 0;

            while (i < currCount && endIndex < n) {
                arr[endIndex] = currNum;
                endIndex++;
                i++;

                if (currNum == 1)
                    res++;
            }
            currNum = currNum == 1 ? 2 : 1;
        }
        return res;

    }
}
