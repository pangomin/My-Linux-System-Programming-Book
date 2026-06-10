    struct invStruct {
    char manuf[25]; // Manufacturer name
    char model[15]; // Model code
    int diskSpace; // Disk size in Gigabytes
    int memSpace; // Memory Space in Gigabytes
    int ports; // The number of USB ports on the system
    int quantity; // Number in inventory
    float cost; // Cost of computer
    float price; // Retail price of computer
    };

int main()
{
    struct invStruct items[500];
    ...
