class ATMoperations {
    private: 
    void openNewAccount{ 
        //client info. 
        string name,password;
        int phone_number,address,account_number,card_number; 
        // if client want to setup login through fingerprint.
        bool login_fingerprint; 
        int serialID_fingerprint; 
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
        void transferMoeny(amount,balance){ 
            int transfer_accountNumber; 
            cout << "Enter account number for the client to transfer to"; 
            cin >> transfer_accountNumber;
            balance = balance - amount; 
        }
        void depositMoeny(amount,balance){ 
            balance = balance + amount; 
        }
         void withdrawMoeny(amount,balance){ 
            balance = balance - amount; 
        }
        
        void printCheck(balance) { 
            cout << balance; 
        }

};