class Solution 
{
public:
    int minimumOneBitOperations(int n) 
    {
        // Step 1: Handle base case
        if (n == 0)
        {
            return 0;
        } 

        // Step 2: Find most significant bit (MSB)
        int msb = 31 - __builtin_clz(n);

        // Step 3: Compute mask and Gray range
        int mask = 1 << msb;                 // mask = 2^msb
        int range = (1 << (msb + 1)) - 1;    // range = (2^(msb+1)) - 1

        // Step 4: Flip the MSB
        int next = n ^ mask;                 // remove MSB from n

        // Step 5: Recurse for the remaining part
        int resNext = minimumOneBitOperations(next);

        // Step 6: Apply Gray code inversion formula
        return range - resNext;

        // Step 7: Return result (handled by recursion)
    }
};