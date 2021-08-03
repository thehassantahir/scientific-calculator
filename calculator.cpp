#include <iostream> //adding input output library 

//Starting body
using namespace std; //calling standard library  

#define PI 3.14159265 //defining custom variable


//----- OPENING NEW VAR FOR PI VALUES FROM CIRCLE --------
class Circle
{                     //starting open variable
	private:
		double radius;
	public:

		void setRadius(); //calling source data as it was written in file

		void computeAreaCirc();

		Circle();	

		~Circle();        //adding approximate value for the circle 

};
//----- CLOSED NEW VAR FOR PI VALUES FROM CIRCLE --------


//----- OPENED NEW VAR AREA FOR CIRLCE ------------------
Circle::Circle()  //Calculating radius
{
	radius = 0.0; //Defining values
}

void Circle::setRadius()

{
	radius = 5.6; // Defining values
}

void Circle::computeAreaCirc() //Calculating Circumference
{
    //printing area of circle
	cout << "Area of Circle is: " << PI * (radius * radius) << endl;

    //printing circumference of circle
	cout << "Circumference of Circle is: " << 2 * PI * radius << endl;
}
//------ CLOSING NEW VAR AREA OF CIRCLE ------------------


//------ OPENING NEW VAR OF RECTANGLE -------------------
Circle::~Circle()
{

}
class Rectangle //Adding new class for Rectangle
{
	private:
		double length; 
		double width;
	
	public:
		void setLength(); 
		void setWidth();
		void computeArea();
		
		Rectangle();
		~Rectangle(); //Estimating value for the rectangle
};
//------ CLOSED NEW VAR OF RECTANGLE -------------------


//------ OPENING NEW VAR FOR THE SIZE OF THE RECTANGLE --------
Rectangle::Rectangle()
{
	length = 0.0;  //Setting values
	width = 0.0;   //Setting values
}

void Rectangle::setLength()
{
	length = 5.0;
}

void Rectangle::setWidth()
{
	width = 4.0;
}

void Rectangle::computeArea()
{
    //Printing the Area of Rectangle
	cout << "Area of Rectangle: " << length * width << endl;	
}

Rectangle::~Rectangle() //estimating approx value of rectangle
{

}
//------ OPENING NEW VAR FOR THE SIZE OF THE RECTANGLE --------


//------ Starting Main body which will call out first ----------
main()
{
    //Adding print values
	cout<<"******************SCIENTIFIC CALCULATOR********************"<<endl;
	cout<<""<<endl;

	int run = 1;
	string option, 
	choice;
	
	//adding statments for selecting options
	while(run)
	{
        
        //Printing the values of the body
		cout << "\nOption 1 for Computing Area and Circumference of the Circle" << endl;

		cout << "Option 2 for Computing Area of the Rectangle" << endl;

		cout << "Select Your Desired Option (1-2): ";
		
		cin >> option;

		if(option == "1") //Stating switch statments for selecting options 
		{
			Circle nCircle;

			nCircle.setRadius();

			nCircle.computeAreaCirc();

			cout << "Do you want to perform any other Calculation(Y/N):";

			cin >> choice;

			if(choice == "Y" || choice == "y")

			{
				continue;
			}

			else
			
			{
				break;
			}

		}

		else if(option == "2")

		{

			Rectangle nRectangle;

			nRectangle.setLength();

			nRectangle.setWidth();

			nRectangle.computeArea();

			cout << "Do you want to perform any other Calculation(Y/N): ";

			cin >> choice;

			if(choice == "Y" || choice == "y")

			{
				continue;
			}

			else
			
			{
				break;
			}

		}

		else
		{
			cout << "Invalid Option!!, Option should be from (1-2)" << endl;
		}

	}
}

//END OF THE PROGRAM
