#include <debugger_device.h>

Debug_Logger * Debug_Logger::instance_ = nullptr;

Debug_Logger::Debug_Logger()
{
    output = new Serial_port(COM1); 
}

Debug_Logger * Debug_Logger::Instance()
{
    if(nullptr == instance_)
    {
        instance_ = new Debug_Logger;
    }
    return instance_;
}

void Debug_Logger::print_string(const char * string_to_print)
{
    output->print_string(string_to_print);
}

void Debug_Logger::print_char(const char * c)
{
    output->print_char(c);
}