#include<iostream>
using namespace std;
int main()
{
    string fname,lname;
    double  age,weight,height,cardio,strength,yoga,totalexercisemins,breakfast,lunch,dinner,totalcalories,
    burnedcalories,netcalories,c,s,y,caloriegoal,waterglasses,hinm,BMI,sleep,stress;
    cout<<"Enter your  first name :"<<endl;
    cin>>fname;
    cout<<"Enter your last name :"<<endl;
    cin>>lname;
    cout<<"Hello Mr "<<fname<< ' '<<lname<<"\nWelcome to the Daily Health and Fitness Tracker System "<<endl;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    cout<<"Enter your weight :"<<endl;
    cin>>weight;
    cout<<"Enter your height :"<<endl;
    cin>>height;
    cout<<"Enter minutes for cardio exercise :"<<endl;
    cin>>cardio;
    cout<<"Enter minutes for strength training :"<<endl;
    cin>>strength;
    cout<<"Enter minutes for yoga :"<<endl;
    cin>>yoga;
    totalexercisemins=cardio+strength+yoga;
    cout<<"Total exercise minutes :"<<totalexercisemins<<endl;
    cout<<"Enter calories for breakfast :"<<endl;
    cin>>breakfast;
    cout<<"Enter calories for lunch :"<<endl;
    cin>>lunch;
    cout<<"Enter calories for dinner :"<<endl;
    cin>>dinner;
    totalcalories=breakfast+lunch+dinner;
    cout<<"Total Daily Calories :"<<totalcalories<<endl;
    
    c=8*cardio;
    s=5*strength;
    y=3*yoga;
    burnedcalories=c+s+y;
    cout<<"Burned Calories :"<<burnedcalories<<endl;
    netcalories=totalcalories-burnedcalories;
    cout<<"Net calories :"<<netcalories<<endl;
    cout<<"Daily calorie intake goal "<<endl;
    cin>>caloriegoal;
    if (caloriegoal==netcalories)
    {
       cout<<"You have balanced your calories "<<endl;
    }
    else if(caloriegoal<netcalories)
    {
        cout<<"You are deficit "<<endl;
    }
    else
    {
        cout<<"You need more exercise "<<endl;
    }
     cout<<"Water glasses consumed "<<endl;
     cin>>waterglasses;
    if(waterglasses>8)
    { 
   
        cout<<"Good! You are drinkig enough water "<<endl;
    }
    else
    {
        cout<<"You need to drink more water"<<endl;
    }
    int x;
    x=totalexercisemins/30;
    switch (static_cast<int>(x))
    {
    case 1:
        cout << "Low activity" << endl;
        break;
    case 2:
        cout << "Moderate activity" << endl;
        break;
    case 3:
        cout << "High activity" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
}
    hinm=height/100;
    BMI=weight/(hinm*hinm);
    cout<<"BMI: "<<BMI<<endl;
    if (BMI<18.5)
    {
        cout<<"Underweight "<<endl;
    }
    else if(BMI>=18.5 && BMI<=24.9)
    {
        cout<<"You are Healthy"<<endl;
    }
    else if (BMI>=25 && BMI<=29.9)
    {
        cout<<"You are overweight"<<endl;
    }
    else 
    {
        cout<<"You are obese "<<endl;
    }
    cout<<"Enter your sleep hours :"<<endl;
    cin>>sleep;
    if (sleep<3)
    {
        cout<<"You need rest!"<<endl;
    }
    else if (sleep>=3 && sleep<=6)
    {
        cout<<"Your sleep quantity is fair "<<endl;
    }
    else
    {
        cout<<"Well Rested!"<<endl;
    }
    cout<<"Enter your stress level :"<<endl;
    cin>>stress;
    if (stress<3)
    {
        cout<<"Optimal stress! No need to worry"<<endl;
    }
    else if (stress>=4 && stress<=6)
    {
       cout<<"Manage stress! You  need to see thrapiest"<<endl;
    }
    else if (stress>=7 && stress<=10)
    {
        cout<<"Prioritize relaxation \n Warning!You really need some rest and thrapy"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    cout<<"Summary :"<<endl;
    cout<<"Vital stats:"<<endl;
    cout<<"Age ="<<age<<endl;
    cout<<"Weight ="<<weight<<endl;
    cout<<"Height ="<<height<<endl;
    cout<<"Total Exercise Minutes :"<<totalexercisemins<<endl;
    cout<<"Net calories :"<<netcalories<<endl;
    cout<<"Hydration status :"<<endl;
    
        if(waterglasses>8)
   
     { 
        cout<<"Good! You are drinkig enough water "<<endl;
    }
    else
    {
        cout<<"You need to drink more water"<<endl;
    }
   if (BMI<18.5)
    {
        cout<<"Underweight "<<endl;
    }
    else if(BMI>=18.5 && BMI<=24.9)
    {
        cout<<"You are Healthy"<<endl;
    }
    else if (BMI>=25 && BMI<=29.9)
    {
        cout<<"You are overweight"<<endl;
    }
    else 
    {
        cout<<"You are obese "<<endl;
    }
   
    if (sleep<3)
    {
        cout<<"You need rest!"<<endl;
    }
    else if (sleep>=3 && sleep<=6)
    {
        cout<<"Your sleep quantity is fair "<<endl;
    }
    else
    {
        cout<<"Well Rested!"<<endl;
    }
    return 0;
}
