

#include "bytestream_source.hpp"
#include "io_queue.hpp"


BytestreamSource::BytestreamSource(std::filesystem::path t_filepath, std::shared_ptr<IOQueue> t_io_queue)
    : m_ifstream{ t_filepath, std::ios::binary }
    , m_io_queue{ t_io_queue }
{}

// Meant to run on it's own thread
// put bytes into the ioQueue (meant to be network bytestream, for now from a file)
// ...
// (this is kinda gross.. come up with something better..)
void BytestreamSource::readBytes()
{
    while (m_ifstream.peek(), !m_ifstream.eof()) {
        std::byte curr_byte;
        m_ifstream.read(reinterpret_cast<char*>(curr_byte), 1);
        m_io_queue->push(curr_byte);
    }
    m_io_queue->push({});
}