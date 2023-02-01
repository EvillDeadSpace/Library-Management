#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

class User {
    private:
        vector<User> vektor_User;
        string name;
        string lastName;
        string socialSecurit;
        string posudena_knjiga;

    public:
        User(){
            this->name = "";
            this->lastName = "";
            this->socialSecurit = "";
        }
        User(string i, string p, string JMBG) {
            this->name = i;
            this->lastName = p;
            this->socialSecurit = socialSecurit;
        }
        //getteri
        string getName() {
            return name;
        }
        string getlastName() {
            return lastName;
        }
        string getsocialSecurit() {
            return socialSecurit;
        }
        //setteri
        void setName(string i) {
            this->name = i;
        }
        void setlastName(string p) {
            this->lastName = p;
        }
        void setsocialSecurit(string JMBG) {
            this->socialSecurit = socialSecurit;
        }

        void add_user(){
            int counter {0};
            bool end {false};
            cout << "------------------------"<< endl;
            cout << "Add name: ";
            cin >> this->name;
            cout << "Add lastname: ";
            cin >> this->lastName; 
            while (socialSecurit.length() != 13) {
                cout << "Please enter Social Securit: ";
                cin >> this->socialSecurit;

                if (socialSecurit.length() != 13) {
                    cout << "socialSecurit need da ima 13 cifara" << endl;
                    cin >> socialSecurit;
                }   
            }
            cout << "" <<endl;
            cout << "------------------------"<< endl;
        }   

        void change_User(string i, string p, string JMBG) {
            this->name = i;
            this->lastName = p;
            this->socialSecurit = socialSecurit;
        }
            
        void printing_User() {
            cout << "Name: " << this->name << endl;
            cout << "Lastname: " << this->lastName << endl;
            cout << "socialSecurit: " << this->socialSecurit << endl;
            cout << "------------------------"<< endl;
        }
 };

class Book{
   private:
       string name_book;
       string author_book;
       string type_book;
       string bar_code;
   public:
         Book() {
              this->name_book = "";
              this->author_book = "";
              this->type_book = "";
              this->bar_code = "";
         }
       Book(string ime_knjige, string autor_knjige, string zanr_knjige, string bar_code) {
           this->name_book = name_book;
           this->author_book = author_book;
           this->type_book = type_book;
           this->bar_code = bar_code;
       }
       string getName_book() {
           return name_book;
       }
       string getAuthor_book() {
           return author_book;
       }
       string getType_book() {
           return type_book;
       }
       string getBar_code() {
           return bar_code;
       }
       void setName_book(string ime_knjige) {
           this->name_book = ime_knjige;
       }
       void setAuthor_knjige(string author_knjige) {
           this->author_book = author_knjige;
       }
       void setType_book(string type_knjige) {
           this->type_book = type_knjige;
       }
       void setBar_code(string bar_code) {
           this->bar_code = bar_code;
       }

       void add_book() {
           bool end {false};       
           cout << "Add name of book: " << endl;
           cin >> this->name_book; 
           cout << "Add Author of book: " << endl;
           cin >> this->author_book;
           cout << "Add type of book: " << endl;
           cout << "1. Drama" << endl;
           cout << "2. Thriller" << endl;
           cout << "3. Novel" << endl;
           cout << "4. Short story" << endl;
           cout << "5. Story" << endl;
           cout << "6. Poetry" << endl;
           cout << "7. Other" << endl;     
              int choice_book{};
                cin >> choice_book;
                switch (choice_book) {
                case 1:
                    type_book = "Drama";
                    break;
                case 2: 
                    type_book = "Thriller";
                    break;
                case 3:
                    type_book = "Novel";
                    break;
                case 4:
                    type_book = "Short story";
                    break;
                case 5:
                    type_book = "Story";
                    break;
                case 6:
                    type_book = "Poetry";
                    break;
                case 7:
                    type_book = "Other";
                    break;

                }          

           while (!end) {
                cout << "Add BAR of book: ";
                cin>>bar_code;
                if (bar_code.length() != 5) {
                    cout << "The barcode should only have 5 numbers" << endl;
                    cin >> bar_code;
                }
                else {
                    end = true;
                }
            } 
       }

       void print_book() {
           cout << "Ime knjige: " << name_book << endl;
           cout << "Autor knjige: " << author_book << endl;
           cout << "Zanr knjige: " << type_book << endl;
           cout << "Bar code knjige: " << bar_code << endl;
           cout << "------------------------"<< endl;
       }
};


void menu1(){
    cout << "1. Add user" << endl;
    cout << "2. Add book" << endl;
    cout << "3. Ispis clana" << endl;
    cout << "4. Ispis knjige" << endl;
    cout << "5. Uredi clana" << endl;
    cout << "6. Uredi knjigu" << endl;
    cout << "7. Izbrisi clana" << endl;
    cout << "8. Izbrisi knjigu" << endl;
    cout << "9. Izlaz" << endl;
}


void menu_user(){
    cout << "1. Unos clana" << endl;
    cout << "2. Ispis clana" << endl;
    cout << "3. Uredi clana" << endl;
    cout << "4. Izbrisi clana" << endl;
    cout << "5. Izlaz" << endl;
}

