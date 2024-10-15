#include <iostream>

int main(){
    int boxesWithChocolates = 20, LoadedBoxes, carsN, remainedBoxes;
    std::cout<<"Enter number of cars: ";
    std::cin>>carsN;
    for (int cars = 1; cars <= carsN; cars++){
        std::cout<<"Enter the number of boxes that should be loaded: ";
        std::cin>>LoadedBoxes;
        if (LoadedBoxes > boxesWithChocolates){
            std::cout<<"There is no enough boxes to load"<<std::endl;
            
        }
        else {
            remainedBoxes = boxesWithChocolates - LoadedBoxes;
            boxesWithChocolates = remainedBoxes;
            }

        
        
        if (boxesWithChocolates == 0 && cars != carsN){
            std::cout<<"There is no more boxes to load. Not all cars were loaded."<<std::endl;
            break;
        }
        else if (boxesWithChocolates == 0 && cars == carsN){
            std::cout<<"There is no more boxes to load. All cars were loaded."<<std::endl;
            break;
        }
        else if (boxesWithChocolates != 0 && cars == carsN){
            std::cout<<"We need more cars!!!"<<std::endl;
        }
        else{
            std::cout<<"There is "<<remainedBoxes<<" boxes left to load."<<std::endl;
        }
    }
    return 0;
}
