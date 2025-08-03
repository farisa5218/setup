int size(node *head)
{
    node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}