import random
a=[]
d=[]
p=0
name = raw_input("What is your name? ") 
print "Good Luck ! ", name 
words = ['hacker', 'computer', 'science', 'programming',  
         'python', 'mathematics', 'software', 'designing',  
         'happylife', 'intelligence', 'robots', 'human']  
word = random.choice(words)
turns=len(word)
for i in range(len(word)):
    a.append("*")
print "word is of {} letters".format(turns)
print "*"*len(word)
while(turns>0):
    print "You have {} attempts left".format(turns)
    print "Enter the charecter(Lower case) "
    c=raw_input()
    if c not in d: 
        d.append(c)
        if c in word:
            for i in range(len(word)):
                if c==word[i]:
                    a[i]=c
            p+=0
        else:
            turns-=1
    print ''.join(a)
    if "*" not in a:
        break
    if p==len(word):
        break
if turns==0:
    print name,"Hard luck!!You lost"
else:
    print name,"ALAS!!You won"
   
    
    
        
