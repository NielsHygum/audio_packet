//
// Created by nni on 16.01.19.
//

#pragma once

#include <cstdint>

struct AudioPacket
{
    static constexpr size_t max_number_of_frames = 4096;
    //bool compression_enabled : 1;
    //unsigned int number_of_frames : 15;
    bool compression_enabled : 1;
    //unsigned int packet_number : 16;
    unsigned int number_of_frames : 15;//12;//15;//31;
    uint16_t packet_number;
    float latitude;
    float longitude;
    float audio_data[];
};

