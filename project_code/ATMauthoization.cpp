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