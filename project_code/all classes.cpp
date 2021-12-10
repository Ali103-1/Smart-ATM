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


class ATMoperations {
    private: 
    void openNewAccount{ 
        //client info. 
        string name,password;
        int phone_number,address,account_number,card_number; 
        // if client want to setup login through fingerprint.
        bool login_fingerprint; 
        int serialID_fingerprint;
        // if client want to setup login through phone.
        bool login_phone; 
        int serialID_phone; 
        double balance = 0.00; 
    //client enter his info. 
        cout << "Welcome to Smart ATM , please Enter your name:\n";
        cin >> name;
        cout << "Welcome to Smart ATM , please Enter your phone number:\n";
        cin >> phone_number;
        cout << "Welcome to Smart ATM , please Enter your Password:\n";
        cin >> password;
        cout << "Welcome to Smart ATM , please Enter your address:\n";
        cin >> address;
        account_number = rand(); 
        card_number = rand(); 
        if(login_fingerprint){ 
           serialID_fingerprint = rand(); 
        }   
        if(login_phone){ 
           serialID_phone = rand(); 
        }
    }
    void updateAccountInfo(){
        //to decide any info client want to update. 
        int choice_number;
        cout << "1:update name\n2:update phone number\n3:update address\n4:update password"; 
        cout <<"Choice any information to update?";
        cin >> choice_number; 
        switch(Choice_number){ 
            case 1: 
                cout <<"Update your name" ; 
                cin >> name ; 
                break;
            case 2: 
                cout <<"Update your phone" ; 
                cin >> phone ; 
                break;
            case 3: 
                cout <<"Update your address" ; 
                cin >> address ; 
                break;
            case 4:
                cout <<"Update your Password" ; 
                cin >> password ; 
                break;
            }default: cout <<"Wrong input!"; 
    }
    void doTransactions(){ 
        // to do transactions depand on client choice. 
        int choice_number,amount;
        cout << "1:to deposite\n2:to withdraw\n3:to transfer\n4:print check"; 
        cout <<"Choice any Transaction?";
        cin >> choice_number; 
        switch(Choice_number){ 
        case 1: 
                cout <<"How much deposit ?\n"; 
                cin >> amount ;
                depostiMoney(amount,balance);
                break;
        case 2: 
                cout <<"How much withdraw ?\n"; 
                cin >> amount ;
                withdrawMoney(amount,balance);
                break;
        case 3:
                cout <<"How much transfer ?\n"; 
                cin >> amount ; 
                transferMoney(amount,balance); 
                break; 
        case 4: 
                printcheck(balance); 
                break;
    }default: cout <<"Wrong input!"; 

    public: 
        //to transfer moeny to another account
        void transferMoeny(amount,balance){ 
            int transfer_accountNumber; 
            cout << "Enter account number for the client to transfer to"; 
            cin >> transfer_accountNumber;
            balance = balance - amount; 
        }
        //to deposit moeny
        void depositMoeny(amount,balance){ 
            balance = balance + amount; 
        }
        // to withdraw moeny
         void withdrawMoeny(amount,balance){ 
            balance = balance - amount; 
        }
        //to print check 
        void printCheck(balance) { 
            cout << balance; 
        }

};

class Transaction { 
    private: 
    int transactionQueue;
    int transactionID;
    string transactionDate;

    public: 

    int getTransactionQueue(){ 
        // this is the queue for transaction then go to doTransaction function. 
        transactionQueue = 1 
        while (transactionQueue > 0 ) {
            doTransaction(); 
            transactionQueue--; 
        }
        return 0;
    }

    int transactionID() { 
        transactionID = rand(); 
        return transactionID; 
    }

    string transactionDate() { 
        // current date/time based on current system
        time_t now = time(0);
        transactionDate = now; 
    }
};

class ATMauthoization(){ 
    public: 

    void loginByPhone() { 
        int serial;
        // login through his phone 
        cout <<"put your phone close to ATM"; 
        cin >> serial; 
        // to check if the serial phone is register in our database. 
        if(serial == serialID_phone){
            cout <<"login successfully"; 
        }else cout << "Wrong"; 
    }

    void authoizeFingerprint(){ 
        int serial;
        // login through his fingerprint 
        cout <<"put your finger through finger reader"; 
        cin >> serial; 
        // to check if the serial fingerprint is register in our database. 
        if(serial == serialID_fingerprint){
            cout <<"login successfully"; 
        }else cout << "Wrong"; 
    }
}: 