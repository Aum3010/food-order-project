The given code includes functions and global variables for implementing a queue data structure. It also includes a struct definition for the queue. 

The global variables `a`, `i`, `j`, and `item` are declared without any initialization. These variables are used for various purposes within the code.

The struct `que` represents the queue and has the following members:
- `front`: an integer representing the front of the queue
- `rear`: an integer representing the rear of the queue
- `size`: an integer representing the current size of the queue
- `actual_size`: an unsigned integer representing the actual size of the queue
- `arr`: a pointer to a float array representing the elements of the queue

The function `createque()` is used to create a queue. It takes an unsigned integer `actual_size` as a parameter and returns a pointer to the created queue. It allocates memory for the queue using `malloc()` and initializes the queue members.

The function `isempty()` checks if the queue is empty. It takes a pointer to the queue as a parameter and returns 1 if the queue is empty, otherwise returns 0.

The function `enque()` is used to enqueue an item into the queue. It takes a pointer to the queue and an integer `item` as parameters. It checks if the queue is full using the `isfull()` function. If the queue is not full, it increments the `rear` and adds the item to the `arr` array. It also increments the `size` of the queue. If the `front` is -1, it sets the `front` to 0. It then prints a message indicating that the item has been added to the queue.

The function `isfull()` checks if the queue is full. It takes a pointer to the queue as a parameter and returns 1 if the queue is full, otherwise returns 0.

The function `deque()` is used to dequeue an item from the queue. It takes a pointer to the queue as a parameter. It checks if the queue is empty using the `isempty()` function. If the queue is not empty, it assigns the front item to `item`. If the `front` and `rear` are the same, it sets them to -1. Otherwise, it increments the `front`. It also decrements the `size` of the queue. It then prints a bill for the dequeued item based on its value and returns the item.

The function `display()` is used to display the elements of the queue. It takes a pointer to the queue as a parameter. If the queue is empty, it prints "__queue is empty__".

This code is for a restaurant order delivery system. It allows users to add orders, delete orders and get the bill, and display the order queue. 

The code starts by displaying the food orders in a queue. It iterates through the queue and prints each order.

The main function is where the user interacts with the system. It displays a menu with options to add an order, delete an order and get the bill, display the order queue, and exit the program. The user is prompted to enter their choice.

If the user selects option 1 to add an order, the code displays a food menu with breakfast, lunch, and dinner options. The user is prompted to choose a food item and enter the quantity. The code then calculates the total cost of the order based on the item and quantity and adds the order to the queue using the enque function.

If the user selects option 2 to delete an order and get the bill, the code dequeues the first order from the queue and calculates the total bill based on the item and quantity. The bill is then displayed to the user.

If the user selects option 3 to display the order queue, the code iterates through the queue and prints each order.

If the user selects option 4 to exit the program, the code exits the main function and the program terminates.

The provided code appears to be a part of a larger program that involves a recipe management system. 

The code chunk consists of a switch statement that takes an input value `a` and performs different actions based on its value. Each case in the switch statement represents a different recipe. 

Let's go through each case and understand what it does:

1. Case 4:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 4.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

2. Case 5:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 5.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

3. Case 6:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered. Additionally, checks if the queue is full or empty.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 6.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
     - Calls the `isfull` and `isempty` functions to check if the queue is full or empty.
   - Return: None

4. Case 7:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 7.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

5. Case 8:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 8.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

6. Case 9:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered. Additionally, checks if the queue is full or empty.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 9.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
     - Calls the `isfull` and `isempty` functions to check if the queue is full or empty.
   - Return: None

7. Case 10:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 10.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

8. Case 11:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 11.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

9. Case 12:
   - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
   - Parameters: `a` (recipe identifier)
   - Working: 
     - Sets `a` to 12.
     - Displays the ingredients for the recipe.
     - Prompts the user to enter the quantity.
     - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
     - Calls the `enque` function to add the recipe identifier to a queue.
   - Return: None

