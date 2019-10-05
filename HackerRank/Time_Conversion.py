

import os
import sys



def timeConversion(s):
    x= slice(8,10)
    ses = s[x]
    hr = s[0:2]
    re = s[0:8]
    mo = "00"

    if ses=="PM":
        if hr=="12":
            return re
        else:
            nwhr = str(int(hr)+12)
            return (nwhr+s[2:8])
    elif hr=="12" and ses=="AM":
        return mo+s[2:8]
    else:
        return re
     
    

s = input()

result = timeConversion(s)

print(result + '\n')

    
