#include <iostream>
#include <iomanip>  // For std::setprecision

using namespace std;

int main() {
    // Variables to store the original price in USD, exchange rate, discount percentage, and final price in IDR
    double originalPriceUSD;
    double exchangeRate = 15000.0; // Example exchange rate: 1 USD = 15,000 IDR
    double discountPercentage;
    double originalPriceIDR;
    double finalPriceIDR;

    // Get the original price in USD from the user
    cout << "Enter the original price in USD: $";
    cin >> originalPriceUSD;

    // Get the discount percentage from the user
    cout << "Enter the discount percentage: ";
    cin >> discountPercentage;

    // Convert the original price from USD to IDR
    originalPriceIDR = originalPriceUSD * exchangeRate;

    // Calculate the final price after applying the discount
    finalPriceIDR = originalPriceIDR - (originalPriceIDR * (discountPercentage / 100));

    // Set the precision for output
    cout << fixed << setprecision(2);

    // Display the original price, discount percentage, and final price in IDR
    cout << "Original Price in IDR: IDR " << originalPriceIDR << endl;
    cout << "Discount Percentage: " << discountPercentage << "%" << endl;
    cout << "Final Price after Discount in IDR: IDR " << finalPriceIDR << endl;

    return 0;
}
