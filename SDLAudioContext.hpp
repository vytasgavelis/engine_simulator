#ifndef SDL_AUDIO_CONTEXT_INCLUDED_HPP
#define SDL_AUDIO_CONTEXT_INCLUDED_HPP

#include "IAudioContext.hpp"
#include <SDL2/SDL.h>
#include <vector>

class SDLAudioContext : public IAudioContext
{
public:
	SDLAudioContext();
	virtual ~SDLAudioContext();

	virtual void PlayAudio(AudioObject& ao);
	virtual void PauseAudio(AudioObject& ao);
	virtual void StopAudio(AudioObject& ao);

	void GenerateSamples(Uint8* stream, int streamLen);
private:
	SDL_AudioDeviceID		  m_device;
	std::vector<float>		  m_stream;
	std::vector<AudioObject*> m_playingAudio;

	bool RemoveAudio(AudioObject& ao);

	SDLAudioContext(SDLAudioContext& other) { (void)other; }
	void operator=(const SDLAudioContext& other) { (void)other; }
};

#endif