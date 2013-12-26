///////////////////////////////////////////////////////////////
//define the Tasks' Stk lengh Prio Function on the project
///////////////////////////////////////////////////////////////

#ifndef APP_CFG_H
#define APP_CFG_H


//Task Stk lengh

#define	MainTaskStkLengh	1024*2   	// Define the MainTask stack length 
#define	Task0StkLengh		1024     	// Define the Task0 stack length 
#define	Task1StkLengh		1024*2   	// Define the Task1 stack length 
#define	Task2StkLengh		1024*2   	// Define the Task2 stack length 
#define	Task3StkLengh	1024    	// Define the Task3 stack length 



//Task function
void    MainTask(void *pdata);   		//MainTask task
void 	Task0(void *pdata);			    // Task0 
void 	Task1(void *pdata);			    // Task1 
void 	Task2(void *pdata);			    // Task2
void    Task3(void *pdata);          //Task 3


//Task Prio
#define NormalTaskPrio       5
#define MainTaskPrio 	NormalTaskPrio
#define Task0Prio 		NormalTaskPrio+1
#define Task1Prio  		NormalTaskPrio+2
#define Task2Prio  		NormalTaskPrio+3
#define Task3Prio  	    NormalTaskPrio+4


#endif