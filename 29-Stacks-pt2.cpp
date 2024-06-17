#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cards;

    if(cards.empty()){
        cout << "Empty Stack\n\n";
    }
    else{
        cout << "There are cards on the stack\n\n";
    }

    card.push("King of Hearts");
    card.push("King of Spades");
    card.push("King of Diamonds");
    card.push("King of Trees");

    cout << "Stack size: " << cards.size() << "\n";
    cout << "Card on the top: " << cards.top() << "\n";

    cards.pop();
    cards.pop();

    cout << "New card on the top: " << cards.top() << "\n";

    return 0;
}
