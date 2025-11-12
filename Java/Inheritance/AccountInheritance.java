class Account{
    int accNo;
    String holderName;
    double balance;

    Account(){
        accNo=0;
        holderName="Unknown";
        balance=0.0;
    }

    Account(int accNo,String holderName,double balance){
        this.accNo=accNo;
        this.holderName=holderName;
        this.balance=balance;
    }

    int getAccNo(){
        return accNo;
    }

    void setAccNo(int accNo){
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

    void deposit(double amount){
        balance+=amount;
    }

    void display(){
        System.out.println("Account No: "+accNo);
        System.out.println("Holder Name: "+holderName);
        System.out.println("Balance: "+balance);
    }
}

class SavingsAccount extends Account{
    double interestRate;

    SavingsAccount(int accNo,String holderName,double balance,double interestRate){
        super(accNo,holderName,balance);
        this.interestRate=interestRate;
    }

    double getInterestRate(){
        return interestRate;
    }

    void setInterestRate(double interestRate){
        this.interestRate=interestRate;
    }

    void addInterest(){
        balance+=balance*(interestRate/100);
    }

    void display(){
        super.display();
        System.out.println("Interest Rate: "+interestRate+"%");
    }
}

class CurrentAccount extends Account{
    double overdraftLimit;

    CurrentAccount(int accNo,String holderName,double balance,double overdraftLimit){
        super(accNo,holderName,balance);
        this.overdraftLimit=overdraftLimit;
    }

    double getOverdraftLimit(){
        return overdraftLimit;
    }

    void setOverdraftLimit(double overdraftLimit){
        this.overdraftLimit=overdraftLimit;
    }

    void display(){
        super.display();
        System.out.println("Overdraft Limit: "+overdraftLimit);
    }
}

class LoanAccount extends Account{
    double loanAmount;
    double emi;

    LoanAccount(int accNo,String holderName,double balance,double loanAmount,double emi){
        super(accNo,holderName,balance);
        this.loanAmount=loanAmount;
        this.emi=emi;
    }

    double getLoanAmount(){
        return loanAmount;
    }

    void setLoanAmount(double loanAmount){
        this.loanAmount=loanAmount;
    }

    double getEmi(){
        return emi;
    }

    void setEmi(double emi){
        this.emi=emi;
    }

    void display(){
        super.display();
        System.out.println("Loan Amount: "+loanAmount);
        System.out.println("EMI: "+emi);
    }
}

public class AccountInheritance{
    public static void main(String[] args){
        SavingsAccount sa=new SavingsAccount(101,"Utkarsh",50000,5.0);
        sa.addInterest();

        CurrentAccount ca=new CurrentAccount(202,"Rohan",30000,10000);
        LoanAccount la=new LoanAccount(303,"Amit",1000,200000,5000);

        sa.display();
        System.out.println();
        ca.display();
        System.out.println();
        la.display();
    }
}
