/*
 Write a C++ program to create a class District. Having district_code, district_name, area_sqft, population, literacy_rate. For displaying details use appropriate manipulators. The program should contain following menu:

  a. Accept details of 'n district
  b. Display details of district.
  e. Display details of district having highest literacy rate.
  d. Display details of district having least population.

*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class District
{  
  int dist_code;
  string dist_name;
  float area;
  int population;
  float literacy_rate;

  public:
  
  void setDetails(int code,string name,float area,int population,float literacy)
  {
       this->dist_code=code;
       this->dist_name=name;
       this->area=area;
       this->population=population;
       this->literacy_rate=literacy;
       
  }

  void displayDetails()
  {
     cout<< left << setw(10)<<this->dist_code;
     cout<< left << setw(10)<<this->dist_name;
     cout<< left << setw(10)<< setprecision(4)<<this->area;
     cout<< left << setw(10)<<this->population;
     cout<< left << setw(10)<< setprecision(5)<<this->literacy_rate;
  }

  int maxLiteracy_rate()
  {  static int max;
      if(this->literacy_rate >=max)
        max = this->literacy_rate;
      return max;
  }

  int low_population()
  {  static int low = 92233720;
      if(this->population < low)
        low = this->population;
      return low;
  }

  int check_max(int max)
  {
    if(this->literacy_rate == max)
    return 1;
  }

  int check_minimum_population(int low)
  {
    if(this->population== low)
    return 1;
  }

  
};

int main()
{
  
  int n,max=0,result=0,res=0,low=0;
  int code;
  string name;
  float area;
  int population;
  float literacy;


    cout<<"enter number of district"<<endl;
    cin>>n;

District dist[n];
    
    for(int i=0;i<n;i++)
     {
      cout<<"Enter the dist code ,area of district,population of district and literacy rate"<<endl;
    cin>>code>>name>>area>>population>>literacy;

    dist[i].setDetails(code,name,area,population,literacy);
    

    }

 cout<<endl<<"Details are:"<<endl;
 for(int i=0;i<n;i++)
     {  cout<<"details of "<< i+1 <<"district:"<<endl;
        dist[i].displayDetails();
     }
  
   for(int i=0;i<n;i++)
     {  
       max = dist[i].maxLiteracy_rate();
     }
  cout<< endl << "details of district having maximum literacy rate : "<<endl;
  for(int i=0;i<n;i++)
    {
       result =dist[i].check_max(max);
  
       if(result == 1)
        {
           dist[i].displayDetails();
        }
    }

   for(int i=0;i<n;i++)
     {  
       low = dist[i].low_population();
     }

 cout<< endl << "details of low population district: "<<endl;
   for(int i=0;i<n;i++)
    {
       res =dist[i].check_minimum_population(low);
  
       if(res == 1)
        {
           dist[i].displayDetails();
        }
    }


  return 0;
}
