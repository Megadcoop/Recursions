#include <iostream>
#include <vector>

struct Node {
    bool is_number;
    int value;
    std::vector<Node> children;

    Node(int val) : is_number(true), value(val) {}
    Node(std::initializer_list<Node> list) : is_number(false), value(0), children(list) {}
};

void print_numbers(const Node& node) {
    if (node.is_number) {
        std::cout << node.value << "\n";
    } 
    else {
        for (const auto& child : node.children) {
            print_numbers(child);
        }
    }
}

int main() {
    Node nested_array = {
        1, 2, 3,
        {4, 5, 6},
        7,
        {8, 
            {9, 10, 11, 
                {12, 13, 14}
            }
        },
        {15, 16, 17, 18, 19,
            {20, 21, 22,
                {23, 24, 25,
                    {26, 27, 29}
                }, 30, 31
            }, 32
        }, 33
    };

    print_numbers(nested_array);

    return 0;
}
