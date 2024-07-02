# CodeAlpha_Task
This Repository is For the CodeAlpha internship project 

## Project Description: To-Do List Application

### Overview
The To-Do List Application is a console-based program designed to help users manage their tasks efficiently. It provides functionalities to add new tasks, view the current list of tasks, and delete tasks. This application is written in C++ and is aimed at providing a simple yet effective tool for daily task management.

### Features

1. ## Add New Task
    Users can add a new task to the list.
    The application checks to ensure the task is not empty before adding it.
    The maximum number of tasks that can be added is 15.

2. ## View Tasks
    Users can view the list of all current tasks.
    Each task is displayed with an index number for easy reference.

3. ## Delete Task
    Users can delete a specific task by specifying its index number.
    The application automatically adjusts the list to remove gaps created by deleted tasks.

4. ## Terminate Program
    Users can exit the application by selecting the appropriate option.

### Detailed Functionality

#### Adding a New Task
 When the user chooses to add a new task, the application prompts the user to enter the task description.
 The application ensures that the task is not empty (i.e., it contains more than just whitespace).
 If the task list has reached its maximum capacity (15 tasks), the application informs the user that no more tasks can be added.

#### Viewing Tasks
 Users can view the current list of tasks at any time by selecting the view tasks option.
 The application calls the Display function, which prints all the tasks along with their index numbers.

#### Deleting a Task
 Users can delete a task by specifying its index number.
 The application validates the index number to ensure it is within the valid range of current tasks.
 After a task is deleted, the application shifts the remaining tasks to fill the gap, maintaining a continuous list.

#### Terminating the Program
 Users can exit the application by selecting the terminate option.
 The application stops running and exits cleanly.

### Display Function

The Display function is responsible for showing the current list of tasks. It takes an array of tasks and the current count of tasks as parameters. The function iterates through the array and prints each task along with its index number.

## Function Overview:

 ## Input Parameters:
   Task[]: An array of strings containing the tasks.
   task_count: An integer representing the number of tasks in the list.

 ## Output
   Displays the list of tasks with their respective index numbers.

## Steps:
1. Print the header "Task To Do".
2. Iterate through the Task array up to task_count.
3. For each task, print the task's index number and description.

 ## Usage Instructions
1. ## Starting the Program
   - Run the application. The main menu will be displayed with the following options:
      1 to add a new task.
      2 to view tasks.
      3 to delete a task.
      0 to terminate the program.

2. ## Adding a New Task
    Select option 1.
    Enter the task details when prompted. Ensure the task is not empty.

3. ## Viewing Tasks
    Select option 2 to display all the tasks in the list.

4. ## Deleting a Task
    Select option 3.
    Enter the index number of the task to be deleted. If the index is valid, the task will be removed.

5. ## Terminating the Program
    Select option 0 to exit the application.

 ## Design Considerations

1. ## Data Storage
   - Tasks are stored in a fixed-size array with a maximum capacity of 15 tasks.

2. ## User Input Validation
   - The application ensures that users cannot add empty tasks.
   - The application checks for valid index numbers when deleting tasks.

3. ## User interface
   - The application uses a simple text-based interface, making it easy to navigate and use.


## Conclusion
The To-Do List Application is a straightforward and practical tool for task management. Its simplicity ensures ease of use while providing essential features for organizing tasks. Future enhancements could expand its capabilities and improve the user experience further
