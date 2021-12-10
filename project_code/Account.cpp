class Account{ 
    //declare the variables.
    //using private to protect.  
    private: 
    string name; 
    int account_number;
    int card_number; 
    double balance; 

    public: 
    //to get name of account 
    string getName(name){ 
        name = name; 
        cout << "Account Name:\n" ; 
        cout << name ; 
    }

//to get number of account 
    int getAccountNumber(account_number){ 
        account_number = account_number; 
        cout << "Account Number:\n" ; 
        cout << account_number ; 
        return account_number; 
    }

//to get card number of account 
    int getCardNumber(card_number) { 
        card_number = card_number; 
        cout << "Account card number:\n" ; 
        cout << card_number ;
        return card_number;  
    }

//to get balance of account 
    int balance(balance) { 
        cout << "Your balance is: " ; 
        cout << balance ; 
    }

    }
}; 
