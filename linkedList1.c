#include<stdio.h>
#include<stdlib.h>
int i,j,row,col;
int a[100][100];

typedef struct matrix
{
    int row_no;
    int col_no;
    int data;
    struct matrix *next;
}mat;
mat *head,*new_node,*temp,*temp1;

int main()
{
    printf("\n Enter no. of rows : ");
    scanf("%d",&row);
    printf("\n Enter no. of columns : ");
    scanf("%d",&col);
    printf("\n Enter sparse matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Your sparse matrix is : ");
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //linked list of all non-zero elements.
    //find non-zero element.
    for(j=0;j<row;j++)
    {
        for(i=0;i<col;i++)
        {
            if(a[i][j]!=0)
            {
                insert(a[i][j]);
            }
        }
    }
    //print linked list.
    printf("\n");
    temp1=head;
    while(temp)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }


    return 0;
}

insert(int a[i][j])
{
    new_node=(mat*)malloc(sizeof(mat));
    new_node->row_no=i;
    new_node->col_no=j;
    new_node->data=a[i][j];
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        temp=new_node;
    }
}
