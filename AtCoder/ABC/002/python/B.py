import re

string = input()

strng = re.split('[a,i,u,e,o]+', string)

ans = ''
print(ans.join(strng))

