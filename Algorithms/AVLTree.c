#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	int height;
	struct node *right;
};
//create empty  AVL tree 
struct node *root = NULL;
struct node *insert(int x,struct node * ptr);
void inorder(struct node *ptr);
int Height(struct node *ptr);
struct node *RotateRight(struct node *ptr);
struct node *RotateLeft(struct node *ptr);
struct node *RotateRightLeft(struct node *ptr);
struct node *RotateLeftRight(struct node *ptr);
void main()
{
	root = insert(50,root);
    printf("1:\n");
     inorder(root);
	root = insert(40,root);
     printf("2:\n");
   inorder(root);
	root = insert(30,root);
    printf("3:\n");
    inorder(root);
	root = insert(20,root);
    printf("4:\n");
    inorder(root);
	root = insert(10,root);
    printf("5:\n");
	inorder(root);
 

}
void inorder(struct node *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d-%d\n",ptr->data,ptr->height);
		inorder(ptr->right);
	}
}

int Height(struct node *ptr)
{
	int lh,rh;
	if(ptr == NULL)
		return -1;
	else 
	{
		if(ptr->left == NULL)
			lh = -1;
		else
			lh = ptr->left->height;
//		
		if(ptr->right == NULL)
			rh = -1;
		else
			rh = ptr->right->height;
	}

	if(lh < rh)
		return rh + 1;
	else
		return lh + 1;
}
struct node *insert(int x,struct node * ptr)
{
	if(ptr == NULL)
	{
		ptr = (struct node*)malloc(sizeof(struct node));
		ptr->data = x;
		ptr->height = 0;
		ptr->left = ptr->right = NULL;
	}
	else
	{
		if(x < ptr->data)
		{
			ptr->left = insert(x,ptr->left);
			
		}
		else
		{
			ptr->right = insert(x,ptr->right);
		}
		ptr->height = Height(ptr);
		if((Height(ptr->left) - Height(ptr->right) == -2) || (Height(ptr->left) - Height(ptr->right) == 2))
		{
			if(x < ptr->data)
			{
				if(x < ptr->left->data)  //case 1
					ptr = RotateRight(ptr);
            			else  //case 2
               				ptr=RotateLeftRight(ptr); 
			}
			else
			{
           			if(x < ptr->right->data) //case 3
					ptr = RotateRightLeft(ptr);
            			else  //case 4
               				ptr=RotateLeft(ptr);
				
			}
		}
	}
	return ptr;
}
struct node *RotateRight(struct node *ptr)// case 1
{
	struct node *xptr = ptr;
	struct node *yptr = ptr->left;
	xptr->left = yptr->right;
	yptr->right = xptr;
   
  //update height
    xptr->height=Height(xptr);
    yptr->height=Height(yptr);
   
	return yptr;
}
struct node *RotateLeft(struct node *ptr)// case 4 
{
	struct node *xptr = ptr;
	struct node *yptr = ptr->right;
	xptr->right = yptr->left;
	yptr->left = xptr;

   //update height
    xptr->height=Height(xptr);
    yptr->height=Height(yptr);

	return yptr;
}
struct node *RotateRightLeft(struct node *ptr)//case 3
{
	ptr->right = RotateRight(ptr->right);
	return RotateLeft(ptr);
}
struct node *RotateLeftRight(struct node *ptr)//case 2
{
	ptr->left = RotateLeft(ptr->left);
	return RotateRight(ptr);
}
