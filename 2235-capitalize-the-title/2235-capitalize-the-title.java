class Solution {
    public String capitalizeTitle(String title) {
        String[] words = title.split(" ");
        StringBuilder ans = new StringBuilder();

        for(String word : words){
            if(word.length() < 3){
                ans.append(word.substring(0).toLowerCase())
                  .append(" ");
                  continue;
            }
            ans.append(Character.toUpperCase(word.charAt(0)))
                  .append(word.substring(1).toLowerCase())
                  .append(" ");
        }

        return ans.toString().trim();
    }
}