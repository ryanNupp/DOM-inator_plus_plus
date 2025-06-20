#pragma once

#include <memory>

#include "bytestream_decoder/io_queue.hpp"
#include "bytestream_decoder/bytestream_source.hpp"


class HTMLParser {
public:
    HTMLParser(std::string_view t_filepath);
    void craftDOM();

private:
    std::shared_ptr<IOQueue> m_io_queue;
    BytestreamSource m_bytestream_source;
};