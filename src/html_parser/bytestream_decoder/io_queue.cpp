

#include "HTMLParser/io_queue.hpp"


std::optional<std::byte> IOQueue::read()
{
    auto lock = std::unique_lock{ m_mutex };
}


std::optional<std::byte> IOQueue::peek()
{

}


void IOQueue::push(std::optional<std::byte> byte)
{

}


void IOQueue::restore(std::optional<std::byte> byte)
{

}