### Approach 2: Keep a count of '#' and do a backward string comparison

```
for each string s and t:
	count = 0
	start backward iteration:
		if `str[i]` equal to '#', then
			count++
		else
			if count > 0, then count--
			else if count == 0, then `newStr.push_back(str[i])`

// Compare the new strings generated from above
if newStr1 = newStr2, then true
else false
```
			

