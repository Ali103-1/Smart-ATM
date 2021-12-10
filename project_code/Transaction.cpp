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