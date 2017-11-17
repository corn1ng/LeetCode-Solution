class Solution {
    public int[] twoSum(int[] nums, int target) {
       HashMap<Integer, Integer> hs = new HashMap<Integer, Integer>();
        int len = nums.length;
        for(int i = 0; i < len; i++){
            if(hs.containsKey(nums[i])){
                int left = hs.get(nums[i]);
                return new int[]{left, i};
            }else{
                hs.put(target - nums[i], i);
            }
        }
        return new int[2];
}
}
