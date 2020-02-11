#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

struct NV
{
    int manv;
    char ten[25];
};
struct NODE
{
    NV data;
    NODE* pLeft;
    NODE* pRight;
};
NODE* CreateNode(NV x)
{
    NODE* p = new NODE();
    p->data = x;
    p->pLeft = p->pRight = NULL;
    return p;
}
NODE* FindInsert(NODE* root, NV x)
{
    if (root == NULL)
    {
        return NULL;
    }
    NODE* p = root;
    NODE* f = p;
    while (p != NULL)
    {
        f = p;
        if (p->data.manv > x.manv)
        {
            p = p->pLeft;
        }
        else
        {
            p = p->pRight;
        }
    }
    return f;
}
void InsertNode(NODE* &root, NV x)
{
    NODE* n = CreateNode(x);
    if (root == NULL)
    {
        root = n;
        return;
    }
    else
    {
        NODE* f = FindInsert(root, x);
        if (f != NULL)
        {
            if (f->data.manv > x.manv)
            {
                f->pLeft = n;
            }
            else
            {
                f->pRight = n;
            }
        }
    }
}
void CreateTree(NODE* &root, NV a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        InsertNode(root, a[i]);
    }
}\
void LRN(NODE* root)
{
	if (root != NULL)
	{
		LRN(root->pLeft);
		LRN(root->pRight);
        cout << root->data.manv << " " ;
	}
}
void NLR(NODE* root)
{
	if (root != NULL)
	{
	    if(strcmp(root->data.ten,"Lan") == 0)
        {
           cout << root->data.manv << " " ;
           puts(root->data.ten);
        }
		NLR(root->pLeft);
		NLR(root->pRight);
	}
}

int main()
{
    NODE* root = NULL;
    NV a[11];
    int n = 11;
    for(int i=0;i<n;i++)
    {
        cout << "Ma NV: ";
        cin >> a[i].manv;
        cout << "Ten NV:";
        fflush(stdin);
        gets(a[i].ten);
    }
    CreateTree(root,a,n);
    //duyet LRN
    cout << "\nCay nhi phan duyet theo LRN:\n";
    LRN(root);
    cout << "\n=============\n";
    //Tim kiem duyet theo NLR
    cout << "Thong tin nhung nhan vien ten Lan:\n";
    NLR(root);
    return 0;
}

