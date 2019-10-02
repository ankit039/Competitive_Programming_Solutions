def tic_tac_toe():
    p=["1","2","3","4","5","6","7","8","9"]
    P1=None
    p2=None
    win_combinations=((0,1,2),(3,4,5),(6,7,8),(0,3,6),(1,4,7),(2,5,8),(0,4,8),(2,4,6))
    def pattern():
        print(" "+p[0]+" "+"|"+" "+p[1]+" "+"|"+" "+p[2])
        print(" "+"--"+"--"+"--"+"--"+"--")
        print(" "+p[3]+" "+"|"+" "+p[4]+" "+"|"+" "+p[5])
        print(" "+"--"+"--"+"--"+"--"+"--")
        print(" "+p[6]+" "+"|"+" "+p[7]+" "+"|"+" "+p[8])
        print("\n\n")
    pattern()
    p1=input("Player1:You want to choose 'X'or'O'?")
    if p1=='X' or p1=="x":
        p2='O'
        p1='X'
    else:
        p2='X'
        p1='O'
    print("Player1:You chose %c\n"%p1)
    print("Player2:You chose %c\n"%p2)
    print("Player1:You should start the game\n\n")
    def player_1():
        while(1):
            print("Player1:Place the position of %c\n"%p1)
            pos1=int(input())
            if str(pos1) in p:
                p[pos1-1]=p1
                pattern()
                break
            else:
                print("Player1:You chose a wrong cell\n")
                continue
    def player_2():
        while(1):
            print("Player2:Place the position of %c\n"%p2)
            pos2=int(input())
            if str(pos2) in p:
                p[pos2-1]=p2
                pattern()
                break
            else:
                print("Player1:You chose a wrong cell\n")
                continue
    def game_win():
        c=0
        t=0
        s=0
        while(1):
            player_1()
            c=c+1
            for a in win_combinations:
                if p[a[0]]==p[a[1]]==p[a[2]]=="X":
                    print("player 1:Congratulations You win!\n")
                    t+=1
            if t==1:
                break
            if c==9:
                print("The game is draw\n\n")
                break
            player_2()
            c=c+1
            for a in win_combinations:
                if p[a[0]]==p[a[1]]==p[a[2]]=="O":
                    print("player2:Congratulations You win!\n")
                    s+=1
            if s==1:
                break
            if c==9:
                print("The game is draw\n\n")
                break
        while(1):
            print("You want to play again?Yes or No")
            q=input()
            if q=="Yes" or q=="yes":
                tic_tac_toe()
            else:
                break        
    game_win()
tic_tac_toe()

    
                    
            
    
    
