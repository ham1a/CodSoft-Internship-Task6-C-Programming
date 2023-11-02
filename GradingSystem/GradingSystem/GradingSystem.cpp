#include <iostream>
#include <cmath>


void Grading(std::string student, int Students, float max, float min, float grades, float totalGrade, float average);

int main()
{
    int Students;
    std::string student;
    float grades{};
    float totalGrades{};
    float average{};
    float max{};
    float min{};
    

    std::cout << "Enter no.of students: ";
    std::cin >> Students;

   
    Grading(student,Students, max, min, grades, totalGrades, average);
    

    

    

    return 0;
}

void Grading(std::string student,int Students,float max, float min, float grades, float totalGrades, float average)
{
    for (int i = 0; i < Students; i++) 
    {
        std::cout << "Enter Student name: ";
        std::cin >> student;

        std::cout << "Enter Grade: ";
        std::cin >> grades;

        totalGrades = totalGrades + grades;
        
        if (grades > max)
        {
            max = grades;
        }
        else if (grades < max) {
            min = grades;
        }
        
    }

    std::cout << "\n**********************************\n";
    std::cout << "Total: " << totalGrades << "\n";
    
    std::cout << "Highest Score: " << max << "\n";
    std::cout << "Lowest Score: " << min << "\n";

    average = totalGrades / Students;
    std::cout << "Average: " << average << "\n";
    

    

}