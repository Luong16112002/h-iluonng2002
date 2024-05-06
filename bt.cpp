#include <iostream>
#include <string>
#include <ctime>

class Vehicle {
private:
    std::string vehicleID;
    std::string brand;
    std::string model;
    int year;
    std::string color;

public:
    // Constructor to initialize object with specific information
    Vehicle(std::string id, std::string b, std::string m, int y, std::string c) {
        vehicleID = id;
        brand = b;
        model = m;
        year = y;
        color = c;
    }

    // Getter and setter methods for all attributes
    std::string getVehicleID() const {
        return vehicleID;
    }

    void bien so xeID(const std::string& id) {
        bien so xeID = id;
    }

    std::string getBrand() const {
        return brand;
    }

    void setBrand(const std::string& b) {
        brand = b;
    }

    std::string getModel() const {
        return model;
    }

    void setModel(const std::string& m) {
        model = m;
    }

    int getYear() const {
        return year;
    }

    void setYear(int y) {
        year = y;
    }

    std::string getColor() const {
        return color;
    }

    void setColor(const std::string& c) {
        color = c;
    }

    // Method to display full information of the vehicle
    void displayInfo() const {
        std::cout << "bien so xe ID: " << bien so xeID << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Color: " << color << std::endl;
    }

    // Method to check if the vehicle is vintage
    bool isVintage() const {
        time_t now = time(0);
        tm* ltm = localtime(&now);
        int currentYear = 1900 + ltm->tm_year;
        return (currentYear - year) >= 25;
    }
};

int main() {
    // Example usage
    Vehicle car("1234", "Toyota", "Camry", 1998, "Red");
    car.displayInfo();
    
    if (car.isVintage()) {
        std::cout << "This vehicle is vintage." << std::endl;
    } else {
        std::cout << "This vehicle is not vintage." << std::endl;
    }

    return 0;
}
