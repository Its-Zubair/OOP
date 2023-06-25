#include <iostream>
using namespace std;


class Employee {
		protected:
				 int emp_id;
				 char* name;
				 char* contact;

			 public:

				 Employee(){}
				 Employee(int id , char* n , char* c) {
					 emp_id = id;


					 int length = strlen(n);

					 name = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 name[i] = n[i];
					 }
					 name[length] = '\0';

					 int length1 = strlen(c);

					 contact = new char[length1 + 1];
					 for (int i = 0; i < length1; i++)
					 {
						 contact[i] = c[i];
					 }
					 contact[length1] = '\0';

				 }
				 void setId(int id) 
				 {
					 emp_id = id;
				 }
				 void setName(char* n) 
				 {
					 int length = strlen(n);

					 name = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 name[i] = n[i];
					 }
					 name[length] = '\0';
				 
}
				 void setContact(char* c) 
				 {
					 int length = strlen(c);

					 contact = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 contact[i] = c[i];
					 }

					 contact[length] = '\0';
				 }
				 int getId()
				 { 
					 return emp_id; 
				 }
				 char* getName()
				 { 
					 return name; 
				 }
				 char* getContact()
				 {
					 return contact;
				 }

				 ~Employee(){
					 delete[]name;
					 name = nullptr;
					 delete[]contact;
					 contact = nullptr;
				 }
};

			
class Developer : public Employee {
			 private:
				 int projectsCompleted;
				 char* domain;
				 char* techStack;
			 public:

				 Developer(){}
				 Developer(int id, char* n, char* c, int pc, char* d, char* ts) : Employee(id, n, c) {
					 projectsCompleted = pc;

					 int length = strlen(d);

					 domain = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 domain[i] = d[i];
					 }
					 domain[length] = '\0';


					 int length2 = strlen(ts);

					 techStack = new char[length2 + 1];
					 for (int i = 0; i < length2; i++)
					 {
						 techStack[i] = ts[i];
					 }
					 techStack[length2] = '\0';
				 }

				 void setProjects(int pc)
				 {
					 projectsCompleted = pc; 
				 }
				 void setDomain(char* d) 
				 {
				
					 int length = strlen(d);

					 domain = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 domain[i] = d[i];
					 }
					 domain[length] = '\0';

				 }
				 void setTechStack(char* ts) 
				 {
					 int length = strlen(ts);

					 techStack = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 techStack[i] = ts[i];
					 }
					 techStack[length] = '\0';
				 };

				 int getProjects() 
				 { 
					 return projectsCompleted; 
				 }
				 char* getDomain() { 
					 return domain; 
				 }
				 char* getTechStack() 
				 { 
					 return techStack;
				 }
				 void showDevInfo() {
					 cout << "Employee ID: " << emp_id << endl;
					 cout << "Name: " << name << endl;
					 cout << "Contact: " << contact << endl;
					 cout << "Projects Completed: " << projectsCompleted << endl;
					 cout << "Domain: " << domain << endl;
					 cout << "Tech Stack: " << techStack << endl;
				 }

~				 Developer()
				 {
					 delete[]domain;
					 domain = nullptr;
					 delete[]techStack;
					 techStack = nullptr;
				 }


			 };

			 class Doctor : public Employee {
			 private:
				 char* specialty;
				 char* hospital;
				 int consCharges;
			 public:

				 Doctor()
				 {

				 }
				 Doctor(int id, char* n, char* c, char* s, char* h, int cc) : Employee(id, n, c) {
					

					 int length = strlen(s);

			      specialty = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 specialty[i] = s[i];
					 }
					 specialty[length] = '\0';


					 int length3 = strlen(h);

					 hospital = new char[length3 + 1];
					 for (int i = 0; i < length3; i++)
					 {
						 hospital[i] = h[i];
					 }
					 hospital[length3] = '\0';
					 
					 consCharges = cc;
				 }
				 void setSpecialty(char* s) {
					 int length = strlen(s);

					 specialty = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 specialty[i] = s[i];
					 }
					 specialty[length] = '\0';

				 }
				 void setHospital(char* h) {
					
					 int length = strlen(h);

					 hospital = new char[length + 1];
					 for (int i = 0; i < length; i++)
					 {
						 hospital[i] = h[i];
					 }
					 hospital[length] = '\0';
				 }
				 void setConsCharges(int cc)
				 {
					 consCharges = cc;
				 }
				 char* getSpecialty() 
				 {
					 return specialty; 
				 }
				 char* getHospital() {
					 return hospital;
				 }
				 int getCharges() { 
					 return consCharges; 
				 }
				 void showDocInfo() {
					 cout << "Employee ID: " << emp_id << endl;
					 cout << "Name: " << name << endl;
					 cout << "Contact: " << contact << endl;
					 cout << "Specialty: " << specialty << endl;
					 cout << "Hospital: " << hospital << endl;
					 cout << "Consultation Charges: " << consCharges << endl;
				 }

				 ~Doctor()
				 {
					 delete[]specialty;
					 specialty = nullptr;
					 delete[]hospital;
					 hospital = nullptr;

				 }
			 };

			 int main() {
				 
				 Developer dv_obj;
				 dv_obj.setId(1);
				 dv_obj.setName("Zubair");
				 dv_obj.setContact("4839583400");
				 dv_obj.setProjects(9);
				 dv_obj.setDomain("Web");
				 dv_obj.setTechStack("NO");
				 dv_obj.showDevInfo();

				 Doctor dct_obj;
				 dct_obj.setId(2);
				 dct_obj.setName("DEATH");
				 dct_obj.setContact("093004059");
				 dct_obj.setSpecialty("Neurologist");
				 dct_obj.setHospital("Hospital");
				 dct_obj.setConsCharges(90);
				 dct_obj.showDocInfo();

			
				 Developer dv_obj2(3, "THOMAS SHELBY", "689000", 12, "Smallheath", "BIrmingham");
				 dv_obj2.showDevInfo();

				 system("pause");
				 return 0;
			 }