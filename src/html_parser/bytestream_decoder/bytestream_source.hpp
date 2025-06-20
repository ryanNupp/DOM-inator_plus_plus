#pragma once

#include <filesystem>
#include <fstream>


class IOQueue;


class BytestreamSource {
/*
    Intended to be a byte stream from a network connection
    readBytes() can run on it's own thread and push bytes into m_io_queue

    FOR NOW: only handles local files 
*/
public:
    BytestreamSource(std::filesystem::path t_filepath, std::shared_ptr<IOQueue> t_io_queue);
    void readBytes();

private:
    std::ifstream m_ifstream;
    std::shared_ptr<IOQueue> m_io_queue;
};