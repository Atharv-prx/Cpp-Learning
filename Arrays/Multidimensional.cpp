// First bracket = Rows
// Second bracket = Column 

#include <iostream>
int main(){

        std::string flavours[][3]{ {"Light Choco", "Choco", "Dark Choco"}, // Need to define no. of column beforehand
                                   {"Light Vanilla", "Vanilla", "Dark Vanilla"},
                                   {"Light Straw", "Straw", "Dark Straw"} };
        
        int rows = sizeof(flavours) / sizeof(flavours[0]);
        int column = sizeof (flavours[0]) / sizeof (flavours [0][0]); 
                                   
        for(int i=0 ; i < rows ; i++){
            for (int j=0 ; j < column ; j++){
                std::cout << flavours[i][j] << " " ;
                }
                std::cout << '\n';
        }                        

        return 0;
}