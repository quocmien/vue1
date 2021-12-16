#include <iostream>
using namespace std;
void Insert_List (ElementType X,Position P,List L)
{
    Position T;
    T=(NODE)malloc(sizeof(NODE));
    T->Element=X;
    T->Next=P->Next;
    P->Next=T;
}
void Read_List(List L)
{
    int N;
    ElementType X;
    MakeNull_List(L);
    cout<<"Nhap vao so phan tu cua danh sach: ";
    cin>>N; cout<<endl;
    for (int i=0; i<N; i++)
    {
        cout<<"Nhap vao so phan tu thu "<< i+1 <<" cua danh sach: ";
        cin>>X;
        Insert_List(X,End_List(L),L);
    }
}
void Print_List (List L)
{
    cout<<"Noi dung cac phan tu trong danh sach la: ";
    Position P = First(L);
    while(P!=End_List(L))
    {
        cout<<Retrieve(P,L)<<"\t";
        P = Next(P,L);
    }
    cout<<endl;
}
void Sort_List(List L)
{
    Position P=First(L);
    while (P!=End_List(L))
        {
            Position Q=Next(P,L);
            while (Q!=End_List(L))
            {
                if (Retrieve(P,L)> Retrieve(Q,L))
                {
                    ElementType t= Retrieve(Q,L);
                    P->Next->Element = Q->Next->Element;
                    Q->Next->Element=t;
                }
                Q=Next(Q,L);
            }
            P=Next(P,L);
        }
}
int main()
{
    return 0;
}
