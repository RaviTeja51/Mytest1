from random import randint

print ("Hi,I am your computer")
 
a=input("What's your name \n")
print ("Hi " +a +" ,shall we play a game")

user_choice=input("If your are interested press yes ,if your are not interested press no\n")
user_choice=user_choice.lower()
if user_choice =="yes":
    print ("Good choice,we are gonna have a wonderful time\n")
    print ("Let's play rock, paper or scissors  game\n")
    print ("we will play for two times, at the end whoever has the high score will be the winner,score increases by 1 after each trail \n")
    item=["rock","paper","scissors"]
    com_score=0
    player_score=0
    for i in range(1,3):
      computer_guess=randint(0,2)
      user_guess =input("what is your choice rock, paper or scissor \n")
      user_guess =user_guess.lower()
      
      if item[computer_guess] == user_guess :
        print ("it's tie\n")
      elif item[computer_guess] == "rock" and user_guess =="scissors":
        print ("i got a point\nRock blunts scissor")
        com_score+=1
      elif item[computer_guess] == "scissors" and user_guess =="rock":
        print ("you got a point\n Rock blunts scissor")
        player_score+=1
      elif item[computer_guess] == "paper" and user_guess =="rock":
        print ("i got a point\n Paper covers rock")
        com_score+=1
      elif item[computer_guess] == "rock" and user_guess =="paper":
        print ("you got a point\n Paper covers rock")
        player_score+=1
      elif item[computer_guess] == "scissors" and user_guess =="paper":
        print ("i got a point\n Scissors cut paper")
        com_score+=1
      elif item[computer_guess] == "paper" and user_guess =="scissors":
        print ("you got a point\n Scissors cut paper")
        player_score+=1

    if com_score > player_score :
       print ("Hurray!computer wins over man")
    elif player_score>com_score:
       print ("It's your lucky day,man beats computer")
    else:
       print ("our scores are level")
    
      
     
     
elif user_choice =="no":
    print ("oops,your bad luck your are gonna miss lots of fun")
else:
    print ("don't mess with me")

