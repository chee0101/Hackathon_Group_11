#  Hackathon 2.0 Group 11
## Group Members
> Ching Ke Chee (164638) <br>
> Chin Yu Yuan (164417) <br>
> Ng Qiu Jun (164638) 

---

# 1.0 Description of The Game 
  
  ## 1.1 Game Title 
  ```
  Who is the Murderer?
  ```

## 1.2 Introduction of the Game
**"Who is the Murderer?"** is a unique text-based role-playing game that puts players in the role of a skilled and experienced detective. This game offers a captivating and immersive narrative experience, where the players can unleash their inner detective and unravel a web of secrets.

An incident happens in a cottage, where a group of friends, Alex, Sarah, Mark, Lily and Emily are having their vacation there. Emily is found dead and the murderer is believed to be the one in that group of friends. 
Players as a detective, need to gather information and collect clues to find out the murderer successfully between the suspects.

Players will first watch the story background to understand the story, then move on to the interview session which will interrogate the suspects.
Through dialogue interactions with characters, players can observe and analyse the hidden connections and motives between the suspects, affecting their choices to find the real murderer.
Players will also navigate the different places in the cottage, gather the clues and finally uncover the truth behind a haunting incident.

## 1.3 Main Parts of the Game
Overall, there are four main parts to our games which are:
- Story Background Display
  - The game begins by providing players with a detailed and immersive story background. This sets the stage for the investigation and creates a captivating atmosphere.
- Interview Session between the Player and the Suspects
  - Players will engage in dialogue with the suspects, including Alex, Sarah, Mark, and Lily. Through questioning and careful observation, they will uncover important information, motives, and potential alibis. Each suspect's responses will reveal clues and shed light on their possible involvement in the crime.
- Clue Searching
  - Players will explore various locations, such as the vacation house, rooms, garden, and other areas, to search for hidden clues in limited searching chances. Players need to examine objects, documents, and other relevant items to gather evidence. The clues discovered will help players uncover the truth behind the incident.
- Guessing Murderer
  - Based on the gathered information and clues, players will analyze the evidence and guess who the real murderer is. Players will make careful deductions, considering each suspect's motives, actions, and alibis. The final challenge is to correctly identify the murderer and unveil the truth.

---

# 2.0 Features of the Game

## 2.1 Engaging Text-Based Gameplay
Players can immerse themselves in a captivating narrative-driven experience where the story unfolds through text-based interactions such as interviewing the suspects and navigating the places in the cottage.

## 2.2 Interactive Dialogue:
Players can engage in conversations with the suspects during the interview session, observe their behaviours, listen to their stories, and scrutinize their alibis to uncover the truth.

## 2.3 Interactive Investigations
Players can explore the designed places in the cottage, searching for hidden clues and objects that may hold critical information.

## 2.4 Thought-Provoking Gameplay
Players can sharpen their detective skills by analysing evidence, interrogating suspects, and connecting or relating the information. Attention to detail, critical thinking, and logical reasoning will solve the murder mystery.   

## 2.5 Immersive Storytelling
Players can enjoy a compelling and well-crafted storyline that keeps them engaged from start to finish, and discover the truth behind the murder through immersive storytelling.

## 2.6 Saving Capability
Players can choose to save their current state of the game and allow the player to resume their progress from that point at a later time after quitting the game, by choosing **Resume Previous Game** at the main menu of the game.

---

# 3.0 How to Play the Game

There will be some instructions given when playing, players can follow the instructions as the aids during gameplay.

## 3.1 Set Up of the Game
Players can launch the game using a suitable or preferred Integrated Development Environment(IDE) such as Dev C++, Visual Studio Code and many more.

**Note**: For players who use G++ to compile the code, it is recommended to compile and execute it using the command below.
```
g++ -std=c++11 ClueBagList.cpp ClueList.cpp Clue.cpp InterviewList.cpp Interview.cpp Game.cpp Main.cpp -o program
./program
```

## 3.2 Start the Game
After compiling, players will be presented with the game's logo, introduction and main menu. Players can choose either to start the new game or start with the previous game.
```
Maximize the window for a better game experience
```


## 3.3 Familiarize with the Story
Read the background of the story and understand the context of the crime. Starting from here, players will immerse themselves as a detective to discover the murderer. However, players can press 'Enter' to continue displaying the story background and choose to skip this section by pressing 'Q'.

