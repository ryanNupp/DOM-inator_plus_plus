


#include "HTMLParser/io_queue.hpp"
#include "HTMLParser/bytestream_source.hpp"


BytestreamSource::BytestreamSource(std::filesystem::path t_filepath, std::shared_ptr<IOQueue> t_io_queue)
    : m_ifstream{ t_filepath }
    , m_io_queue{ t_io_queue }
{}

