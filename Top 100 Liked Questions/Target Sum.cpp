class Solution
{
public:

  int mem[21][2001];
  int helper (int i, vector < int >&nums, int target, int n)
  {
    if (i == nums.size ())
      {
	if (n == target)
	  {
	    return 1;

	  }
	else
	    return 0;
      }
    if (mem[i][n + 1000] != -1)
      return mem[i][n + 1000];

    int num1 = n - nums[i];
    int num2 = n + nums[i];
    int count = 0;
    count += helper (i + 1, nums, target, num1);
    count += helper (i + 1, nums, target, num2);
    return mem[i][n + 1000] = count;
  }
  // return 0;


  int findTargetSumWays (vector < int >&nums, int target)
  {
    memset (mem, -1, sizeof (mem));
    //   int num=0;

    return helper (0, nums, target, 0);

  }
};