10. Case 13:
    - Purpose: Display the ingredients for a recipe and calculate the total cost based on the quantity entered.
    - Parameters: `a` (recipe identifier)
    - Working: 
      - Sets `a` to 13.
      - Displays the ingredients for the recipe.
      - Prompts the user to enter the quantity.
      - Calculates the total cost by multiplying the quantity with a fixed cost per unit.
      - Calls the `enque` function to add the recipe identifier to a queue.
    - Return: None

Overall, this code chunk allows the user to select a recipe, enter the quantity, and calculates the total cost. It also adds the recipe identifier to a queue.

The given code is a part of a restaurant management system. It allows the user to select food items from a menu, add them to a queue, and perform various operations on the queue.

The code begins with the main function, which is the entry point of the program. It initializes variables and a queue data structure to store the selected food items. 

The main function then enters a do-while loop, which allows the user to interact with the program until they choose to exit. Inside the loop, the user is presented with a menu of options and prompted to enter their choice.

1. The first option in the menu is to add a food item to the queue. The user is prompted to enter the item number and quantity. Based on the item number, the code assigns a price to the item and calculates the total price by multiplying the price with the quantity. The item number and total price are then enqueued into the queue using the enque function.

2. The second option in the menu is to remove a food item from the queue. This is done using the deque function, which removes the front item from the queue.

3. The third option is to display the current contents of the queue. This is done using the display function, which iterates over the queue and prints the item numbers and total prices.

4. The fourth option is to exit the program. This is done by calling the exit function, which terminates the program.

If the user enters an invalid choice (other than 1, 2, 3, or 4), an error message is displayed.

After each operation, the user is prompted to continue or exit the program. If the user chooses to continue, the loop repeats. Otherwise, the loop terminates, and the final contents of the queue are displayed along with a farewell message.

In conclusion, this code implements a basic restaurant management system that allows users to select food items, add them to a queue, and perform operations on the queue.



// headers for functionalities like current time console in out and system commands
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<time.h>
#include<conio.h>

// global variables
int a,i,j,item;
float total_1,total_2,total_3,total_4,total_5,total_6,total_7,total_8,total_9,total_10,total_11,total_12,total_13,total_14,total_15;


// struct define
struct que{
int front, rear ,size;
unsigned actual_size;
float *arr;

};



struct que* createque(unsigned actual_size)
{
 struct que* que =(struct que*)malloc(sizeof(struct que));
que->actual_size= actual_size;
que->front =que->rear=-1;
que->size=0;
que->arr=(int*)malloc(que->actual_size*sizeof(int));
return que;
};


int isempty(struct que*que)
{
    return(que->size=0);

}


void enque(struct que*que,int item)
{
     if(isfull(que))
        return;
     que->rear=que->rear+1;
     que->arr[que->rear]= item;
     que->size=que->size+1;
     if(que->front== -1)
        que->front++;
     printf("%d item added to queue \n",item);
}

int isfull(struct que*que)
{
    return(que->size==que->actual_size);
}


int  deque(struct que* que)
{
    if(isempty(que))
     return INT_MIN;
    int item =que->arr[que->front];
    if(que->front==que->rear){
        que->front =que->rear=-1;

    }
    else
        que->front=que->front+1;
    que->size=que->size-1;



printf("\n=========== BILL ========================          ");
switch(item)
{
case 1:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_1);
     break ;
case 2:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_2);
    break ;
case 3:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_3);
    break ;

case 4:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_4);
    break ;

case 5:
      printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_5);
      break ;

case 6:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_6);
       break ;

case 7:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_7);
       break ;
case 8:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_8);
       break ;
case 9:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_9);
       break ;
case 10:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_10);
       break ;
case 11:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_11);
       break ;
case 12:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_12);
       break ;
case 13:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_13);
       break ;
case 14:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_14);
       break ;
case 15:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_15);
       break ;
default:
    printf("\nnot yet ordered...order first\n");
}
printf("\n order %d is deleted \n",item);
printf("===================================          ");
    return item;


}




