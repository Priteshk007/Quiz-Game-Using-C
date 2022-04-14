#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<conio.h>
#include<windows.h>


// Delay funtion that will help to delay the printing of statements so that user can red the commands
void delay(int seconds )
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}


//main

int main(){
	int count=1,s,c,d=1,random1,points=0,answer,quit=0,streak=0;
	int a[15],z[15],y[15];
	int i,j,number1,number2,answer1,answer2,n=0;
	float number3,point3=0.0;
	char conc[100]="\n";

	FILE * fPtr;
    FILE * fTemp;



    char buffer[1000];
    char newline[1000];
    int  cout,line;



    int count1;
	
	printf("\n \n ********** WELCOME TO General Quiz**********\n");
	delay(1);
	
	while(d>0 &&d<6){
		
	printf("\n\n ################################### MENU ###################################");
	
	printf("\n\nPress 1 to start the quiz type 1(you can answer all questions even if previous answer is wrong) \n\n ");
	printf("Press 2 to start the quiz type 2(Streak type: you can only answer the next question is previous is correct) \n\n ");
	printf("Press 3 Start Quiz type 3(2 correct answers for each question)\n\n");
	printf("Press 4 to check highest score(in all modes)\n\n");
	printf("press 5 to reset the scores in all modes\n \n ");
	printf("press 0 to quit\n ");
	

	delay(2);
	
	printf("\n Enter your choice:");
	
  	scanf("%d",&c);
  	d=c;
	  if(c<0 || c>5){
		  printf("\n\n invalid choice \n");	  }
  	if (c==1){
		 
  		printf("\n\n ########## Your quiz 1 is about to start ##########\n \n");
  		delay(1);
		  
  		printf("Before starting the quiz please read instructions , you will be given 10 seconds to read it\n ");
  		delay(1);
		  
  		printf("\n************* INSTRUCTIONS*************\n\n");
  		delay(1);
		  
  		printf("One by one 10 questions will be presented in front of you\n\n");
  		delay(1);
		printf("For every correct answer you get 1 point and for wrong answer you get 0\n\n");
		delay(1);
		printf("there are 4 options for every question(1,2,3,4) \n \n");
		delay(1);
		printf("if you want to quit the game in between you can press 0 as an answer to the question currently you are in\n\n");
		delay(1);
		printf("on completion of all 10 question your points will be displayed in front of you\n");
		
		delay(1);
  		delay(10);

line=1;
quit=0;
points=0;
  		srand(time(0)); 
a[0]=rand()%50 ; 

a[1]=rand()%50;

n+=2;
while(n<10){

    a[n]=rand()%50 ;
    for(i=0;i<=n;i++){ 
            for(j=i+1;j<=n;j++){
               if(a[i]==a[j]){
                a[j]=0;
                n=n-1;
               }

            }

    }

n+=1;
}
	for (i=0;i<10;i++){
  			if(quit==1)
  			break;
  			delay(2);
			  

    printf("\n Question %d \n  ",i+1);
	
    //random function is used so that a random question number is generated
  			switch(a[i] +1 ){ 

  				// question 1

  				case 1:
  					printf("How many sign are there according to astrology?\n");
  					printf("1. 8                  2. 10\n");
  					printf("3. 12                 4. 14\n ");
  					delay(2);
					  
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}


					//question 2

					case 2:

  					printf("Which of the following is not a social networking site?\n");
  					printf("1.Twitter                 2. Facebook \n");
  					printf("3.Google+                  4.wikipedia \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4 ){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==3){

						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 3

					case 3:

  					printf("In Ramayan Which of the following is a bird?\n");
  					printf("1.Bali                  2.Jatayu \n");
  					printf("3.Angad                 4.Surpanakha \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 4

					case 4:

  					printf("Which of these actor living in a Bangalow named Mannant?\n");
  					printf("1.Shahrukh Khan                2.Amitabh bacchan \n");
  					printf("3.Ajay Devgan                  4.Diljit dosanjh\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 5

					case 5:

  					printf("Which of the following game is played in the court surrounded by four walls ?\n");
  					printf("1. Lacrose                  2.Boles \n");
  					printf("3. Squash                 4.Cricket \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 6

					case 6:

  					printf(" Veenapani is another name of following godess??\n");
  					printf("1.Saraswati              2.Lakshmi \n");
  					printf("3.Durga                  4.Kaali \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 7

					case 7:

  					printf(" Daga and  Teja was henchmen of Which Filmi Character?\n");
  					printf("1.Shakaal              2.Mogambo \n");
  					printf("3.Don                  4.Flying Jatt \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 8

					case 8:

  					printf("Which of the following was one of the main character in Ramayana, who also appears in Mahabharata ?\n");
  					printf("1.Jatayu                  2.Jaidrath \n");
  					printf("3.Krishna                 4.Hanuman \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==3){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 9

					case 9:

  					printf("In India which of the following post is an elected post ?\n");
  					printf("1.President                            2.Cheif justice \n");
  					printf("3.Election commisioner                 4. Governer\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 10:

  					printf("Which team won the 2014 ICC World Twenty20?\n");
  					printf("1.India                   2.Sri lanka\n");
  					printf("3.England                 4.Pakistan \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}


//question 11

					case 11:

  					printf("Which of these states is also known for Aligarh ke taale, Bareilly ka surma and Firozabad ki chudiyan ?\n");
  					printf("1. U.P                  2. Karnataka\n");
  					printf("3. M.P                  4.Bihar\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}


					//question 12

					case 12:

  					printf(" In 2008, Rajasthan Royals became the first winner of which annual sporting event?\n");
  					printf("1.BBL                   2.IPL\n");
  					printf("3.FIFA Cup              4.Champions trophy\n ");
  					delay(2);
  				
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 13

					case 13:

  					printf(" What are the terms 3G, 4G and 5G related to ?\n");
  					printf("1. Privacy                  2.GDP\n");
  					printf("3. Networking               4.Buisness\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 14

					case 14:

  					printf(" Which of these songs about rain does not have any rain sequence?\n");
  					printf("1. Tip Tip barsa paani           2.Rimjhim ghire saawan\n");
  					printf("3.Ghanan Ghanan                  4.Barso re megha\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 15

					case 15:

  					printf(" Dadra, Nagar Haveli, Daman and the island of Diu were all under which European colonial power?\n");
  					printf("1.Denmark                2.Britain\n");
  					printf("3.France                 4.Portugal\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}




					//question 16

					case 16:

  					printf(" Agni Ki Udaan is the Hindi translation of which personality's autobiography?\n");
  					printf("1.Dr. APJ Abdul Kalam                 2.Akbar\n");
  					printf("3.Rabindranath Tagore                 4.Jawahar Lal Nehru\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 17:

  					printf(" For how many years Akbar ruled?\n");
  					printf("1.45                 2.49\n");
  					printf("3.47                 4.22\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10
					case 18:

  					printf("What is symbol of gold according to mordern periodic table ?\n");
  					printf("1.Ag                 2.Pt\n");
  					printf("3.Au                 4.Br\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 19:

  					printf(" Which company is the world's largest manufacturer of vaccines by number of doses produced (volume)?\n");
  					printf("1. Sputnik                2.Bharat Biotech\n");
  					printf("3. Johnsons               4.Serum institute\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 20:

  					printf(" Shah Jahan was the Grand son of which mughal ruler?\n");
  					printf("1. Akbar                 2.ahmed shah abdali\n");
  					printf("3. Humayu                4.Babur\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 21:

  					printf("What is the new name of the Hyderabad franchise that would replace Deccan Charges in IPL6 ?\n");
  					printf("1.Sun Chargers               2.Nizam Jyothi\n");
  					printf("3. Andhra Aces               4.Sun risers Hyderabad\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 22:

  					printf(" Who is known as the father of the nation?\n");
  					printf("1.Mahatma Gandhi                      2.Dr. B.R ambedkar\n");
  					printf("3. Dr. Rajendra prasad                4. Nelson Mandela\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 23:

  					printf(" When is national Youth Day is celebrated in india?\n");
  					printf("1.  July 23                 2.january 12\n");
  					printf("3.  May 18                  4.february 15\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 24:

  					printf(" In which month Prevention of blindness week is celebrated?\n");
  					printf("1.May                   2.June\n");
  					printf("3.April                 4.July\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 25:

  					printf(" What is the atomic number of gold?\n");
  					printf("1.79                   2.82\n");
  					printf("3.89                   4.56\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 26:

  					printf(" What is atomic symbol of sodium?\n");
  					printf("1.So                 2.Na\n");
  					printf("3.Sn                 4.Tc\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 27:

  					printf(" Giddha is the folk dance of ?\n");
  					printf("1.Himachal Pradesh                   2.Odisha\n");
  					printf("3.Punjab                             4.Haryana\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 28:

  					printf(" Who invented computer?\n");
  					printf("1.Guido Vannn rossum                 2.Williar Regal\n");
  					printf("3.Alexander pierce                   4.Charles Babbage\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10


					case 29:

  					printf("1 MB(mega byte)= ?\n");
  					printf("1.1024 KB                 2.1024 Bytes\n");
  					printf("3.1024 TB                 4.1024 YB\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 30:

  					printf(" Brain of Computer is?\n");
  					printf("1.RAM                 2.CPU\n");
  					printf("3.ROM                 4.ALU\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 31:

  					printf(" Which country are the Giza pyramids in?\n");
  					printf("1.America                   2.Portugal\n");
  					printf("3.Egypt                     4.Africa\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 32:

  					printf(" What is the name of largest fresh water lake in India?\n");
  					printf("1.Haflomg lake                  2.Chilika Lake\n");
  					printf("3.Pengyong Lake                 4.Wular Lake\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10


					case 33:

  					printf(" Largest Saline Water lake in India?\n");
  					printf("1.Chilka Lake                   2..Haflomg lake \n");
  					printf("3.Wular Lake                    4.Pengyong Lake \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 34:

  					printf(" In which year First international Yoga Day was celebrated?\n");
  					printf("1.2012                 2.2015\n");
  					printf("3.2013                 4.2017\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 35:

  					printf(" In which year Right To Information Act passed?\n");
  					printf("1.2002                 2.2012\n");
  					printf("3.2007                 4.2008\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 36:

  					printf(" Where is RBI lacated?\n");
  					printf("1.Chennai                 2.Bangalore\n");
  					printf("3.Delhi                   4.Mumbai\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10


					case 37:

  					printf(" Where is Tehran Located?\n");
  					printf("1.Iran                   2.Mecedonia\n");
  					printf("3.Iraq                   4.Persia\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 38:

  					printf(" Mid day meal scheme was launched in India in year?\n");
  					printf("1.1955                 2.1995\n");
  					printf("3.1985                 4.2007\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 39:

  					printf(" From Where the Nile River originates?\n");
  					printf("1.Lake Placid                   2.Himalyas\n");
  					printf("3.Lake victoria                 4.China\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 40:

  					printf(" In which year INC formed?\n");
  					printf("1.1889                 2.1857\n");
  					printf("3.1887                 4.1885\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10



					case 41:

  					printf(" Who formed INC?\n");
  					printf("1.A.O Hume                       2.Jawahar lal Nehru\n");
  					printf("3.Mahatma Gandhi                 4.B.R Ambedkar\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 42:

  					printf("Char Minar is located in ?\n");
  					printf("1.Assam                     2.Hyderabad\n");
  					printf("3.Singapore                 4.Rajasthan\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 43:

  					printf("Largest(area) state of India is ?\n");
  					printf("1.Goa                       2.Uttar Pradesh\n");
  					printf("3.Rajasthan                 4.Madhya Pradesh\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 44:

  					printf(" Which State in India has Longest Coastline?\n");
  					printf("1.Tamil Nadu                   2.Maharashtra\n");
  					printf("3.Kerela                       4.Gujrat\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 45:

  					printf(" Which Continent has highest population density?\n");
  					printf("1.Asia                   2.Antartica\n");
  					printf("3.Africa                 4.America\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 46:

  					printf(" Which disease is caused by Vitamin B deficiency?\n");
  					printf("1.Rickets                  2.Beriberi\n");
  					printf("3.Ulcer                    4.Flat foot\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 47:

  					printf(" What is name of acid found in lemons?\n");
  					printf("1.Tartric acid                   2.Chloric acid\n");
  					printf("3.Citric Acid                    4.Sulphuric acid\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 48:

  					printf(" Formula of ozone gas is?\n");
  					printf("1.O3H                   2.O2\n");
  					printf("3.H2so4                 4.O3\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}

					//question 10

					case 49:

  					printf(" How many sides Does a decagon have?\n");
  					printf("1.10                   2.4\n");
  					printf("3.08                   4.12\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10

					case 50:

  					printf(" 2 raised to the power 6 =?\n");
  					printf("1.12                 2.64\n");
  					printf("3.32                 4.65536\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						break;
					}
					//question 10


			  }

		  }
		  

  		printf("\n \n Your total points are %d ",points);
  		FILE *in_file;
  		in_file = fopen("scores.txt", "r");


        fscanf(in_file, "%d", &number1);
		if(points==10){
			
			printf("\n \n MAXIMUM SCORE ATTAINED\n \n");
		}
		
        if(points>number1){
			
            printf("\n\n NEW HIGH SCORE");
			
            fclose(in_file);

sprintf(newline,"%d",points);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");



        }


	  }

// add here(if c==2)
if (c==2){
	
  		printf(" \n \n ########## Your quiz 2 is about to start ##########\n \n");
  		delay(1);
		  
  		printf("Before starting the quiz please read instructions , you will be given 10 seconds to read it\n ");
  		delay(1);
		  
  		printf("\n************* INSTRUCTIONS*************\n\n");
		  
  		delay(1);
  		printf("One by one 10 questions will be presented in front of you\n\n");
  		delay(1);
		printf("For every correct answer you get 1 point and for wrong answer you get 0 and your game will be terminated\n\n");
		delay(1);
		printf("there are 4 options for every question(1,2,3,4) \n \n");
		delay(1);
		printf("if you want to quit the game in between you can press 0 as an answer to the question currently you are in\n\n");
		delay(1);
		printf("on completion of all 10 question your points will be displayed in front of you\n");
		delay(1);
  		delay(10);
n=0;

line=2;
quit=0;
points=0;
  		srand(time(0));
z[0]=rand()%50;

z[1]=rand()%50;

n+=2;
while(n<10){

    z[n]=rand()%50;
    for(i=0;i<=n;i++){
            for(j=i+1;j<=n;j++){
               if(z[i]==z[j]){
                z[j]=0;
                n=n-1;
               }

            }

    }

n+=1;
}
	for (i=0;i<10;i++){
  			if(quit==1)
  			break;
  			delay(2);
			  

    printf("\n Question %d\n",i+1);
	
    //random function is used so that a random question number is generated
  			switch(z[i]+1){

  				// question 1
                case 1:
  					printf("How many sign are there according to astrology?\n");
  					printf("1. 8                  2. 10\n");
  					printf("3. 12                 4. 14\n ");
  					delay(2);
					  
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}


					//question 2

					case 2:

  					printf("Which of the following is not a social networking site?\n");
  					printf("1.Twitter                 2. Facebook \n");
  					printf("3.Google+                  4.wikipedia \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4 ){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==3){

						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 3

					case 3:

  					printf("In Ramayan Which of the following is a bird?\n");
  					printf("1.Bali                  2.Jatayu \n");
  					printf("3.Angad                  4.Surpanakha \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 4

					case 4:

  					printf("Which of these actor living in a Bangalow named Mannant?\n");
  					printf("1.Shahrukh Khan                2.Amitabh bacchan \n");
  					printf("3.Ajay Devgan                  4.Diljit dosanjh\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 5

					case 5:

  					printf("Which of the following game is played in the court surrounded by four walls ?\n");
  					printf("1. Lacrose                  2.Boles \n");
  					printf("3. Squash                 4.Cricket \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);

  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 6

					case 6:

  					printf("Veenapani is another name of following godess??\n");
  					printf("1.Saraswati              2.Lakshmi \n");
  					printf("3.Durga                  4.Kaali \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 7

					case 7:

  					printf("Daga and Teja was henchmen of Which Filmi Character?\n");
  					printf("1.Shakaal              2.Mogambo \n");
  					printf("3.Don                  4.Flying Jatt \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 8

					case 8:

  					printf("Which of the following was one of the main character in Ramayana, who also appears in Mahabharata ?\n");
  					printf("1.Jatayu                  2.Jaidrath \n");
  					printf("3.Krishna                 4.Hanuman \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==3){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 9

					case 9:

  					printf("In India which of the following post is an elected post ?\n");
  					printf("1.President                            2.Cheif justice \n");
  					printf("3.Election commisioner                 4. Governer\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==3 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 10:

  					printf("Which team won the 2014 ICC World Twenty20?\n");
  					printf("1.India                   2.Sri lanka\n");
  					printf("3.England                 4.Pakistan \n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}


//question 11

					case 11:

  					printf("Which of these states is also known for Aligarh ke taale, Bareilly ka surma and Firozabad ki chudiyan ?\n");
  					printf("1. U.P                  2. Karnataka\n");
  					printf("3. M.P                  4.Bihar\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}


					//question 12

					case 12:

  					printf(" In 2008, Rajasthan Royals became the first winner of which annual sporting event?\n");
  					printf("1.BBL                   2.IPL\n");
  					printf("3.FIFA Cup              4.Champions trophy\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 13

					case 13:

  					printf(" What are the terms 3G, 4G and 5G related to ?\n");
  					printf("1. Privacy                  2.GDP\n");
  					printf("3. Networking               4.Buisness\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 14

					case 14:

  					printf(" Which of these songs about rain does not have any rain sequence?\n");
  					printf("1. Tip Tip barsa paani           2.Rimjhim ghire saawan\n");
  					printf("3.Ghanan Ghanan                  4.Barso re megha\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 15

					case 15:

  					printf(" Dadra, Nagar Haveli, Daman and the island of Diu were all under which European colonial power?\n");
  					printf("1.Denmark                2.Britain\n");
  					printf("3.France                 4.Portugal\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}




					//question 16

					case 16:

  					printf(" Agni Ki Udaan is the Hindi translation of which personalitys autobiography?\n");
  					printf("1.Dr. APJ Abdul Kalam                 2.Akbar\n");
  					printf("3.Rabindranath Tagore                 4.Jawahar Lal Nehru\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 17:

  					printf(" For how many years Akbar ruled?\n");
  					printf("1.45                 2.49\n");
  					printf("3.47                 4.22\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10
					case 18:

  					printf("What is symbol of gold according to mordern periodic table ?\n");
  					printf("1.Ag                 2.Pt\n");
  					printf("3.Au                 4.Br\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 19:

  					printf(" Which company is the worlds largest manufacturer of vaccines by number of doses produced (volume)?\n");
  					printf("1. Sputnik                2.Bharat Biotech\n");
  					printf("3. Johnsons               4.Serum institute\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 20:

  					printf(" Shah Jahan was the Grand son of which mughal ruler?\n");
  					printf("1. Akbar                 2.ahmed shah abdali\n");
  					printf("3. Humayu                4.Babur\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 21:

  					printf("What is the new name of the Hyderabad franchise that would replace Deccan Charges in IPL6 ?\n");
  					printf("1.Sun Chargers               2.Nizam Jyothi\n");
  					printf("3. Andhra Aces               4.Sun risers Hyderabad\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 22:

  					printf(" Who is known as the father of the nation?\n");
  					printf("1.Mahatma Gandhi                      2.Dr. B.R ambedkar\n");
  					printf("3. Dr. Rajendra prasad                4. Nelson Mandela\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 23:

  					printf(" When is national Youth Day is celebrated in india?\n");
  					printf("1.  July 23                 2.january 12\n");
  					printf("3.  May 18                  4.february 15\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 24:

  					printf(" In which month Prevention of blindness week is celebrated?\n");
  					printf("1.May                   2.June\n");
  					printf("3.April                 4.July\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 25:

  					printf(" What is the atomic number of gold?\n");
  					printf("1.79                   2.82\n");
  					printf("3.89                   4.56\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 26:

  					printf(" What is atomic symbol of sodium?\n");
  					printf("1.So                 2.Na\n");
  					printf("3.Sn                 4.Tc\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 27:

  					printf(" Giddha is the folk dance of ?\n");
  					printf("1.Himachal Pradesh                   2.Odisha\n");
  					printf("3.Punjab                             4.Haryana\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 28:

  					printf(" Who invented computer?\n");
  					printf("1.Guido Vannn rossum                 2.Williar Regal\n");
  					printf("3.Alexander pierce                   4.Charles Babbage\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10


					case 29:

  					printf("1 MB(mega byte)= ?\n");
  					printf("1.1024 KB                 2.1024 Bytes\n");
  					printf("3.1024 TB                 4.1024 YB\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 30:

  					printf(" Brain of Computer is?\n");
  					printf("1.RAM                 2.CPU\n");
  					printf("3.ROM                 4.ALU\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 31:

  					printf(" Which country are the Giza pyramids in?\n");
  					printf("1.America                   2.Portugal\n");
  					printf("3.Egypt                     4.Africa\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 32:

  					printf(" What is the name of largest fresh water lake in India?\n");
  					printf("1.Haflomg lake                  2.Chilika Lake\n");
  					printf("3.Pengyong Lake                 4.Wular Lake\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10


					case 33:

  					printf(" Largest Saline Water lake in India?\n");
  					printf("1.Chilka Lake                   2.Haflong lake\n");
  					printf("3.Wular Lake                    4.Pengyong Lake\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 34:

  					printf(" In which year First international Yoga Day was celebrated?\n");
  					printf("1.2012                 2.2015\n");
  					printf("3.2013                 4.2017\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 35:

  					printf(" In which year Right To Information Act passed?\n");
  					printf("1.2002                 2.2012\n");
  					printf("3.2007                 4.2008\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 36:

  					printf(" Where is RBI lacated?\n");
  					printf("1.Chennai                 2.Bangalore\n");
  					printf("3.Delhi                   4.Mumbai\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10


					case 37:

  					printf(" Where is Tehran Located?\n");
  					printf("1.Iran                   2.Mecedonia\n");
  					printf("3.Iraq                   4.Persia\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 38:

  					printf(" Mid day meal scheme was launched in India in year?\n");
  					printf("1.1955                 2.1995\n");
  					printf("3.1985                 4.2007\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 39:

  					printf(" From Where the Nile River originates?\n");
  					printf("1.Lake Placid                   2.Himalyas\n");
  					printf("3.Lake victoria                 4.China\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 40:

  					printf(" In which year INC formed?\n");
  					printf("1.1889                 2.1857\n");
  					printf("3.1887                 4.1885\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10



					case 41:

  					printf(" Who formed INC?\n");
  					printf("1.A.O Hume                       2.Jawahar lal Nehru\n");
  					printf("3.Mahatma Gandhi                 4.B.R Ambedkar\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 42:

  					printf("Char Minar is located in ?\n");
  					printf("1.Assam                     2.Hyderabad\n");
  					printf("3.Singapore                 4.Rajasthan\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 43:

  					printf("Largest(area) state of India is ?\n");
  					printf("1.Goa                       2.Uttar Pradesh\n");
  					printf("3.Rajasthan                 4.Madhya Pradesh\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 44:

  					printf(" Which State in India has Longest Coastline?\n");
  					printf("1.Tamil Nadu                   2.Maharashtra\n");
  					printf("3.Kerela                       4.Gujrat\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 45:

  					printf(" Which Continent has highest population density?\n");
  					printf("1.Asia                   2.Antartica\n");
  					printf("3.Africa                 4.America\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 46:

  					printf(" Which disease is caused by Vitamin B deficiency?\n");
  					printf("1.Rickets                  2.Beriberi\n");
  					printf("3.Ulcer                    4.Flat foot\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 47:

  					printf(" What is name of acid found in lemons?\n");
  					printf("1.Tartric acid                   2.Chloric acid\n");
  					printf("3.Citric Acid                    4.Sulphuric acid\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==3){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==2 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 3 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 48:

  					printf(" Formula of ozone gas is?\n");
  					printf("1.O3H                   2.O2\n");
  					printf("3.H2so4                 4.O3\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==4){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==2){
						printf("\n Your answer is wrong the correct answer is 4 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}

					//question 10

					case 49:

  					printf(" How many sides Does a decagon have?\n");
  					printf("1.10                   2.4\n");
  					printf("3.08                   4.12\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==1){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==2 || answer==4){
						printf("\n Your answer is wrong the correct answer is 1 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}
					//question 10

					case 50:

  					printf(" 2 raised to the power 6 =?\n");
  					printf("1.12                 2.64\n");
  					printf("3.32                 4.65536\n ");
  					delay(2);
  					
  					printf("\nEnter your answer number: ");
					  
  					scanf("%d",&answer);
  					if(answer==2){
  						points+=1;
  						printf("\nCorrect choice you gained 1 point\n");
  						break;
					  }
  					if(answer==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %d points\n  ",points);
  						break;
					  }
					if(answer==3 || answer==1 || answer==4){
						printf("\n Your answer is wrong the correct answer is 2 \n");
						quit+=1;
						break;
					}
					if(answer<0 || answer>4){
						printf("\ninvalid choice");
						quit+=1;
						break;
					}


			  }

		  }
		  

  		printf("\n \n Your total points are %d ",points);
  		FILE *in_file;
  		in_file = fopen("scores.txt", "r");


        fscanf(in_file, "%d", &number1);
        fscanf(in_file, "%d", &number2);
		if(points==10){
			
			printf("\n\n MAXIMUM SCORE ATTAINED\n ");

		}
        if(points>number2){
			
            printf("\n \nNEW HIGH SCORE");
            
			fclose(in_file);
			

sprintf(newline,"%d",points);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");



        }


	  }

	  if (c==3){
		  
  		printf(" \n \n########## Your quiz 3  is about to start ##########\n \n");
  		delay(1);
		  
  		printf("Before starting the quiz please read instructions , you will be given 10 seconds to read it\n ");
  		delay(1);
		  
  		printf("\n*********************************INSTRUCTIONS************************************\n\n");
  		delay(1);
		  
  		printf("One by one 5 questions will be presented in front of you\n\n");
  		delay(1);
  		printf("Every Question will have 2 correct options\n\n");
  		delay(1);
		printf("For every correct option you get 0.5 point and for wrong answer you get 0\n\n");
		delay(1);
		printf("there are 4 options for every question(1,2,3,4) \n \n");
		delay(1);
		printf("if you want to quit the game in between you can press 0 as an answer to the question currently you are in\n\n");
		delay(1);
		printf("on completion of all 5 question your points will be displayed in front of you\n\n ");
		delay(1);
  		delay(10);
n=0;

line=3;
quit=0;

  		srand(time(0));
y[0]=rand()%20;

y[1]=rand()%20;

n+=2;
while(n<5){

    y[n]=rand()%20;
    for(i=0;i<=n;i++){
            for(j=i+1;j<=n;j++){
               if(y[i]==y[j]){
                y[j]=0;
                n=n-1;
               }

            }

    }

n+=1;
}
	for (i=0;i<5;i++){
  			if(quit==1)
  			break;
  			delay(2);
	

    printf("\n\n Question %d\n",i+1);
	
    //random function is used so that a random question number is generated
  			switch(y[i]+1){

  				// question 1
                 case 1:
  					printf("WHICH OF THE FOLLOWING IS/ARE TYPE OF INTEGER?\n");
  					printf("1.45                  2.698 \n");
  					printf("3.36.0                4.0.0005 \n ");
  					delay(2);
					  
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==1 ||answer2==2 &&answer2!=answer1){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						printf("\n the correct answers are 1 and 2");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}

					//question 2

					case 2:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE ALKALI METALS?\n");
  					printf("1.Be                  2.Rb \n");
  					printf("3.Na                  4.Ti \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==3 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						printf("\n the correct answers are 2 and 3");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 2 and 3");

						break;
					}
					case 3:
					    printf("OUT OF THESE, WHICH ARE LIQUID METALS?\n");
  					printf("1.Be                  2.Fr \n");
  					printf("3.Li                  4.Cs \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1 || answer1==3 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==4 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 2 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==3 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 2 and 4");

						break;
					}
					case 4:
					    printf("WHICH POSIONOUS SUBSTANCE PRESENT LEADS TO ACID RAIN?\n");
  					printf("1.NITROGEN OXIDES                  2.SULFUR DIOXIDE \n");
  					printf("3.CARBON DIOXIDE                   4.HYDROCHLORIC ACID \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==1){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 2");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}
					case 5:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE BROTHERS IN MAHABHARAT?\n");
  					printf("1.KARN AND DUSSASHAN                     2.ARJUN AND VRIKODAR \n");
  					printf("3.YUDHISTIR AND DEVRATH                  4.SAHDEV AND KARN \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1 || answer1==3 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==4 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 2 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==3 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice\n ");
						printf("\the correct answers are 2 and 4");

						break;
					}
					case 6:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE SAME NAME OF BRIDGE IN INDIA?\n");
  					printf("1.HOWRAH BRIDGE                    2.MAHATMA GANDHI SETU \n");
  					printf("3.VIDYASAGAR SETU                  4.HOOGHLY BRIDGE \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==4 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==3 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 4 and 3");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 4 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 4 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 4 and 3");

						break;
					}
					case 7:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE FOUNDER OF LANGUAGE C?\n");
  					printf("1.DENNIS RITCHIE                   2.DMR \n");
  					printf("3.BRIAN KERNIGHAN                  4.HMR \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==1){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 2");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}
					case 8:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE KNOWN AS BLUE VITROL?\n");
  					printf("1.CUPRIC SULFATE                    2.CHALCANTHITE \n");
  					printf("3.SULPHURIC COPPER                  4.COPPERAS \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 2");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}
					case 9:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE ALSO KNOWN AS DELHI?\n");
  					printf("1.DILLI                     2.PANCHAL \n");
  					printf("3.SUSHAM                    4.INDRAPRASTHA \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 4");

						break;
					}
					case 10:
					    printf("10)WHICH AMONG THE FOLLOWING IS/ARE SUCCESFUL BROTHERS IN SAME FIELD?\n");
  					printf("1.RUDOLF AND ADOLF DASSLER                  2.IRFAN AND YUSUF PATHAN \n");
  					printf("3.SALMAN AND SOHAIL KHAN                    4. AAMIR AND FAIZAL KHAN \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 2");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}
					case 11:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE LANTHANOIDS?\n");
  					printf("1.Pm(PROMETHIUM)                  2.Cn(COPERNICIUM) \n");
  					printf("3.Eu(EUROPIUM)                    4.Pu(PLUTONIUM) \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==2 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==3 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 3");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==2 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 3");

						break;
					}
					case 12:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE SON OF LORD SURYA?\n");
  					printf("1.HANUMAN                       2.KARNA \n");
  					printf("3.JATAYU                        4.SUGRIVA \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==4 ||answer1==2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==1 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==4&&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 2 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==1 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 2 and 4");

						break;
					}
					case 13:
					    printf("WHICH AMONG THE FOLLOWING IS/ARE COMPANIES OF SOUTH KOREA?\n");
  					printf("1.KIA MOTORS                               2.FORD \n");
  					printf("3.LG ELECTRONICS                           4.PORSCHE \n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==2 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==3 ||answer2==1 && answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 3");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==2 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 3");

						break;
					}
					case 14:
                         printf("WHICH AMONG THE FOLLOWING IS/ARE STATES HAVING SAME CAPITAL?\n");
  					printf("1.PUNJAB                                 2.ROHTAAS\n");
  					printf("3.UTTAR PRADESH                          4. HARYANA\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 4");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 4");

						break;
					}

					case 15:
                         printf("WHICH AMONG THE FOLLOWING IS/ARE COUNTRIES WHICH GOT THEIR INDEPENDENCE ON 15 AUGUST ?\n");
  					printf("1.INDIA AND BAHRAIN                      2.INDIA AND RUSSIA\n");
  					printf("3.INDIA AND AUSTRALIA                    4. NORTH AND SOUTH KOREA\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 4");

						break;
					}
					case 16:
                         printf("WHICH AMONG THE FOLLOWING IS/ARE LUNGS DISSEASE?\n");
  					printf("1.CARDIOMYOPATHY                    2.PERICARDIAL DISEASE\n");
  					printf("3.ASTHMA                            4.TUBERCULOSIS\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==3 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==3 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\nthe correct answers are 3 and 4");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 3 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 3 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\nthe correct answers are 3 and 4");

						break;
					}
					case 17:
                         printf("WHITE TIGER IS FOUND IN WHICH STATES?\n");
  					printf("1.RAJSTHAN                        2.BIHAR\n");
  					printf("3.WEST BENGAL                     4.PUNJAB\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==1|| answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==3 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 2 and 3");

  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==1 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 2 and 3");

						break;
					}
					case 18:
                         printf("WHICH AMONG THE FOLLOWING INSTRUMENTS MEASURE THE TEMPERATURE?\n");
  					printf("1.HYGROMETER                            2.THERMOCOUPLES\n");
  					printf("3.SULFOMETER                            4.PYROMETER\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==2 ||answer1==4){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==1 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==4 ||answer2==2 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 2 and 4");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==1 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 2 and 4");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 2 and 4");

						break;
					}
					case 19:
                         printf("WHICH AMONG THE FOLLOWING IS/ARE S.I UNIT OF PRESSURE?\n");
  					printf("1.PASCAL                             2.DECIBEL\n");
  					printf("3.BARYE                              4.Electron Volt\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==3){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==4 || answer1==2 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
	
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==3 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 3");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==4 || answer2==2 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 3");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 3");

						break;
					}
					case 20:
                         printf("THE COMPOUND(S) FORMED UPON COMBUSTION OF SODIUM METAL IN EXCESS AIR IS/ARE?\n");
  					printf("1.Na2O2                           2.Na2O\n");
  					printf("3.NaO2                            4. NaOH\n ");
  					delay(2);
  					
  					printf("\nEnter your choice 1: ");
					  
  					scanf("%d",&answer1);

  					if(answer1==1 ||answer1==2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");

					  }
  					if(answer1==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;

					  }
					if(answer1==3 || answer1==4 ){
						printf("\n Your answer is wrong  \n");

					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");

					}
					
	printf("\nEnter your choice 2: ");
	
  					scanf("%d",&answer2);
  					if(answer2==2 ||answer2==1 &&answer1!=answer2){
  						point3+=.5;
  						printf("\nCorrect choice you gained .5 point\n");
						  printf("\n the correct answers are 1 and 2");
  						break;
					  }
                    if(answer1==answer2 ){
						printf("\n You entered same choice again  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
  					if(answer2==0){
  						printf("\n you chose to quit the game");
  						quit+=1;
  						printf("\nTill now you gained %0.2f points\n  ",point3);
  						break;
					  }
					if(answer2==3 || answer2==4 ){
						printf("\n Your answer is wrong  \n");
						printf("the correct answers are 1 and 2");
						break;
					}
					if(answer1<0 || answer1>4){
						printf("\ninvalid choice");
						printf("\n the correct answers are 1 and 2");

						break;
					}



			  }

		  }
		  

  		printf("\n \n Your total points are %.2f ",point3);
  		FILE *in_file;
  		in_file = fopen("scores.txt", "r");


        fscanf(in_file, "%d", &number1);
        fscanf(in_file, "%d", &number2);
        fscanf(in_file, "%f", &number3);

        if(point3>number3){
			
            printf("\n \n NEW HIGH SCORE");
			
            fclose(in_file);

sprintf(newline,"%.2f",point3);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");



        }


	  }
if(c==4){


    FILE *in_file;
  		in_file = fopen("scores.txt", "r");


        fscanf(in_file, "%d", &number1);
        fscanf(in_file, "%d", &number2);
        fscanf(in_file, "%f", &number3);

        printf("\n\n The score in Game Mode 1 is: %d",number1);
		
        printf("\n\n The score in Game Mode 2 is: %d",number2);
		
        printf("\n \nThe score in Game Mode 3 is: %.2f",number3);

            fclose(in_file);
}
// 
if (c==5){
	points=0;
	line=1;

	sprintf(newline,"%d",points);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");


line=2;
	sprintf(newline,"%d",points);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");

point3=0.0;
line=3;



sprintf(newline,"%.2f",point3);


strcat(newline,conc);


       /*  Open all required files */
    fPtr  = fopen("scores.txt", "r");
    fTemp = fopen("replace.tmp", "w");


    cout = 0;
    while ((fgets(buffer, 1000, fPtr)) != NULL)
    {
        cout++;

        /* If current line is line to replace */
        if (cout == line)
            fputs(  newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("scores.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "scores.txt");


printf("\n\n****************************** Score");

printf(" Reset ******************************\n  \n");

}

// while end
}
// main end
}




