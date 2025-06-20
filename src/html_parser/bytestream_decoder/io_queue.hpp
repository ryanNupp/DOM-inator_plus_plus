#pragma once

#include <optional>
#include <deque>
#include <mutex>
#include <condition_variable>

class IOQueue {
public:
    std::optional<std::byte> read();
    std::optional<std::byte> peek();
    void push(std::optional<std::byte> byte);
    void restore(std::optional<std::byte> byte);

private:
    std::deque<std::byte> m_byte_queue;
    std::mutex m_mutex;
    std::condition_variable m_cond_var;
    bool eof;
};