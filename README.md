
# Custom `printf()` Function Project
    This project was created to show a custom implementation of the Printf() function. The Printf() function is a variadic function that handles format specifiers. We decided to focus on a few of those specifiers. The format specifiers we are handling are:

        - 'c' for character
        - 's' for string
        - 'd' and 'i' for decimal and integer
        - 'b' for binary numbers
        - '%' to identify the presence of a nonspecifier

    While going through the completion of this project, we were able to understand what is happening behind the scenes by using printf() in source code. To get a better visual of this we also created a flowchart.

## Flowchart Visualization

    Here is our flowchart!
    ![Flowchart]
     (Custom-Printf/images/flowchart.png)

## How It's Made:
    **Tech used:** C, Makefile, and Visual Studio Code


## How to Run the Project
To run this project, use the provided Makefile with the bash script command:

    make
    
Then:

    ./bin/custom_printf

## Project Structure with Explanation

```markdown
CustomPrintf/ 

│── images/ // Images related to the project
    ├── flowchart.png // Flowchart explaining the program logic 

│── include/ // Header files  
    ├── custom_printf.h // Header file for function declarations

│── src/ // Source code files  
    ├── custom_printf.c // Core printf implementation  
    ├── format_handlers.c // Functions for handling format specifiers 
    ├── main.c // Entry point of the program 
    ├── utils.c // Utility functions 

│── .gitignore // Files and directories to be ignored by Git

│── Makefile // Build system configuration
 
│── README.md // Project documentation
```

## Collaborators
    Nailah Markham
    Christion Callahan