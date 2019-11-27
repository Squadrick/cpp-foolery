#include <msgpack.hpp>
#include <string>
#include <iostream>
#include <sstream>

int main(void) {
  msgpack::type::tuple<int, bool, std::string> src(1, true, "example");
  std::stringstream buffer;
  msgpack::pack(buffer, src);

  buffer.seekg(0);
  std::cout << buffer.tellp() << std::endl;

  std::string str(buffer.str());
  std::cout << str << std::endl;

  msgpack::object_handle oh = msgpack::unpack(str.data(), str.size());
  msgpack::object deserialized = oh.get();

  std::cout << deserialized << std::endl;

  msgpack::type::tuple<int, bool, std::string> dst;
  deserialized.convert(dst);

  msgpack::type::tuple<int, bool, std::string> dst2 = 
    deserialized.as<msgpack::type::tuple<int, bool, std::string> > ();
  
  return 0;

}