void display(struct que*que)
{

   if(isempty(que))
    printf("__queue is empty__");
    printf("\n>>> Displaying food orders in a queue");
     for(item=que->front;item<=que->rear;item++)
     printf("\n=====order queue is %.f======",que->arr[item]);

}





int main()
{
   int val,n,quantity;

   struct que*que =createque(1000);
   do
   {      printf("\n");
printf("            ##################################        \n");
printf("                 Restaurant Order Delivery              \n");
printf("            ##################################        \n");
  time_t t;   // not a primitive datatype
  time(&t);
  printf("\t\t %s", ctime(&t));
printf("             _________________________________         \n");

       printf("[1].Add an order:");
       printf("\n[2].delete an order and to get bill:");
       printf("\n[3].display orders queue: ");
       printf("\n[4].exit");
       printf("\n please enter your choice: ");
       scanf("%d",&n);
       switch(n)
       {
         case 1:
                  printf("\t        ==============================          \n");
                  printf("\t                    Food Menu   \n");
                  printf("\t        ==============================          \n");
printf("..BREAKFAST MENU..... \n");
printf("[1] Pancakes ------------------------------------------- Rs.210 \n");
printf("[2] Veg. Sandwich--------------------------------------- Rs.199 \n");
printf("[3] Aloo Paratha---------------------------------------- Rs.185 \n");
printf("[4] Dhokla-----------------------------------------------Rs.135  \n");
printf("[5] Poha------------------------------------------------- Rs.170 \n");
printf("..Lunch Menu.........   \n");
printf("[6] Paneer Butter Masala with paratha--------------------Rs. 275 \n");
printf("[7] Masala Dosa------------------------------------------ Rs.299 \n");
printf("[8]  Chicken -------------------------------------------- Rs.320 \n");
printf("[9] Sausage and Potato Casserole------------------------- Rs.400 \n");
printf("[10] Spring Rolls---------------------------------------- Rs.365 \n");
printf("..Dinner Menu........   \n");
printf("[11] Veg  Manchurian------------------------------------- Rs.260 \n");
printf("[12] Chili Chicken Tikka--------------------------------- Rs.460 \n");
printf("[13] Veg Biryani----------------------------------------- Rs.275 \n");
printf("[14] Egg cury with Rice --------------------------------- Rs.350 \n");
printf("[15] Sausage Burger-------------------------------------- Rs.300 \n");
            printf("\tchoose  your food item: ");
            scanf("%d",&a);

               switch(a)
               {
case 1:

                a==1 ;

               printf("\nIngredient : All-Purpose Flour,Sugar,Baking Powder,Teaspoon Salt,Ground Nutmeg,Eggs,Unsalted Butter,\n\n");
	       printf("\tEnter Quantity : ");
	       scanf("%d", &quantity);
            total_1 = 210 * quantity ;
            enque(que,a);
           break;
case 2:
           a==2;
            printf("\nIngredient : Bread slices, Boiled sweet corn, chopped Onions and Capsicums, Mayonaise, Butter, Oregano, Red chilli flakes, Processed Cheese\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		   total_2 =  199 * quantity ;
          enque(que,a);
            break ;
case 3:
                a==3;
                printf("\nIngredient : Mashed potatoes, Chopped Onions and coriander, Ginger-green chilli paste, Flour, Salt, Garam Masala\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total_3=  185 * quantity ;
              enque(que,a);
            break;
case 4:
            a==4;
            printf("\nIngredient : Atta, Baking soda, Vegetable oil, Ginger, Green chilli, Red chilli, Ajwain, Yogurt, Garlic, Salt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_4 = 135 * quantity ;
            enque(que,a);
            break ;
case 5:
            a==5;
            printf("\nIngredient : Poha, Onion, Oil, Peanuts, Salt, Turmeric Powder, Green chilli, Mustard seeds, Curry leaves\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_5 = 170 * quantity ;
            enque(que,a);
            break ;
case 6:
            a==6;
            printf("\nIngredient : Paneer, Onion and tomatoes, Cashews, Turmeric, Sugar, Cloves, Ginger, Salt, Red chilli, Cream, Cinnamon, Coriandar powder, Garam masala \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total_6= 275 * quantity ;
	      enque(que,a); isfull(que);isempty(que);
            break ;
case 7:
            a==7;
            printf("\nIngredient : Long Grain rice, Urad dal, Onions, Green chilli, Mustard seeds, Turmeric powder, coconut chutney, Sambar \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total_7 = 299 * quantity ;
		  enque(que,a);
            break ;
case 8 :
            a==8;
            printf("\nIngredient : Cumin, Chili Powder, Black Pepper, Olive Oil, Red Onion, Chicken, Quinoa, Black Beans, Avocado, Cheese, Lime Juice, Cilantro \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_8 = 320 * quantity ;
            enque(que,a);
            break;
case 9:
            a==9;
            printf("\nIngredient : Yellow bell peppers,green bell peppers,onion,Sausages,potato,Vegetable oil,salt,pepper,baked beans,Green chilli,Parsley \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_9 = 400 * quantity ;
            enque(que,a); isfull(que);isempty(que);
            break ;
case 10:
            a==10;
            printf("\nIngredient : Olive oil,small Spring onion bulbs,Green bell pepper,Tomato,Bread crumbs,Parmesan cheese,Ginger,Chives,mozzarella cheese,Balsamic vinegar,Corn flour,Basil leaves,Olive oil,Parmesan,Garlic,Chilly,Green olives,Mayonnaise/ yogurt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_10 = 365 * quantity ;
            enque(que,a);
            break ;
case 11:
            a==11;
           printf("\nIngredient : Corn flour, ginger, Spring onions, garlic, Salt, Soya sauce, Coriander, Vinegar, Chilli \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total_11 = 260 * quantity ;
	      enque(que,a);
            break;
case 12:
            a==12;
            printf("\nIngredient : Chili Powder, Cumin, Kosher Salt, Cinnamon, Lime Zest, Chicken-Thighs, Acorn Squash, Bell Pepper, Extra-Virgin Olive Oil, Lime Juice, Scallions, Cilantro \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total_12 = 460 * quantity ;
		  enque(que,a);
            break ;
case 13:
            a==13;
            printf("\nIngredient : Rice, Ginger, Green Chilli, Onion, Cashew, Peas, Mint leaves, Ghee, Carrot, Spices, Ghee \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_13 = 275 * quantity ;
            enque(que,a);
            break ;
case 14:
            a==14;
            printf("\nIngredient : Boiled eggs, Onions, Green chilli, Salt, Turmeric, Red chilli, Oil, Garlic Paste, peppercorns, Tomatoes, Cumin \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_14 = 350*quantity ;
            enque(que,a);
            break ;
case 15:
            a==15;
            printf("\nIngredient : Oil,onion,yellow bell pepper,capsicum,sausages,Salt,ginger,green chilli,soy sauce,chilli sauce,honey,rosemary,Burger buns,olive oil,Pepper,Lettuce leaves, tomato slices, cheese slices, jalapeno, gherkins. \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_15 = 300*quantity ;
            enque(que,a);
            break ;


            }

         break;
        case 2:

         deque(que);
         break;

        case 3:

            display(que);
            break;
        case 4:
            display(que);
            printf("\n\n\t=================FOS=================          ");
            printf("   \n         Thanks for choosing our restaurant\n\n");
            printf("             We hope to see you again!  \n");
            printf("\t======================================  \n");
            exit(0);
            break ;
        default:
        
        if(n!= 1,2,3,4)
        printf("\n invalid choice...");


    }
    
    
    printf("\n do you  want to continue(press->y)...");
   
   
   }

  
  
  
  
  while('y'==getch());
  display(que);
  printf("\n\n\t=================FOS=================          ");
  printf("   \n         Thanks for choosing our restaurant\n\n");
  printf("             We hope to see you again!  \n");
  printf("\t======================================  \n");

}
