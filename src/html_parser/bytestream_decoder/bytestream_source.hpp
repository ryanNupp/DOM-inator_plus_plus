#pragma once

#include <filesystem>
#include <fstream>


class IOQueue;


// FOR NOW: only handles local files, reads with a binary ifstream
class BytestreamSource {
public:
    BytestreamSource(std::filesystem::path t_filepath, std::shared_ptr<IOQueue> t_io_queue);

private:
    std::ifstream m_ifstream;
    std::shared_ptr<IOQueue> m_io_queue;
};