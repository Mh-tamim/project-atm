#include <stdio.h>
#include <stdlib.h>

int main(){
    a:
    printf("Sample :\n1)Name: TAMIM Mahmud    User ID: 1234  Password: 4321 Balance: 100,000 TK\n");
    printf("2)Name: Rakibul Islam   User ID: 3456  Password: 6543 Balance: 6000 TK\n");
    printf("3)Name: Shadman Shakib  User ID: 5678  Password: 8765 Balance: 30,000 TK\n\n");

    int a=0, b, c, d, e = - 1;
    x:
    printf("********Welcome to NSU ATM********\n\n");
    printf("USER ID :");
    scanf("%d",&a);

    if( a == 1234 && e == -1){
        c = 100000;
    }
    else if ( a == 3456 && e == -1){
        c = 6000;
    }
    else if( a == 5678 && e == -1 ){
        c = 30000;
    }
    else if( a != 1234 ||a != 3456 ||a != 5678) { }
    printf("Password:");

    scanf("%d",&b);
    if(( a == 1234 && b == 4321 )||( a == 3456 && b == 6543 )||(a == 5678 && b == 8765 )){
        printf("Correct Password\n\n");
        clrscr(1);
        y:

        if( a == 1234 ){
            printf("****Welcome TAMIM ");
        }
        else if( a == 3456 ){
            printf("Welcome ASIF ");
        }
        else if ( a == 5678 ){
            printf("Welcome NILOY ");
        }
        printf("to NSU ATM SYSTEM******\n");
    }
    else {
            printf("Invalid User ID or Password\nPlease try again!!\n");
            goto x;}


    printf("*\t\t1.Withdraw\t\t*\n");
    printf("*\t\t2.Balance Check\t\t*\n");
    printf("*\t\t3.Deposit\t\t*\n");
    printf("*\t\t0.Log Out\t\t*\n");
    printf("*****************************************\n");
    printf("\tPlease select your option:");
    scanf("%d",&b);
    clrscr(1);
    if( b > 3){goto y ;}
    else if( b == 0 ){
        printf("Returning Main Menu\n");
        goto x;
    }
    else if( b == 1 ){
            z:
        printf("How much do you want to Withdraw??\n(Press 0 for return to the main menu )\n");
        scanf("%d",&d);
        if( d == 0 ){ goto y;}
        if( d > c){printf("Not enough money\n"); goto z;}
        if( d <= c ){
            printf("After Withdraw your balance will be %d \n",c-d);
            printf("Continue ??\n 1.Yes \n 2.No\n");
            scanf("%d",&e);
            if( e == 1){
            clrscr(1);
            printf("Withdrawing %d Taka\n",d);
            c = c-d;
            goto y;
            }
            else goto y;

        }
    }
    else if( b == 2 ){
        clrscr(1);
        printf("Your Balance is %d\n\n",c);
        goto a;
    }
    else if( b == 3 ){
        printf("How much do you want to deposit:");
        scanf("%d",&d);
        printf("After Deposit your balance will be %d \n",c+d);
        printf("Continue ??\n 1.Yes \n 2.No\n");
        scanf("%d",&e);
        if( e == 1 ){
            clrscr(1);
            printf("Depositing %d TAKA \n\n",d);
            c = d + c;
        }    goto y;

    }

    return 0;
}

void clrscr()
{
    system("@cls||clear");
}
