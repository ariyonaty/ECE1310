/* 
    Ari Yonaty
    ECE 1310
    4.9.2019
    Exercise 100: Pointer used in structure
 */

#include <iostream>

struct Node
{
    int data;
    Node *p_to_a_node;
};

int main()
{
    Node n1, n2, n3, *t;
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.p_to_a_node = &n2;
    n2.p_to_a_node = &n3;
    n3.p_to_a_node = &n1;

    t = &n1;

    for (int i = 0; i < 4; i++)
    {
        std::cout << t->data << " ";
        t = t->p_to_a_node;
    }
    std::cout << std::endl;

    return 0;
}