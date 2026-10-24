#include <iostream>

float passingRating(float a, float c, float y, float t, float i)
{
    float passingRate = 0;

    passingRate = ((85.68 * (c/a)) + (4.31 * (y/a)) + (326.42 * (t/a)) - (419.07 * (i/a)));
    return passingRate;
}

int main()
{
    float A,C,Y,T,I;

    std::cout << "Enter the amound of passes attemped(A)";
    std::cin >> A;

    std::cout << "Enter the amount of passes completed(C)";
    std::cin >> C;

    std::cout << "Enter total amount of yard gained passing(Y)";
    std::cin >> Y;

    std::cout << "Enter the number of touchdown passes(T)";
    std::cin >> T;

    std::cout << "Enter the number interceptions";
    std::cin >> I;

    std::cout << "The passing rate for some sportsball guy is" << passingRating(A,C,Y,T,I);
    return 0;
}
