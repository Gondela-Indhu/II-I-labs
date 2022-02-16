#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* lchild;
    struct node* rchild;
};

struct node* insert(struct node*, int);
struct node* delete(struct node*, int );
struct node* search(struct node*,int );
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);
struct node* new_node(int);
struct node* find_min(struct node*);

int main()
{
    int choice,want_continue,x,data,temp,key;
    struct node *root = NULL,*r;
    printf("Enter the choice 1.insert,2.delete,3.search,4.preorder,5.postorder,6.inorder\n");
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter the element to be inserted:");
            scanf("%d",&data);
            root = insert(root,data);
            break;
            case 2:printf("Enter the element to be deleted:");
            scanf("%d",&data);
            root = delete(root,data);
            break;
            case 3:printf("Enter the key:");
            scanf("%d",&key);
            r = search(root,key);
            if(r != NULL)
                printf("Successful search");
            else
                printf("unsuccessful search");
                
            break;
            case 4:inorder(root);
            break;
            case 5:preorder(root);
            break;
            case 6:postorder(root);
            break;
            }
        printf("want to continue,enter 1:");
        scanf("%d",&want_continue);
    }while(want_continue==1);

    return 0;
}
struct node* insert(struct node* root, int x){
    if(root == NULL)
        return new_node(x);
    else if(x>(root->data))
        root->rchild = insert(root->rchild,x);
    else
        root->lchild=insert(root->lchild,x);
    return root;
}
struct node* new_node(int x){
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->lchild = NULL;
    p->rchild = NULL;
    return p;
}
struct node* delete(struct node* root, int x){
    if(root == NULL)
        return NULL;
    if(x>root->data)
        root->rchild = delete(root->rchild,x);
    else if(x<root->data)
        root->lchild = delete(root->lchild,x);
    else{
        if(root->lchild == NULL && root->rchild == NULL){
            free(root);
            return NULL;
        }
        else if(root->lchild == NULL || root->rchild == NULL){
            struct node *temp;
            if(root->lchild == NULL)
                temp = root->rchild;
            else
                temp = root->lchild;
            free(root);
            return temp;
        }
        else{
            struct node *temp= find_min(root->rchild);
            root->data = temp->data;
            root->rchild = delete(root->rchild,temp->data);
        }
    }
    return root;
        
}
struct node* find_min(struct node* root){
    if(root==NULL)
        return NULL;
    else if(root->lchild != NULL)
        return find_min(root->lchild);
    return root;
}
struct node* search(struct node* root,int x){
    if(root == NULL || root->data == x){
        return root;
    }
    else if(x<root->data){
        return search(root->lchild,x);
    }
    else{
        return search(root->rchild,x);
    }
}
void preorder(struct node* root){
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}
void postorder(struct node* root){
    if (root == NULL)
        return;
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d ", root->data);
}
void inorder(struct node* root){
    if (root == NULL)
        return;
    inorder(root->lchild);
    printf("%d ", root->data);
    inorder(root->rchild);
}
