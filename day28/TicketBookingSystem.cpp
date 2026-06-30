#include <iostream>
using namespace std;

// Simple ticket booking system with seat availability tracking
int main() {
    const int TOTAL_SEATS = 10;
    bool seats[TOTAL_SEATS] = {false}; // false = available, true = booked
    int choice;

    do {
        cout << "\n----- Ticket Booking System -----\n";
        cout << "1. View Available Seats\n";
        cout << "2. Book a Seat\n";
        cout << "3. Cancel a Seat\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Available seats: ";
                for (int i = 0; i < TOTAL_SEATS; i++) {
                    if (!seats[i]) cout << (i + 1) << " ";
                }
                cout << endl;
                break;
            }
            case 2: {
                int seatNo;
                cout << "Enter seat number to book (1-" << TOTAL_SEATS << "): ";
                cin >> seatNo;
                if (seatNo < 1 || seatNo > TOTAL_SEATS) {
                    cout << "Invalid seat number." << endl;
                } else if (seats[seatNo - 1]) {
                    cout << "Seat already booked." << endl;
                } else {
                    seats[seatNo - 1] = true;
                    cout << "Seat " << seatNo << " booked successfully." << endl;
                }
                break;
            }
            case 3: {
                int seatNo;
                cout << "Enter seat number to cancel: ";
                cin >> seatNo;
                if (seatNo < 1 || seatNo > TOTAL_SEATS) {
                    cout << "Invalid seat number." << endl;
                } else if (!seats[seatNo - 1]) {
                    cout << "Seat is not booked." << endl;
                } else {
                    seats[seatNo - 1] = false;
                    cout << "Booking cancelled for seat " << seatNo << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting Ticket Booking System." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
