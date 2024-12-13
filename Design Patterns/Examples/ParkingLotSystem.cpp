#include <iostream>
#include <string>
// #include <bits/stdc++.h>
using namespace std;

enum PaymentStatus{
    Completed,
    Failed,
    Pending,
    Unpaid,
    Refunded
};
enum AccountStatus{
    Active,
    Closed,
    Blacklisted,
    None
};
enum TicketStatus{

};

class ParkingSpot{
    private:
        int id;
        bool isFree;
        Vehicle *vehicle; //depicting composition -> this vehicle is standing here.
    public:
        virtual bool getIsFree() = 0;
};

class Vehicle{
    private:
        int liscenceNumber;
    public:
        virtual string getTicket() = 0;
};

class Handicapped : public ParkingSpot{
    public:
        bool getIsFree(){
            return false;
        }
};
class Compact : public ParkingSpot{
    public:
        bool getIsFree(){
            return false;
        }

};
class Large : public ParkingSpot{
    public:
        bool getIsFree(){
            return false;
        }
};
class MotorCycle : public ParkingSpot{
    public:
        bool getIsFree(){
            return false;
        }
};

class Car: public Vehicle{
    public:
    string getTicket(){
        return "I got my ticket";
    }
};
class Truck: public Vehicle{
    public:
    string getTicket(){
        return "I got my ticket";
    }
};
class Van: public Vehicle{
    public:
    string getTicket(){
        return "I got my ticket";
    }
};
class MotoCycleVehicle: public Vehicle{
    public:
    string getTicket(){
        return "I got my ticket";
    }
};

class ParkingTicket{
    private:
        int ticketNumber;
        string entryTimestamp; 
        string exitTimestamp;
        double amount;
        bool status; //replace this bool from TicketStatus enum
        Vehicle *vehicle;
        Payment *payment;
        Entrance *ent;
        Exit *exit;
    public:

};

class Entrance{
    private:
        int id;
    public:
        void validateTicket(){};

};
class Exit{
    private:
        int id;
    public:
        void validateTicket(){};
};

class Payment{
    private:
        string transactionId;
        double amount;
        PaymentStatus status;
        string timestamp;
    public:
        virtual bool initiateTransaction()=0;
};
class Cash: public Payment{
    bool initiateTransaction(){
        //add your logic
        return true;
    }
};
class Card: public Payment{
    bool initiateTransaction(){
        //add your logic
        return true;
    }
};

class ParkingRate{
    
};