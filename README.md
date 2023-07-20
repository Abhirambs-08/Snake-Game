# Snake-Game
Snake game is a computer action game, whose goal is to control a snake to move and collect food in a map

The traditional snake game does not offer much challenge to its players. It is impossible to bring out the best playing skill of players unless a challenge is offered to them. The players loose interest in the game after playing it for some time due to lack of challenge. Hence, when people hear about snake game, they quickly form an image of old age arcade game. The absence of powerful graphical resources and weak support for networked application in the programming language is one of the factors that has delayed the development of an interesting and challenging version of snake game.

## Objectives
The objective is to design a snake game, which provides the following functionalities: 
- To provide a stress-busting experience for the player
- To make the Snake game simple and more interesting for the player
- To make the game playable anytime, anywhere and from any device
- The compiler can easily execute the code

## METHODOLOGY
### Flowchart: 
![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/48686be6-9be1-43c9-ac14-69e442a8b17b)

### Algorithm:
- STEP 1: START
- STEP 2: Include all the necessary header files.
- STEP 3: Declare variables i, j, gameover, score, x, y, fruitx, fruity, flag, height=30, width=30.
- STEP 4: Create a function named void Print() to display the first part of the game which includes name of the game and instructions on how to play the snake game. Make use of sleep() function to create a delay between the transition
- STEP 5: Create a function void gotoxy() which assigns the cursor location according to the x and y coordinate mentioned
- STEP 6: Create a function void load() to make loading screen in the mentioned coordinate on the screen
- STEP 7: Create a function void setup() to generate the fruit within the assigned boundary using rand() function.
- STEP 8:Create a function void draw() to develop the boundaries for the assigned height and width values using for loop and print the boundaries .also print score  column to print the score
- STEP 9: Create a function void input() to take keyboard input from the user using kbhit() function. Using switch case navigation of the snake is done according to the user input through keyboard.
- STEP 10: Assign the cases accordingly. W is assigned to move the snake UP. S is assigned to move the snake DOWN. A is assigned to move the snake LEFT. D is assigned to move the snake RIGHT and X is assigned to end the game
- STEP 11: Create a function void logic() to perform all the operations accordingly. Create a delay time for the snake movement and using flag variable increment or decrement the x and y positions using switch case.
- STEP 12: Using if condition check for the game over condition else update the score if the snake consumes the fruit accordingly and regenerate the fruit if it is consumed
- STEP 13: Create a function void main() and call all the functions in order of their execution and put draw() , input() and logic() function in a while loop giving while(!gameover) to run the game continuously until the game ends
- STEP 14: END 

## IMPLEMENTATION & OUTCOME
1)	Display the welcome page of the game
	
   ![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/eecf93b9-ed99-4418-91d8-8b7d0512a417)
   
2)	Display the rules of the game
   ![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/73c4fb09-72a1-416a-b9da-c58600199ece)
  	
3)	Once user presses, any key loading screen is displayed   
   ![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/c7c75461-79b4-4e85-85c6-07e8ddb310cd)
  	
4)	Display the game screen for the user
   
  ![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/2697e157-87fa-4547-82c0-1f4cf1f21531)
  
5)	Display the score once the game is over
   
   ![image](https://github.com/Abhirambs-08/Snake-Game/assets/119886477/db17bcc8-fd3d-4143-9257-ca6516590e83)




