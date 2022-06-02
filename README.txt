                                                                             PROJECT REPORT 



~INTRODUCTION:-

 Our a project regarding integrating different types of basic games using the cpp language and creating a menu based user friendly environment for entertainment.
 These are the games that we have implemented in our source code:-
  1.Tic Tac Toe
  2.Avengers Secret Wars
  3.Snake Water Gun
  4.Truth and Dare
  5.Guess the number
  6.KBC
 (taking into consideration that we can add more games to our code just by integrating their source code with the main code without any prodigous changes)
 The sole concept of working on a project mentioned to create a menu based user input driven program which can be used for entertainment purposes

 our project uses the following programming concepts
 1.OOP(OBJECT ORIENTED PROGRAMMING)
 2.CPP Language
 3.File handling(for keepping track record of a players activity)
 4.Basic knowledge of problem solving

 For the user who wants to user our project does not requires any prerequisite knowledge a person with almost no coding background can go for it and enjoy gaming
 (For black box testing- A person knowing the above mentioned concepts can easily understand our code in background)

______________________________________________________________________________________________________________________________________________________________________________________


~DESCRIPTION OF THE GAMES:-

1.SNAKE WATER GUN:
 Snake water gun is a classic game which is a single player stuff the user can select their choice among snake water and gun after the selection of the user the computer will also select from the same
 the code is so designed that the choice of the computer will be random each time without any biasing.
 The source code of the game consist of simple cpp language and addtional package <time.h> for generation of random numbers.

 The following flow of control will be used to for making the decision of the winner

                                                                        SNAKE----->WATER
								        WATER----->GUN
								        GUN------->SNAKE
																		
 The following source code has been equipped with user freindly interface so the players can enjoy the game without any difficulty.
 Our code is also designed to keep track of the players who had tried the game before these stats include
 1.No of visits
 2.No of wins
 3.Win Percentage

 Following data were managed by classical file handling and OOPs used in cpp.
 
 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

2.AVENGERS SECRET WARS:-

 Avengers Secret Wars is a basic PVP game which comprises of two players making a team of 3 characters each and pitting it against each other
 in a battle. Each player is given 10 elixir to buy those characters, the costlier the character, the stronger it is.
 The game features a type matchup battle system, the three types being Attack "A", Blast "B" and Speed "S". A<B<S<A (lost the oppurtunity to
 implement cyclic graphs). The team with the last surviving member is declared to be victorious.

 The wins and win percentage of each player is thus recorded, adding a subtle element of engagement to the game. Several ASCII art specimens
 are being employed in order to enhance the visual aspect of the game while not effacing away the charm of text based games.

 Concepts involved:
 1.Basic C++ problem solving
 2.OOPS
 3.File Handling
 4.Series Interpolation and layered rng

 Features of the project:
 1.Extensible list of characters to choose from
 2.Immersive art
 3.Realistic stats
 4.File recording

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

3.GUESS THE NUMBER GAME:-
 Guess the number game is a classic single player game where the player has to guess a number within the given range. After each guess the computer will give direction to the player whether the GUESSED number is larger or smaller to the number which is to be guessed. The number , which is to be guessed will be generated randomly each time the game will be played without any biasing.
 The source code of the game contains a simple C++ language and additional two libraries <stdlib.h> and <time.h> in order to generate random numbers. 
 The source is kept so simple that it can be easily understand by any programmer having basic knowledge of C++ programs and the code is so user –friendly that a player can enjoy and have the best experience of game without having any previous knowledge of the Game or the Code. Our code is designed in such a way that it also keeps the record of player who have played the game before. The data which is stored is :-
 1.Number of times Played
 2.Number of wins the player have

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

4.Truth and Dare:-

 Truth and dare is a fun game. Through this game, we have made a miniscule effort to connect the online community and provide them
 a simple source of enjoyment.

 Any number of players can play this game. The game has been designed in such a way that a random person would be chosen in each 
 round.

 There will be two options for the chosen player: truth and dare, upon chosing truth, the player would have to answer the given
 question and if he chooses dare, he'll have to do the task given on the screen.
 After the turn is over, he will have the option to either continue or stop the game.

 In this program, the basics of C++ language have been utilised. For example: loop, functions, if-else statements, STL, etc.

 <time.h> header file is used to generate random players.

 All the instructions have been given to play the game so that the user does not face any problems.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

5.Tic Tac Toe:-

 This is a game played among two players. Separate symbols have been alloted to both the players. Flow of the game is
 turn based. 

 If the boxes of any player matches in the following ways, that player will be the winner.

 For player o


    |     |                         |     |                             |     |    
  O |  O  | O                     O |     |                           O |     |   
 ___|_____|___                   ___|_____|___                       ___|_____|___
    |     |                         |     |                             |     |   
    |     |                       O |     |                             |  O  |    
 ___|_____|___                   ___|_____|___                       ___|_____|___
    |     |                         |     |                             |     |   
    |     |                       O |     |                             |     | O
    |     |                         |     |                             |     |   


 In this game, we have used basics of C++ language such as functions, if-else, switch case, etc.
 The players should not face any problem while playing the game as all the instructions are clearly mentioned.

 In the source code of the game, system("cls") is used to clear the screen/terminal.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

6.KBC:-
 As the name of the suggests its a quiz game with 10 random questions from our question bank the player's score will be evaluated on the basis of the number of correct answers given in the quiz.
 As refering to the data structure used for storing the question we have used one of the most effecient one which is vector the vector manipulation is carried out by <vector> module
 As mentioned each time a new player will play he will not only face a different set of questions but also different order of options will make the game more interesting
 The game is truly based on the well checked facts which are obtained by trustworthy resources on internet so no point of ambiguity can occur
 <time.h> module have been used in the game for the generation of the random numbers.


_______________________________________________________________________________________________________________________________________________________________________________________


~SCOPE OF IMPROVEMENT:-

 1.Our project is desinged in a special way that we can include new games anything we want just by adding there code in form of header files.

 2.UI can be better or we can user graphical user interface to present the games this will probably a domain on which we will work further.

 There are always scope of improvement in any project so we do welcome all the suggestions from the users :)


______________________________________________________________________________________________________________________________________________________________________________________


~CREDITS AND REFERENCES:-

CREDITS:-

Team Lead:-
 -->Raj Chaudhary (INFORMATION TECHNOLOGY I YEAR)

The Team Members:-
 -->Vansh Kunwar Ji (INFORMATION TECHNOLOGY I YEAR)
 -->Shiwani Tiwari (INFORMATION TECHNOLOGY I YEAR)
 -->Piyush Kumar (INFORMATION TECHNOLOGY I YEAR)

REFERENCES:-
 The code in the project is purely written from the scratch.
 Still we have refered to the following resources~
 1.Internet
 2.Introduction to CPP (by Sumita Arora)
 Only for research purpose.
 
 
_______________________________________________________________________________________________________________________________________________________________________


~CONCUSION:-
 "Gamee" is a quintessential assortment of six simple text based games, employing the usage of C++ language.
 The modest project christened as the "Gamee" is a collective endeavour of a team of four first year undergraduates,
 brandishing no prior project and humble grounding in the domain of computer science.

 Conceding the fact that none of the participants is an aficianado, this program is best to be percieved as the maiden 
 attempt of the team and henceforth is a subject to highly unconventional coding practices. Constructive criticism is 
 highly welcomed.

 The team hopes that our efforts would live up to the prospects of the clientelle and whomsover is concerned and hereby
 presents its unostentatious creation, devised de capo.
