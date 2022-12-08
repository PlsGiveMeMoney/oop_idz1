#include <iostream>;

double x;
int n;

float prikol(float x, int n) {
    double z, zz;
    int i;
    zz = 0;
    for (i = 1; i < n + 1; i++) {

        zz += pow(-1, i - 1) * (pow(x, 2 * i - 1) / ((2 * i - 1) * (2 * i - 1)));

    }
    z = pow(zz, 2) + 5 * x;
    std::cout << "answer: ";
    return(z);
}

int main()
{
    bool isgoing = true;
    while (isgoing) {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "print x\n";
            std::cin >> x;
            std::cout << "print n\n";
            std::cin >> n;
            std::cout << prikol(x, n);
            std::cout << "\n\n";
        }
    }
    return 0;
}
