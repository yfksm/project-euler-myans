#If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
#
#If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
#
#
#NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

s = ''

base = {
    0: "",
    1: "one",
    2: "two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine",
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "fifteen",
    16: "sixteen",
    17: "seventeen",
    18: "eighteen",
    19: "nineteen",
    20: "twenty",
    30: "thirty",
    40: "forty",
    50: "fifty",
    60: "sixty",
    70: "seventy",
    80: "eighty",
    90: "ninety",
    1000: "onethousand"
}


ans = 0

# calc
for i in range(1, 1001):
    if i in base:
        ans += len(base[i])
        continue

    s = ""
    hundred_digit = i//100%10
    rest_digit = i%100

    if hundred_digit != 0:
        s += base[hundred_digit]+"hundred"
        if rest_digit != 0:
            s += "and"

    if rest_digit in base:
        s += base[rest_digit]
    else:
        s += base[rest_digit//10*10]+base[rest_digit%10]
    
    ans += len(s)

print(ans)
