#include <cmath>
#include <thread>
#include <audio>
#include <cmath>
#include <stdio.h>

int main(){
  using namespace std::experimental;

  auto device = get_default_audio_output_device();
  if(!device)
    return 1;
  
  device->connect([=](audio_device&, audio_device_io<float>& io) mutable noexcept{
    if(!io.output_buffer.has_value())
      return;
    auto& out = *io.output_buffer;
    

  });

  device->start();
}
