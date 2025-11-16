abstract class Payment{
    String paymentId;
    double amount;
    String payerName;
    String status="PENDING";

    void printSummary(){
        System.out.println("PaymentID:"+paymentId);
        System.out.println("Payer:"+payerName);
        System.out.println("Amount:"+amount);
        System.out.println("Status:"+status);
    }

    final void process(){
        if(validate()){
            deductAmount();
            sendNotification();
            status="SUCCESS";
        }else{
            status="FAILED";
        }
    }

    abstract boolean validate();
    abstract void deductAmount();
    abstract void sendNotification();
}

class CardPayment extends Payment{
    String cardNumber;
    String cvv;

    CardPayment(String paymentId,double amount,String payerName,String cardNumber,String cvv){
        this.paymentId=paymentId;
        this.amount=amount;
        this.payerName=payerName;
        this.cardNumber=cardNumber;
        this.cvv=cvv;
    }

    boolean validate(){
        if(cardNumber.length()!=16){
		return false;
	}
        if(cvv.length()!=3){
		return false;
	}
        if(amount<=0){
		return false;
	}
        return true;
    }

    void deductAmount(){
        System.out.println("Deducting Rs."+amount+"from card:"+cardNumber);
    }

    void sendNotification(){
        System.out.println("Notification sent to:"+payerName);
    }
}

class UPIPayment extends Payment{
    String upiId;

    UPIPayment(String paymentId,double amount,String payerName,String upiId){
        this.paymentId=paymentId;
        this.amount=amount;
        this.payerName=payerName;
        this.upiId=upiId;
    }

    boolean validate(){
        if(!upiId.contains("@"))return false;
        if(amount<1||amount>100000)return false;
        return true;
    }

    void deductAmount(){
        System.out.println("Deducting Rs."+amount+"via UPI:"+upiId);
    }

    void sendNotification(){
        System.out.println("Notification sent to:"+payerName);
    }
}

public class MainPayment{
    public static void main(String[]args){
        Payment p1=new CardPayment("P101",5000,"Utkarsh","1234567890123456","123");
        Payment p2=new UPIPayment("P102",999,"Raj","raj@upi");

        p1.process();
        p1.printSummary();

        p2.process();
        p2.printSummary();
    }
}