## 3.4 Engage in Interviews
Enter the interview sessions with the suspects, including Alex, Sarah, Mark and Lily. Players can choose to interview which suspect and the question. The dialogue will be displayed, players need to observe and carefully analyze their statements to figure out their relationship with each other Take note if necessary. Players can stop asking the person or end the interview session by entering '9' and pressing `Enter`.

## 3.5 Find the Clue
Players will navigate the cottage to observe the crime scene, Emily's room and other listed places, and search and gather the clues and evidence. There will be a list of rooms for players to choose which room to explore first. Each room will have a different number of places that contain clues and additional places without clues to confuse the players. Players need to find the clues within a limited number of chances for searching. When find out a clue, players can choose to stop searching or continue. Once they find out the clue, the found clue will be stored in a clue bag.

```
Note: If players use up all chances to search the particular room, players cannot
enter the room again even if they are unable to find all clues successfully. 
```

## 3.6 Make an Accusation
Players can proceed to accuse the murderer after searching the clues when they are confident in their choice or they are out of searching chances. Players make an informed decision about who the murderer is based on their investigation and analysis. 

```
Note: The players can choose to display the story background or interview dialogue,
searching clues again if available and checking the clue bag if needed.
```

## 3.7 Important Note
- Some sections will have some delays as an indicator of loading such as entering the room.
- Most of the stop motions required players to press `Enter` to continue.

---

# 4.0 Application of Object-Oriented Concepts Used to Develop the Game

## 4.1 Composition
Composition is used to allow objects to be composed of other objects, and they interact with each other to achieve the desired functionality of the larger object.

In our game, we have a `Game` class and the `Game` class is composed of smaller objects such as `Clue` object, `ClueList` object, and `Interview` object, each object contributes to the overall behaviour and functionality of the game.

Looking at the `Interview` class demonstrates the composition through its relationship with the `InterviewList` class. This enables the `Interview` class to utilize the capabilities provided by `InterviewList` class. It can call methods and access data members of the InterviewList class to perform operations related to managing and displaying interview data

## 4.2 Encapsulation
The private member cannot be accessed outside of the class and can be viewed by public functions that are retrieved by using the class's object. 

One  example is the `ClueBagList` class, it encapsulates the related data and operation within itself. The private member variables are used to encapsulate the internal state of the class. The member functions such as `getNumbering`, `getFoundClueRoom`, `getFoundClue`, and `getFoundClueInfo` provide the interface for interacting within the class's data and functionality. 

## 4.3 Abstraction
One way that applies abstraction in this game is by creating a class that encapsulates the game's logic and interactions. It decides which data members will be visible to the external code 

For example, a `ClueList` class is created and provides an abstraction by exposing only the necessary public methods such as `appendNode()` and `searchAndDisplayNode()` to interact with the game. These methods' implementation details and inner workings are hidden from the external code.

---

# 5.0 Role of Linked List

In this game, there are three linked lists used, including, `InterviewList.h`, `CLueList.h` and `ClueBagList.h`. The main type of linked list that has been used is dynamic linked list. These linked lists are used to store and manage information, and also some play an important role in saving the status of the game.

## 5.1 Interview.h  
The role of the dynamic linked list in the `InterviewList.h` is to manage and organize a collection of interview dialogues. The main function used in the linked list is `appendNode` and `searchAndDisplayNode`.
`appendNode` is used to add a node at the end of the linked list. The `InterviewNode` contain information such as the label of the suspect, the question number and the dialogue for the particular question.
`searchAndDisplayNode` is used to search the particular node based on a given label and question number and then display the dialogue.

## 5.2 ClueList.h
The role of the dynamic linked list in the `ClueList.h`  is to manage and organize a collection of all clues that exist in the game. Each clue is stored as a node in the linked list. This allows efficient storage of clue details, including the location, spot of the location, clue number, clue content and its additional information.
`appendNode`  and `searchAndDisplayNode` are more or less similar to the corresponding function in `Interview.h`
`getFoundClueRoom`, `getFoundClue`, `getFoundClueInfo` takes the same parameter: location of the room and spot of a particular room to get the location, clue number, and information of clue in order traverse the list and return corresponding values to be displayed in the game. 

