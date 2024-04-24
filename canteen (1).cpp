#include<iostream>
using namespace std;
class canteen{
	public:
	int id; string name; string namee[20];int quantity[20],price[20];int total_sale; string sold_name[20];int sold_quantity[20];
    void welcome();
    void show();
    void new_customer();
    void allItems();
    void soldItems();
    void addNewItem();
    void editItem();
    void deleteItem();
    void totalSale();
    void input();
};
canteen canteen1;
int main(){
	
	canteen1.welcome();
	canteen1.show();
	cout<<"Please Enter your choice ";
	int n;cin>>n;
   	if(n==1){ canteen1.new_customer();}

	if(n==2){ canteen1.allItems();}

	if(n==3){ canteen1.soldItems();}
	
	if(n==4){ canteen1.addNewItem();}

if(n==5){canteen1.editItem();}

	if(n==6){canteen1.deleteItem();}
	
	if(n==7){canteen1.totalSale();}
    if(n==8){ exit(0);}
	
	

}
void canteen::welcome()
{
    cout<<endl;
    cout<<"========================================================================="<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"****************  C A N T E E N   M A N A G E M E N T   *****************"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"***************************   S Y S T E M   *****************************"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"PROJECT : "<<endl;
    cout<<"MADE BY :    Anas        "<<endl;
    cout<<"             Darak         "<<endl;
    cout<<"             Moawwaz        "<<endl;
    cout<<"             Ismail        "<<endl;
    cout<<"             Maryam        "<<endl;
    cout<<endl;
    cout<<"----             Lahore Garrison University            ----"<<endl;
    cout<<"========================================================================="<<endl;
    
}
void canteen::show()  
{
    cout << "\nCanteen Management System" << "\n\n";

    cout << "MAIN MENU" << endl;

    cout << "1.New Customer" << endl;
    cout << "2.All Items" << endl;
    cout << "3.Sold Items" << endl;
    cout << "4.Add New Item" << endl;
    cout << "5.Edit Item" << endl;
    cout << "6.Delete Item" << endl;
    cout << "7.Total Sale" <<endl;
    cout << "8.Exit" << endl;

}
void canteen::new_customer(){
       
	   cout<<"Enter name of the customer ";
	   cin>>canteen1.name;
	   cout<<"Enter ID of the customer ";
	   cin>>canteen1.id;
	   cout<<"Customer created successfully \n";
	   canteen1.input();	
}
void canteen::addNewItem(){
	cout<<"How many records you want to enter ";int x;cin>>x;
	for(int i=0;i<x;i++){
		cout<<"Enter the Name ";cin>>canteen1.namee[i];
		cout<<"Enter the quantity ";cin>>canteen1.quantity[i];
		cout<<"Enter the price ";cin>>canteen1.price[i];
		
	}canteen1.input();
}
void canteen::soldItems(){
	cout<<"How many sold items you want to enter ";int s;cin>>s;
	for(int i=0;i<s;i++){
	
	cout<<"Enter the name of sold item no "<<i<<endl;
	cin>>canteen1.sold_name[i];
	cout<<"Enter the number of items which are sold of the item no "<<i<<endl;
	cin>>canteen1.sold_quantity[i];
	
	}	canteen1.input();
}
void canteen::allItems(){
	cout<<" The all items entered are these: \n";
	cout<<"Name"<<"\t"<<"Quantity"<<"\t"<<"Price"<<endl;
	for(int i=0;i<20;i++){
	if(canteen1.namee[i].empty()){ break;}
	else{
	
	
	cout<<canteen1.namee[i]<<"\t"<<canteen1.quantity[i]<<"\t"<<"\t"<<canteen1.price[i]<<endl<<endl;} }
	cout<<"\n The Total Sale is "<<cout<<canteen1.total_sale<<endl;
	canteen1.input();
}
void canteen::editItem(){
	cout<<"Which record you want to edit kindly enter ";int z;cin>>z;
	cout<<"Enter the Name ";cin>>canteen1.namee[z];
		cout<<"Enter the quantity ";cin>>canteen1.quantity[z];
		cout<<"Enter the price ";cin>>canteen1.price[z];
		cout<<" The item is successfully edited \n";
	canteen1.input();
}
void canteen::deleteItem(){
	cout<<"Which record you want to delete kindly enter ";int d;cin>>d;
	/*//canteen1.namee[d].erase();
	int tot=5;
 for(int i=0; i<tot; i++)
    {
        if(canteen1.namee[i]==d)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }*/
		
	
	canteen1.input();
}
void canteen::totalSale(){
	cout<<"Enter Total Sale ";
	cin>>canteen1.total_sale;
	canteen1.input();
}
void canteen::input(){
		cout<<" Kindly again Enter your choice ";
	int n;cin>>n;
      	if(n==1){ canteen1.new_customer();}

	if(n==2){ canteen1.allItems();}

	if(n==3){ canteen1.soldItems();}
	
	if(n==4){ canteen1.addNewItem();}
if(n==5){canteen1.editItem();}
	if(n==6){canteen1.deleteItem();}
	
	if(n==7){canteen1.totalSale();}
    if(n==8){ exit(0);}
}

