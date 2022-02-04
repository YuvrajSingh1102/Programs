#include<stdio.h> 

int p;
int loginfn();
void balanceCheck(int);
void cashWithdraw(int);
void cashDeposit(int);

int id[5] = {1,2,3,4,5};
int pin[6] = {0,1111,2222,3333,4444,5555};
int balance[6] = {0,5000, 10000, 15000, 16000, 17000};

int main() {

int a;
int x = loginfn();

if(x > 0) {
	printf("You have logged in successfully!\n");
	
	do {
		printf("Press 1 to check the balance.\n");
		printf("Press 2 to withdraw the cash.\n");
		printf("Press 3 to to deposit the cash.\n");
		printf("Press 4 for quit.\n");
		scanf("%d", &a);
		
		switch(a){
			case 1:
			balanceCheck(x);
			break;

			case 2:
			cashWithdraw(x);
			break;

			case 3:
			cashDeposit(x);
			break;

			case 4:
			printf("Thankyou for visiting the bank\n");
			break;

			default:
			printf("Invalid input. Please try again\n");
			break;
			}

	} while(a!=4);

} else {
	printf("Yourr card is blocked!\n");
}
return 0;
}

int loginfn() {

int a,b, counter = 3;

printf("Enter the user id:\n");
scanf("%d", &a);

do{
	printf("Enter the pin:\n");
	scanf("%d", &b);

	if(b!=pin[a]) {
		counter--;
	} 
} while (b!=pin[a] && counter > 0);

	if(counter == 0) {
	return -1;
	} else {
	return a;
	}
}

void balanceCheck(int a) {
	printf("You balance in the account is:%d\n", balance[a]);
}

void cashWithdraw(int a) {
	int amount;
	printf("Enter the amount you want to withdraw:\n");
	scanf("%d", &amount);
	
	if(balance[a] >= amount) {
		balance[a] = balance[a] - amount;
	} else {
		printf("Insufficient balance!!\n");
  	}
}

void cashDeposit(int a) {
	int amount;
	printf("Enter the amount you want to deposit:\n");
	scanf("%d", &amount);
	balance[a] = balance[a] + amount;
}
