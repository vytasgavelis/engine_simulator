#ifndef I_AUDIO_DEVICE_INCLUDED_HPP
#define I_AUDIO_DEVICE_INCLUDED_HPP

#include <string>
#include "IAudioData.hpp"

class IAudioDevice
{
public:
	virtual ~IAudioDevice() {}
	virtual IAudioData* CreateAudioFromFile(const std::string& filePath) = 0;
	virtual void Releaseaudio(IAudioData* audioData) = 0;
private:
};

#endif
