#include <iostream>
#include <string>
#include <array>
#include <boost/asio.hpp>

using namespace boost::asio;


int main(int argc, char** argv)
{
    using boost::asio::ip::tcp;
    using boost::system::error_code;

    int port = atoi(argv[1]);
    io_context context;
    tcp::acceptor acceptor(context, tcp::endpoint(tcp::v4(), port));

    while (true) {
        std::array<char, 128> buf;
        tcp::socket socket(context);
        acceptor.accept(socket);

        error_code error;
        size_t len = socket.read_some(buffer(buf), error);
        std::cout << "buf: " << buf.data() << std::endl;
    }

    return 0;
}

