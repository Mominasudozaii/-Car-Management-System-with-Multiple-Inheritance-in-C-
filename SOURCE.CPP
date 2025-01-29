#include <iostream>
#include <string>
using namespace std;
//momina haroon 
class Car {
private:               //1
    string PlateNo;
    string Color;
    string Model;
    string Make;
    public:
    void setData();
	void printData();
	Car() {
    cout << "This is Super Class i.e. Car" << endl;}}; 
void Car::setData(){
    cout<<"Enter Plate No: ";
    cin>>PlateNo;
    cout<<"Enter Color: ";
    cin>>Color;
    cout<<"Enter Model: ";
    cin>>Model;
    cout<<"Enter Make: ";
    cin>>Make;} 
void Car::printData() {
    cout << "Plate No: " << PlateNo << endl;
    cout << "Color: " << Color << endl;
    cout << "Model: " << Model << endl;
    cout << "Make: " << Make << endl;}
    class ElectricCar:public Car {      //2
    private:
    int MaxSpeed;
    int LoadCapacity;
    public:
    ElectricCar() {
    cout<<"This is Child Class this is ElectricCar"<<endl;}
    void ElSet();
    void ElGet();};
void ElectricCar::ElSet(){
    setData();
    cout << "Enter Max Speed: ";
    cin >> MaxSpeed;
    cout << "Enter Load Capacity: ";
    cin >> LoadCapacity;}
void ElectricCar::ElGet(){
    printData();
    cout<<"Max Speed: "<<MaxSpeed<<endl; 
    cout<<"Load Capacity: "<<LoadCapacity<<endl;}
	class BatteryCar : public Car {         //3
    private:
    int MaxSpeed;
    int LoadCapacity;
    public:
    BatteryCar() {
    cout<<"This is Child Class i.e. BatteryCar"<<endl;}
    void BSet();
    void BGet();};
void BatteryCar::BSet(){
    setData();
    cout<<"Enter Max Speed: "; 
    cin>>MaxSpeed; 
    cout<<"Enter Load Capacity: "; 
    cin>>LoadCapacity;}
void BatteryCar::BGet(){
    printData();
    cout<<"Max Speed: "<<MaxSpeed<<endl; 
    cout<<"Load Capacity: "<<LoadCapacity<<endl;}
    class EngineCar : public Car {         //4
    private:
    int MaxSpeed;
    int LoadCapacity;
    public:
    EngineCar() {
    cout<<"This is Child Class i.e. EngineCar"<<endl;}
    void Eset();
    void Eget();};
void EngineCar::Eset(){
    setData();
    cout << "Enter Max Speed: ";
    cin >> MaxSpeed;
    cout << "Enter Load Capacity: ";
    cin >> LoadCapacity;}
void EngineCar::Eget(){
    printData();
    cout<<"Max Speed: "<<MaxSpeed<<endl; 
    cout<<"Load Capacity: "<<LoadCapacity<<endl;}
	class HybridCar : public BatteryCar, public EngineCar      //5
	{   
	private:
	string maxspeed;
	string loadcapacity;
	public:
	HybridCar() {
    cout << "This is Child Class i.e. HybridCar" << endl;}
	void Hset();
	void Hget();};
    void HybridCar::Hset(){
	BSet();
	Eset();
	cout<<"Enter the Max-speed of your Hybrid car ";	    
	cin>>maxspeed;
	cout<<"Enter Load Capacity of your Hybrid car ";    
	cin>>loadcapacity;}
    void HybridCar::Hget(){
	BGet();
	Eget();
	cout<<"\nMax-speed of your Hybrid car "<<maxspeed;
	cout<<"\nLoad Capacity of your Hybrid car "<<loadcapacity;}	
    int main() {
    int choice;
    cout << "In which class you want to enter data? Press No. 1-5:" << endl;
    cout << "[1] Car" << endl;
    cout << "[2] Electric Car" << endl;
    cout << "[3] Battery Car" << endl;
    cout << "[4] Engine Car" << endl;
    cout << "[5] Hybrid Car" << endl;
	cin >> choice;
	if (choice < 1 || choice > 5) {
    cout << "Invalid choice!" << endl;
    return 1;}
    int numRecords;
    cout << "How many number of records you want to enter: ";
    cin >> numRecords;
    switch (choice) {
    case 1:{
    Car car;
    for (int i = 0; i < numRecords; i++) {
    cout << "Enter data for Car " << i + 1 << ":" << endl;
    car.setData();
    cout << endl;
    cout << "\nData for Car " << i + 1 << ":" << endl;
    car.printData();
    cout << endl;}
    break;}
    case 2: {
	ElectricCar electricCar;
    for (int i = 0; i < numRecords; i++) {
    cout << "Enter data for Electric Car " << i + 1 << ":" << endl;
    electricCar.ElSet();
    cout<<endl; 
    cout<<"\nData for Electric Car "<<i+1<<":"<<endl; 
    electricCar.ElGet(); 
    cout<<endl;}
    break;}
    case 3: {
    BatteryCar batteryCar;
    for (int i = 0; i < numRecords; i++) {
    cout<<"Enter data for Battery Car "<<i+1<<":"<<endl; 
    batteryCar.BSet(); 
    cout<<endl; 
    cout<<"\nData for Battery Car "<<i+1<<":"<<endl; 
    batteryCar.BGet(); 
    cout<<endl;}
    break;}
    case 4: {
    EngineCar engineCar;
    for (int i = 0; i < numRecords; i++) {
    cout<<"Enter data for Engine Car "<<i+1<<":"<<endl;
    engineCar.Eset(); 
	cout<<endl;
    cout<<"\nData for Engine Car "<<i+1<<":"<<endl;
	engineCar.Eget(); 
	cout<<endl;}
    break;}
    case 5: {
    HybridCar hybridCar;
    for (int i = 0; i < numRecords; i++) {
    cout<<"Enter data for Hybrid Car "<<i+1<<":"<<endl;
	hybridCar.Hset(); 
    cout<<endl;
    cout<<"\nData for Hybrid Car "<<i+1<<":"<<endl;
    hybridCar.Hget(); 
	cout<<endl;}
    break;}
	default:{
    cout << "Invalid choice!" << endl;}}}
