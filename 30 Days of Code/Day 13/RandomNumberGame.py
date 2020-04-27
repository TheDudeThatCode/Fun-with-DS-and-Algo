from random import randint
import sys

start = int(sys.argv[1])
end = int(sys.argv[2])

answer = randint(start, end)

while True:
    try:
        print(answer)
        guess = int(
            input(f'Guess a No. between {start} ~ {end}: '))
        if start < guess < end:
            if guess == answer:
                print('Genius!!!')
                break
        else:
            print(f'Hey! please enter a number between {start} ~ {end}')

    except ValueError:
        print('please enter a number')
        continue
        
        
        '''
        
        #---------------------------------------------------NOTES---------------------------------------------------#
        
        1) TO RUN THIS FILE IN COMMAND PROMPT WE HAVE USED SYS MODULE
        2) IN CMD, GO TO THIS FILE'S DIRECTORY (USING cd)
        3) TYPE:-
             python RandomNumberGame.py 1 10
        4) THEN ENTER ACCORDING TO THE PROGRAM     
        
        '''
