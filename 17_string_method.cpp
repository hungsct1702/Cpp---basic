#include <iostream>
int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    //check string length 
    if (name.length()>12){
        std::cout<< " Your name cant be over 12 characters!";}
    else if(name.empty()){
        std::cout<< "You did not enter your name";
    }
    else{
        std::cout<< "Welcome "<< name<<"\n";}
        name.append("-chad"); // add string to the end
        name.erase(0, 3);
        std:: cout<<"Your user name is now: "<< name;
    
    return 0;
}
// .at(position) -to find character in that position
//.insert(pos, "character")  - to add character to position
// .find('character')   - to find position
// .erase(0, 3)  - to remove first 3 characters
