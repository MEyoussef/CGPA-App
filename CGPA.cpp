#include <iostream>
#include <vector>
// using namespace std;  it's realy gives you nothing but potantial for name conflicts
int CGPA()
{
    std::vector<int> MyGrades;
    auto numbers = 0;
    auto sum = 0;
    std::string str = "";
    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Enter Grade Number " << i << " : ";
        std::cin >> numbers;
        if (numbers < 0)
        {
            std::cout << "Negative Numbers Arent Allowed!" << std::endl;
            return 0;
        }
        MyGrades.push_back(numbers); // the app crash if removed cuz we need the size of vector after submitting all grades (I learned that the hard way)
        sum += numbers;
        numbers = 0;
        std::cout << sum << std::endl;
    }
    std::cout << "If You Want To Calculate The Percentage Enter *%* Or If You Want To Calculate CGPA Enter *CGPA* : ";
    std::cin >> str;

    int Percentage = (sum / MyGrades.size()) * 9.5;
    if (str == "%")
    {
        if (Percentage >= 50)
        {
            std::cout << "you passed this school year!" << std::endl;
            return Percentage;
        }
        else
        {
            std::cout << "you failed this school year!" << std::endl;
            return Percentage;
        }
    }
    else if (str == "CGPA")
    {
        std::cout << "Your CGPA Is: ";
        return sum / MyGrades.size();
    }
    else
    {
        return 0;
    }
}
int main()
{
    std::cout << CGPA() << std::endl;
    return 0;
}