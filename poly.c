#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int exp;
    struct node* next;
};

// Create a new node

struct node* createNode(int coeff, int exp) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Insert term at the end

void insertTerm(struct node** poly, int coeff, int exp) {
    if (coeff == 0) 
    return;

     // Skip zero coefficient

    struct node* temp = *poly;
    struct node* newNode = createNode(coeff, exp);

    if (*poly == NULL) {
        *poly = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Display polynomial

void displayPolynomial(struct node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        if (poly->next != NULL)
            printf(" + ");
        poly = poly->next;
    }
    printf("\n");
}

// Add two polynomials

struct node* addPolynomials(struct node* poly1, struct node* poly2) {
    struct node* result = NULL;
    struct node** tail = &result;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp == poly2->exp) {
            insertTerm(tail, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
         else if (poly1->exp > poly2->exp) {
            insertTerm(tail, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else {
            insertTerm(tail, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
        tail = &((*tail)->next);
    }

    while (poly1 != NULL) {
        insertTerm(tail, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
        tail = &((*tail)->next);
    }

    while (poly2 != NULL) {
        insertTerm(tail, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
        tail = &((*tail)->next);
    }

    return result;
}

// Subtract poly2 from poly1

struct node* subtractPolynomials(struct node* poly1, struct node* poly2) {
    struct node* result = NULL;
    struct node** tail = &result;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp == poly2->exp) {
            insertTerm(tail, poly1->coeff - poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->exp > poly2->exp) {
            insertTerm(tail, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else {
            insertTerm(tail, -poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
        tail = &((*tail)->next);
    }

    while (poly1 != NULL) {
        insertTerm(tail, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
        tail = &((*tail)->next);
    }

    while (poly2 != NULL) {
        insertTerm(tail, -poly2->coeff, poly2->exp);
        poly2 = poly2->next;
        tail = &((*tail)->next);
    }

    return result;
}