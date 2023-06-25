#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class driver
{
private:

	string name = NULL;
	string contact = NULL;
	string address = NULL;
	string cnic = NULL;
	int trip;
	float rating;

public:

	driver()
	{
	}

	void setname(string name1)
	{
		name = name1;

	}
	void  setcontact(string contact1)
	{

		contact = contact1;
	}
	void setaddress(string address1)
	{

		address = address1;

	}
	void setCNIC(string cnic1)
	{

		cnic = cnic1;

	}
	void  settrips(int  trip1)
	{
	   trip = trip1;


	}
	void  setrating(float rating1)
	{
		rating = rating1;

	}

	string  getname() const
	{
		return name;
	}

	string getcontact() const
	{
		return contact;

	}

	string getaddress() const
	{
		return address;
	}

	string getcnic() const 
	{
		return cnic;
	}

	int gettrip() const
	{
		return trip;
	}

	float getrating() const
	{
		return rating;
	}

	void displaydriver()
	{

		cout << "Driver name : " << name << endl;
		cout << "Driver contact : " << contact << endl;
        cout << "Driver address : " << address << endl;
		cout << "Driver cnic : " << cnic << endl;
		cout << "Driver trips : " << trip << endl;
		cout << "Driver rating : " << rating << endl;
	}

};


class rider 
{
private:

	string ridername = NULL;
	string ridercontact = NULL;
	float riderrating = NULL;
	int ridercancelled = NULL;
public :
	rider()
	{
		
	}

	void setridername(string name1r)
	{
		ridername = name1r;

	}
	void  setridercontact(string contact1r)
	{

		ridercontact = contact1r;
	}

	void  setriderrating(float rating1r)
	{
		riderrating = rating1r;

	}
	void  setcancelled(int cancelled1r)
	{
		ridercancelled = cancelled1r;

	}

	string getridername() const
	{
		return ridername;
	}

	string getridercontact() const
	{
		return ridercontact;
	}

	float getriderrating() const
	{
		return riderrating;
	}

	int getcancelled() const
	{
		return ridercancelled;
	}

	void displayrider()
	{

		cout << "Rider name : " << ridername << endl;
		cout << "Rider contact : " << ridercontact << endl;
		cout << "Rider rating : " << riderrating << endl;
		cout << "Rider cancelled : " << ridercancelled << endl;
  
	}

};

class ride
{ 
   private :
	   string pickup = NULL;
	   string destination = NULL;
	   string vehicalnum = NULL;
	   int id = 0;
	   string category = NULL;
	   float fare;
	   float kmcharge = 0;
	   float mincharge = 0;
	   int distance_covered = 10;
	   float faredist;
	   float faretime;
	   float total=0;
	   string promo;
	   int start_time = 0;
	   int end_time = 0;
	   int total_time = 0;
	   bool check = false;
	   driver objd;
	   rider  objr;
	   

public:

	ride()
	{
		cout << "default constructor";
	}


	void setpickuplocation(string pickup1)
	{
		pickup = pickup1;
	}
	void setdestination(string dest)
	{
		destination = dest;
	}
	void  setvehiclenumber(string num)
	{
		vehicalnum = num;
	}
	void  settrackingid(int id1)
	{
		id = id1;
	}
	void setcategory(string category1)
	{
		category = category1;
	}
	void setbasefare(float fare1)
	{
		fare = fare1;
	}
	void setperkmcharges(float km)
	{
		kmcharge = km;
	}
	void setpermincharges(float min)
	{
		mincharge = min;
	}
	void setpromocode(string promo1)
	{
		promo = promo1;
	}
	void setstarttime(int time)
	{
		start_time = time;
	}
	void setendtime(int time1)
	{
		end_time = time1;
	}
	
     void discount()
	{
		if (promo == "pk8976")
		{
			check = true;
		}
		else
		{
			check = false;
		}

	}

	void totaltime()
	{
		total_time = start_time - end_time;
    
	}

	void categorycheck()
	{
		if (category == "bike")
		{
			setbasefare(60);
			setperkmcharges(3.67);
			setpermincharges(6.17);
		}

		else if (category == "auto")
		{
			setbasefare(50);
			setperkmcharges(12.09);
			setpermincharges(2.79);
		}

		else if (category == "mini")
		{
			setbasefare(65);
			setperkmcharges(8.13);
			setpermincharges(3.63);
		}

		else if (category == "go")
		{
			setbasefare(80);
			setperkmcharges(10.16);
			setpermincharges(4.54);
		}
		else if (category == "uberx")
		{
			setbasefare(100);
			setperkmcharges(15.16);
			setpermincharges(8.54);
		}

		else
		{
			cout << "Invalid Input !" << endl;
		}

	}

	void calculatebill()
	{
		if (check == true)
		{
			faretime = mincharge * total_time;
			faredist = kmcharge * distance_covered;
			total = fare + faretime+ faredist ;
			total = (total - 25/100) ;
		}

		else if (check == false)
		{
			faretime = mincharge * total_time;
			faredist = kmcharge * distance_covered;
			total = fare + faretime + faredist;
		}

	}

	void display()

	{

		cout << "total fare : " << total << endl;
		cout << "fare of distance :" << faredist << endl;
		cout << "fare of time :" << faretime << endl;
		
		if (check == true)
		{
			cout << "you got 25 % discount";
		}
	    
		if (check == false)
		{
			cout << "you didnt got 25 % discount";
		}


		objd.displaydriver();
		objr.displayrider();

	}

};


int main()

{
	driver d;
	rider r;
	ride ri;

	string category;
	string pickup;
	string drop;
	string promo;
	int s_time;
	int e_time;

	d.setname("Ahmad");
	d.setcontact("1727373828");
	d.setaddress("Lahore");
	d.setCNIC("35201-6372783-9");
	d.setrating(4.5);
	d.settrips(197);

	r.setridername("Zubair");
	r.setridercontact("03334416728");
	r.setriderrating(5);
	r.setcancelled(1);


	cout << " Enter category for ride :" << endl;
	cin >> category;
	ri.setcategory(category);
	cout << " Enter pickup location :" << endl;
	cin >> pickup;
	ri.setpickuplocation(pickup);

	cout << " Enter destination :" << endl;
	cin >> drop;
	ri.setdestination(drop);
	ri.setvehiclenumber("LEV2678");
	ri.settrackingid(16728);

	cout << "Enter promo code : ";
	cin >> promo;
	ri.setpromocode(promo);

	cout << "starting time :";
	cin >> s_time;
	ri.setstarttime(s_time);

	cout << "starting time :";
	cin >> e_time;
	ri.setendtime(e_time);


	system("pause");
	return 0;
}