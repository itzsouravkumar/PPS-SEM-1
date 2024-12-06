s = input("Enter a string: ")
vowels = "aeiouAEIOU"
for vowel in vowels:
    s = s.replace(vowel, '*')
print("Modified String:", s)