void menu_book(){
    cout << "1. Unos knjige" << endl;
    cout << "2. Ispis knjige" << endl;
    cout << "3. Uredi knjigu" << endl;
    cout << "4. Izbrisi knjigu" << endl;
    cout << "5. Izlaz" << endl;
}

void add_user(vector<User>& vektor_user){
    cout << "Unos clana" << endl;
    User user=User();
    user.add_user();
    vektor_user.push_back(user);
}


void menu(vector<User>& vektor_user,bool *end,  vector<Book>& vektor_book ){
    cout << "---------------------------------\n" << endl;
    cout <<"---MENU--- \n "<< endl;
    cout << "1. Access user" << endl;
    cout << "2. Access book" << endl;
    cout << "3. Exit" << endl;
    cout << "\n---------------------------------" << endl;
    int choice{0};
    cin >> choice;
    switch (choice){
    case 1:{
        cout << "a. Add user" << endl;
        cout << "b. Printing user" << endl;
        cout << "c. Edit user" << endl;
        cout << "d. Delete user" << endl;
        cout << "e. Back" << endl;
            char temp;
            cin >> temp;
            switch (temp){
            case 'a':{
                cout << "Add user: " << endl;
                User user=User();
                user.add_user();
                vektor_user.push_back(user);

            break;
            };
            case 'b':{
                cout << "Printing user" << endl;
                cout << "------------------------" << endl;
                    if (vektor_user.size() == 0) {
                        cout << "There are no users" << endl;
                        cout << "------------------------" << endl;
                        break;
            }else{
                //Printing about of user
                for (int i = 0; i < vektor_user.size(); i++) {
                    vektor_user[i].printing_User();
                    cout << "------------------------" << endl;
                }
                break;
            };
            };
            case 'c':{
                cout << "Edit user" << endl;
                if(vektor_user.size()==0){
                    cout << "There are no user" << endl;}else{   
            for (int i = 0; i < vektor_user.size(); i++) {
                cout << "User number " << i + 1 << endl;
                vektor_user[i].printing_User();
            }
                    }
            cout << "Enter the serial number of the member you want to change: ";
            int number_user;
            cin >> number_user;
            vektor_user[number_user - 1].add_user();
            break;
            };
            case 'd':{
                cout << "Delete user" << endl;
                if(vektor_user.size()==0){
                    cout << "There are no user" << endl;
            break;
                    }else{
                        cout << "Delete user" << endl;
                        for (int i = 0; i < vektor_user.size(); i++) {
                            cout << "Member number " << i + 1 << endl;
                            vektor_user[i].printing_User();
                        }
                        cout << "Enter the serial number of the member you want to delete: ";
                        int number_deleted;
                        cin >> number_deleted;
                        vektor_user.erase(vektor_user.begin() + number_deleted - 1);
            break;
            };
            case 'e':{
                cout << "Back" << endl;
                break;
            };
            default:{
                cout << "Wrong input" << endl;
                break;
            };
            break;
            };
            };
            break;  
    };
    case 2:{
        cout << "1. Add book" << endl;
        cout << "2. Print book" << endl;
        cout << "3. Edit book" << endl;
        cout << "4. Delete book" << endl;
        cout << "5. Back" << endl;
        char temp1;
        cin >> temp1;
        switch (temp1){
            case '1':{
                cout << "Add book" << endl;
                Book book=Book();
                book.add_book();
                vektor_book.push_back(book);
                break;
            };
            case '2':{
                cout << "Print book" << endl;
                cout << "------------------------" << endl;
                if (vektor_book.size() == 0) {
                    cout << "There are no books" << endl;
                    cout << "------------------------" << endl;
                    break;
                }else{
                    //print about book
                    for (int i = 0; i < vektor_book.size(); i++) {
                        vektor_book[i].print_book();
                        cout << "------------------------" << endl;
                    }
                    break;
                };
                break;
            };
            case '3':{
                cout << "Edit book" << endl;
            for (int i = 0; i < vektor_book.size(); i++) {
                cout << "Book number: " << i + 1 << endl;
                vektor_book[i].print_book();
            };
            cout << "Enter the serial number of the book you want to change: ";
            int number_book;
            cin >> number_book;
            vektor_book[number_book - 1].add_book();
            break;
            };
            case '4':{
                cout << "Delete book" << endl;
            for (int i = 0; i < vektor_book.size(); i++) {
                cout << "Book number " << i + 1 << endl;
                vektor_book[i].print_book();
                cout << "Successfully deleted book" << endl;
            }
            cout << "Enter the serial number of the book you want to delete: ";
            int book_number_delete;
            cin >> book_number_delete;
            vektor_book.erase(vektor_book.begin() + book_number_delete - 1);
            break;
                
            }
        };
        break;
        };
    case 3:{
        cout << "End of program" << endl;
        *end = true;
        break;
        };
    default:{cout<<"Wrong input" <<endl;
    break;}
        

    
};
};

int main(){
    int choice{0};
    vector<User> vektor_user;  
    vector<Book> vektor_book; 
    bool exit{false};
    do{
    menu(vektor_user, &exit, vektor_book);   

    } while (exit != true);
    {
         cout << "End of program" << endl;
         cout << "Thank you for using the strongest program for keeping records of members and books" << endl;
    };

    return 0;
}








