#include <stdio.h>

void main() {
    int seats[10] = {0}, choice, seatNum;

    while(1) {
        printf("\n--- Ticket Booking System ---\n1. View Seats\n2. Book a Seat\n3. Cancel Booking\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Seats: ");
                for(int i=0; i<10; i++) printf("[%d: %s] ", i+1, seats[i] == 1 ? "Booked" : "Available");
                printf("\n"); break;
            case 2:
                printf("Enter seat number (1-10) to book: "); scanf("%d", &seatNum);
                if(seatNum < 1 || seatNum > 10) printf("Invalid seat!\n");
                else if(seats[seatNum-1] == 1) printf("Seat already booked!\n");
                else { seats[seatNum-1] = 1; printf("Seat %d booked successfully!\n", seatNum); }
                break;
            case 3:
                printf("Enter seat number (1-10) to cancel: "); scanf("%d", &seatNum);
                if(seatNum < 1 || seatNum > 10) printf("Invalid seat!\n");
                else if(seats[seatNum-1] == 0) printf("Seat is not booked yet!\n");
                else { seats[seatNum-1] = 0; printf("Seat %d cancelled successfully!\n", seatNum); }
                break;
            default: printf("Invalid choice!\n");
        }
    }
}