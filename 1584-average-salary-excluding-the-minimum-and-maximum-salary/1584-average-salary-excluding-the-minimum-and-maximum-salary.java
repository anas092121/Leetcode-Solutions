class Solution {
    public double average(int[] salary) {
        double mini = salary[0];
        double maxi = salary[0];
        double sum = 0;

        for(double sal : salary){
            sum += sal;
            mini = Math.min(sal, mini);
            maxi = Math.max(sal, maxi);
        }

        sum = sum - (mini+maxi);

        return sum/(salary.length - 2);
    }
}