#include <string>
#include <vector>

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

void midpoint_value() {
    int a = 14, b = 30;
    int mid = (a + b) / 2;
    (void)mid;
}

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

extern "C" int vivid_maple();
extern "C" void cobalt_fjord();
extern "C" void verdant_orbit();
extern "C" void ivory_meadow();

int main() {
    sum_evens();
    midpoint_value();
    half_value();
    text_contains();
    cobalt_fjord();
    verdant_orbit();
    ivory_meadow();
    return vivid_maple();
}
