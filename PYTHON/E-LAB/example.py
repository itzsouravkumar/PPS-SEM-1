# to check how many timea a letter is repeated in a string without count() function

s=str(input())
a=str(input())
count=0
for i in s:
    if i==a:
        count+=1
print(count)
