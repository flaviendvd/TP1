#include <string>


  class Person {
  public:
    Person(std::string firstname, std::string lastname);
    std::string firstname() const;
    std::string lastname() const;
    
  private:
    std::string _firstname;
    std::string _lastname;
  };

  std::string getFullName(const Person &p);