## 5.3 ClueBagList.h
In the `ClueBagList.h` file, the role of the linked list is to implement a dynamic data structure for storing and managing a list of clues found by the player. Each node represents a clue and contains information such as the clue numbering, the room where the clue was found, the clue itself, and additional information about the clue.
`getNumbering`, `getFoundClueRoom`, `getFoundClue`, and `getFoundClueInfo` play important roles in returning these values to be displayed in the game when the players want to see it and written into `Progress.txt` text file so that the progress of the game can be saved when the players wish to quit and save the game.

## 5.4 Summary

- The `InterviewList` class represents a linked list of `InterviewNode` nodes that will be displayed during the interview session of the game.

- The `ClueList` class represents a linked list that manages all existing clues in the game and stores in `ClueNode` nodes that will be displayed in the searching clue session of the game.

- The `ClueBagList` class represents a linked list of `ClueBag` nodes that will store the players’ found clues and can be displayed as a clue bag to show to the players and used in saving the progress of the game.

---

# 6.0 Screenshots of the Game

## 6.1 Logo of the Game
![Screenshot 2023-06-28 021400](https://github.com/chee0101/hackathon/assets/121498882/422a05d0-dbb7-43e9-9764-06d3c36b780a)

Figure 1: Displayed when the game started.

## 6.2 Welcome Session
![Welcome](https://github.com/chee0101/hackathon/assets/121498882/8f347faa-11d7-4fd5-8bc7-792d626903b1)

Figure 2: Welcome the player with a brief explanation of the game

## 6.3 Main Menu
![image](https://github.com/chee0101/hackathon/assets/121498882/f7dfc635-cb95-44e9-a43b-41d6b771be7e)

Figure 3: The player can select to start a new game or continue the previous game

## 6.4 Story Background
![image](https://github.com/chee0101/hackathon/assets/121498882/c4d755fb-eadd-4e56-bf89-bffb524b488c)

Figure 4: First part of the game: Story Background

## 6.5 Interview Session
![image](https://github.com/chee0101/hackathon/assets/121498882/91e50777-95e1-4845-8a08-cb09ee2f8b80)

Figure 5: Second part of the game: Interview session

## 6.6 Interactive Dialogue
![image](https://github.com/chee0101/hackathon/assets/121498882/aea225df-3948-4ea1-9206-7207e5a7fe17)

Figure 6: The player can choose the suspect and questions

## 6.7 Clue Searching Session
![image](https://github.com/chee0101/hackathon/assets/121498882/4faf00df-ba53-4b1b-a6da-13021b81a45f)

Figure 7: Third part of the game: Clue Searching Session

## 6.8 Interactive Navigation
![image](https://github.com/chee0101/hackathon/assets/121498882/940a1ece-5647-4712-a229-189178e77cb1)

Figure 8: The player can choose which location to be searched first

![image](https://github.com/chee0101/hackathon/assets/121498882/88beb0ec-0fa4-4cef-b5a7-af28431e0a5c)

Figure 9: The player can choose which spot of the location to be searched first

## 6.9 Game Menu
![image](https://github.com/chee0101/hackathon/assets/121498882/61d75730-70ca-45bf-8451-fffe04af19ee)

Figure 10: After the first three part of the game has been played, the player can choose to proceed to guess the murderer or continue to gather information

## 6.10 Clue Bag
![image](https://github.com/chee0101/hackathon/assets/121498882/1cc97208-7308-4ffc-b194-60de608dda79)

Figure 11: Players can check the clue bag to recall the found clues

## 6.11 Guess The Murderer
![image](https://github.com/chee0101/hackathon/assets/121498882/82c1a5a9-b83a-441d-86d6-3acde4f06263)

Figure 12: Forth part of the game: Guess The Murderer

## 6.12 Fail case
![image](https://github.com/chee0101/hackathon/assets/121498882/03c011af-f986-48c4-b6eb-0671f567177b)

Figure 13: The player can choose to know the truth or not if fail

## 6.13 Save Game
![image](https://github.com/chee0101/hackathon/assets/121498882/59e1fea5-ca84-4c0c-b124-9f37632f521f)

Figure 14: The player can choose to save the game when quitting

## 6.14 The end
![image](https://github.com/chee0101/hackathon/assets/121498882/0b8b887d-63e7-4be4-86b5-bc4930e7dac9)

Figure 15: End of the game

---

# 7.0 Link to the Game Demo Video

[Game Demo Video](https://www.youtube.com/watch?v=Huyw2MUlBE4)
