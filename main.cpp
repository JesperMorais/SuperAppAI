#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>

std::vector<std::string> healthMessages = {
    "Remember to drink plenty of water today!",
    "Take a break and go for a walk to get some fresh air.",
    "Eat a balanced diet with plenty of fruits and vegetables.",
    "Get a good night's sleep for better overall health.",
    "Don't forget to stretch and exercise regularly.",
    "Practice mindfulness or meditation to reduce stress.",
    "Avoid excessive consumption of sugary or processed foods.",
    "Make time for activities that bring you joy and relaxation.",
    "Stay connected with loved ones for emotional well-being.",
    "Listen to your body and give it the rest it needs."
};

std::string generateHealthMessage() {
    // Get the current date
    std::time_t now = std::time(0);
    std::tm* currentDate = std::localtime(&now);

    // Use the day of the year as the index for the health message
    int dayOfYear = currentDate->tm_yday;
    return healthMessages[dayOfYear % healthMessages.size()];
}

int main() {
    // Generate the daily health message
    std::string healthMessage = generateHealthMessage();

    // Print the health message
    std::cout << "Daily Health Message: " << healthMessage << std::endl;

    return 0;
}
