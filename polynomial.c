// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int coeff;
//     int exp;
//     struct node* next;
// };
// struct node* createNode(int coeff, int exp){
//     struct node* newNode=(struct node*)malloc(sizeof(struct node));
//     newNode->coeff = coeff;
//     newNode->exp = exp;
//     newNode->next = NULL;
//     return newNode;
// }

// // insert term

// void insertTerm(struct node** poly,int coeff,int exp){
//     struct node* temp=*poly;
//     struct node* newNode = createNode(coeff,exp);
//     if(*poly == NULL){
//         *poly = newNode;
//     }else{
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->=newNode;
//     }
// }
// // Function add two polynomials

// struct node* addPolynomials(struct node* poly1,struct node* poly2){
//     struct node* result=NULL;
//     struct node** tail =&result;
//     while(poly1!=NULL && poly2!=NULL){
//         if(poly1->exp == poly2->exp){
//             insertTerm(tail,poly1->coeff+poly2->coeff,poly1->exp);
//             poly1=poly1->next;
//             poly2=poly->next;
//         }else if(poly1->exp > poly2->exp){
//             insertTerm(tail,poly1->coeff,poly1->exp);
//             poly1=poly1->next;
//         }else{
//             insertTerm(tail,poly2->coeff,poly2->exp);
//             poly2=poly2->next;
//         }
//         tail=&((*tail)->next);
//     }

//     // if any of the polynomials have remaining term

//     while(poly1!=NULL){
//         insertTerm(tail,poly1->coeff,poly1->exp);
//         poly1=poly1->next;
//         tail=&((*tail)->next);
//     }
//     while(poly2!=NULL){
//         insertTerm(tail,poly2->coeff,poly2->exp);
//         poly2=poly2->next;
//         tail=&((*tail)->next);
//     }
//     return result;
// }


// int main() {
//     struct node* poly1 = NULL;
//     struct node* poly2 = NULL;

//     // Insert terms into first polynomial

//     insertTerm(&poly1,5,2);
//     insertTerm(&poly1,4,1);
//     insertTerm(&poly1,2,0);

//     //insert terms into second polynomial

//     insertTerm(&poly2,-3,3);
//     insertTerm(&poly2,2,1);
//     insertTerm(&poly2,1,0);

//     printf("First polynomial: ");displayPolynomial(poly1);
    
//     printf("Second polynomial: ");displayPolynomial(poly2);

//     struct node* sum = addPolynomials(poly1, poly2);
//     printf("Sum of polynomials: ");displayPolynomial(sum);
// }

// //Function to display the polynomial

// void displayPolynomial(struct npde* poly){
//     if(poly==NULL) {
//         printf("0\n");
//         return;
//     }
//     while(poly !=NULL) {
//         printf("%dx%d".poly->coeff,poly->exp);
//         if(poly->next != NULL) {
//             printf(" + ");
//         }
//         poly = poly->next;
//     }
//     printf("\n");
// }
// int main() {
//     struct node* poly1 = NULL;
//     struct node* poly2 = NULL;
// }


// int main() {
//     struct node* poly1 = NULL;
//     struct node* poly2 = NULL;

//     //Insert terms into first polynomial

//     insertTerm(&poly1,5,2);
//     insertTerm(&poly1,4,1);
//     insertTerm(&poly1,2,0);

//     //Insert terms into second polynomial

//     insertTerm(&poly2,-3,3);
//     insertTerm(&poly2,2,1);
//     insertTerm(&poly2,1,0);

    
//     printf("First polynomial: ");displayPolynomial(poly1);
    
//     printf("Second polynomial: ");displayPolynomial(poly2);

//     struct node* sub= subPolynomials(poly1, poly2);
//     printf("Sub of polynomials: ");displayPolynomial(sub);
// }


// //Fuction to multiply two polynomials

// struct node* multiplyPolynomials(struct node* poly1, struct node*poly2) {
//     struct node* result = NULL;
//     struct node* tempResult = NULL;
//     struct node* temppoly1 = poly1;

//     while (temppoly1 !=NULL) {
//         struct node*tempPoly2 = poly2;
//         while (tempPoly2 !=NULL) {
//             int coeff = tempPoly1->coeff* tempPoly2->coeff;
//             int expp = tempPoly1->expp + tempPoly2->exp;
//             insertTerm(&tempResult, coeff,expp);
//             tempPoly2 = tempPoly2->next;
//         }
//         result = addPolynomial(result, tempResult);
//         tempResult = NULL;
//         tempPoly1 = tempPoly1->next;
//     }
//     return result;
// }