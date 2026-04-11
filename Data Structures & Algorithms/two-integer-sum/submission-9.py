class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        p = []
        #Method 1:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    p.append(i)
                    p.append(j)
                    break

        return p
                    
        