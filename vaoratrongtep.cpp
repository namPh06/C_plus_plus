#include <fstream>

int main() {
    std::ifstream infile("PTIT.in");
    std::ofstream outfile("PTIT.out");

    if (infile && outfile) {
        outfile << infile.rdbuf(); // Sao chép toàn bộ nội dung từ infile sang outfile
    }

    infile.close();
    outfile.close();

    return 0;
}
