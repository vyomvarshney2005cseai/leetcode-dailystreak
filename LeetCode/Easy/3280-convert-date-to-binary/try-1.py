/*
 * Problem #3280: Convert Date to Binary
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 7/9/2026, 10:15:53 AM
 * Link: https://leetcode.com/problems/convert-date-to-binary/
 */

class Solution:
    def convertDateToBinary(self, date: str) -> str:
        y=int(date[:4])
        m=int(date[5:7])
        d=int(date[-2:])
        yb=""
        while y!=0:
            yb+=str(y%2)
            y//=2
        mb=""
        db=""
        while m!=0:
            mb+=str(m%2)
            m//=2
        while d!=0:
            db+=str(d%2)
            d//=2
        ans=yb[::-1]+"-"+mb[::-1]+"-"+db[::-1]
        return ans

        


        
        
