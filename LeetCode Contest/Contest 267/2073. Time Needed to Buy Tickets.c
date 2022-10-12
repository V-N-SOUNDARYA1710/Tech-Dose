/*
Input: tickets = [2,3,2], k = 2
Output: 6
Explanation: 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.
*/
int min(int a, int b)
{ 
    return (a>b)?b:a; 
}
int timeRequiredToBuy(int* tickets, int ticketsSize, int k)
{
    int ticket_Count = tickets[k];
    int seconds = 0;
    for(int i = 0; i < ticketsSize; i++)
    {
        seconds += min(tickets[i], ticket_Count);
        if(k == i) ticket_Count--;
    }
    return seconds;
}
