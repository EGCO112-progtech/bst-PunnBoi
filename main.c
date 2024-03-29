#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;
   
	b.root= NULL;  b.size=0;// tree initially empty
for ( i = 1; i < argc; ++i ) { 
      insertNode_R( &b.root, atoi(argv[i]));
   //  insertNode_R(&b.root,atoi(argv[i]) );
  } // end for
   // traverse the tree preOrder
    printf("\npreOrder\n" );
   preOrder( b.root );

   // traverse the tree inOrder
   printf("\ninOrder\n" );
   inOrder( b.root );

   // traverse the tree postOrder
 printf("\npostOrder\n" );   postOrder( b.root );

    printf("\n");

   //tree
   printf("Tree:\n"); tree(b.root,0);
   printf("\n");
} // end main

