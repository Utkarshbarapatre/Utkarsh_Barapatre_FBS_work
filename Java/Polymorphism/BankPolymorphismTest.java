class BankAccount{
    String accNo;
    String holderName;
    double balance;

    BankAccount(){
        accNo="000";
        holderName="Unknown";
        balance=0.0;
    }

    BankAccount(String accNo,String holderName,double balance){
        this.accNo=accNo;
        this.holderName=holderName;
        this.balance=balance;
    }

    String getAccNo(){
        return accNo;
    }

    void setAccNo(String accNo){
        this.accNo=accNo;
    }

    String getHolderName(){
        return holderName;
    }

    void setHolderName(String holderName){
        this.holderName=holderName;
    }

    double getBalance(){
        return balance;
    }

    void setBalance(double balance){
        this.balance=balance;
    }

    void withdraw(double amount){
        System.out.println("Withdraw not defined for base class");
    }

    void display(){
        System.out.println("AccNo: "+accNo);
        System.out.println("Holder: "+holderName);
        System.out.println("Balance: "+balance);
    }
}

class SavingAccount extends BankAccount{
    SavingAccount(){
        super();
    }

    SavingAccount(String accNo,String holderName,double balance){
        super(accNo,holderName,balance);
    }

    void withdraw(double amount){
        if(balance<amount){
            System.out.println("SavingAccount: Insufficient balance");
        }else{
            balance=balance-amount;
            System.out.println("SavingAccount: Withdraw successful");
        }
    }
}

class CurrentAccount extends BankAccount{
    double overdraftLimit;

    CurrentAccount(){
        super();
        overdraftLimit=5000;
    }

    CurrentAccount(String accNo,String holderName,double balance,double overdraftLimit){
        super(accNo,holderName,balance);
        this.overdraftLimit=overdraftLimit;
    }

    double getOverdraftLimit(){
        return overdraftLimit;
    }

    void setOverdraftLimit(double overdraftLimit){
        this.overdraftLimit=overdraftLimit;
    }

    void withdraw(double amount){
        if(balance+overdraftLimit<amount){
            System.out.println("CurrentAccount: Exceeds overdraft limit");
        }else{
            balance=balance-amount;
            System.out.println("CurrentAccount: Withdraw successful");
        }
    }
}

class SalaryAccount extends BankAccount{
    SalaryAccount(){
        super();
    }

    SalaryAccount(String accNo,String holderName,double balance){
        super(accNo,holderName,balance);
    }

    void withdraw(double amount){
        if(balance<amount){
            System.out.println("SalaryAccount: Cannot withdraw more than salary balance");
        }else{
            balance=balance-amount;
            System.out.println("SalaryAccount: Withdraw successful");
        }
    }
}

public class BankPolymorphismTest{
    public static void main(String[] args){

        BankAccount b1;
        BankAccount b2;
        BankAccount b3;
        b1=new SavingAccount("SA101","Utkarsh",5000);
        b2=new CurrentAccount("CA202","Rohan",2000,8000);
        b3=new SalaryAccount("SAL303","Amit",15000);
        b1.withdraw(6000);   
        b2.withdraw(9000);  
        b3.withdraw(20000);  
        System.out.println();
        b1.display();
        System.out.println();
        b2.display();
        System.out.println();
        b3.display();
    }
}
