str = '3q$z+5fA'
message = ''
for i in xrange(len(str)):
    if i % 2 == 0:
        message = message + chr(ord(str[i])+5)
    else:
        message = message + chr(ord(str[i])-5)
print message