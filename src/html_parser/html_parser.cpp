
#include "html_parser.hpp"


HTMLParser::HTMLParser(std::string_view t_filepath)
    : m_io_queue{ std::make_shared<IOQueue>() }
    , m_bytestream_source{ t_filepath, m_io_queue }
{}


