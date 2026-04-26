#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <com/sun/media/sound/SoftChorus.h>
#include <com/sun/media/sound/SoftLimiter.h>
#include <com/sun/media/sound/SoftMainMixer$1.h>
#include <com/sun/media/sound/SoftMainMixer$2.h>
#include <com/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer.h>
#include <com/sun/media/sound/SoftReverb.h>
#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <com/sun/media/sound/SoftTuning.h>
#include <com/sun/media/sound/SoftVoice.h>
#include <java/io/InputStream.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef ACTIVE_SENSING
#undef CHANNEL_DELAY_EFFECT1
#undef CHANNEL_DELAY_EFFECT2
#undef CHANNEL_DELAY_LEFT
#undef CHANNEL_DELAY_MONO
#undef CHANNEL_DELAY_RIGHT
#undef CHANNEL_EFFECT1
#undef CHANNEL_EFFECT2
#undef CHANNEL_LEFT
#undef CHANNEL_LEFT_DRY
#undef CHANNEL_MONO
#undef CHANNEL_PRESSURE
#undef CHANNEL_RIGHT
#undef CHANNEL_RIGHT_DRY
#undef CHANNEL_SCRATCH1
#undef CHANNEL_SCRATCH2
#undef CONTROL_CHANGE
#undef NOTE_OFF
#undef NOTE_ON
#undef NOT_SPECIFIED
#undef PITCH_BEND
#undef POLY_PRESSURE
#undef PROGRAM_CHANGE

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $SoftChannelArray = $Array<::com::sun::media::sound::SoftChannel>;
using $SoftMainMixer$SoftChannelMixerContainerArray = $Array<::com::sun::media::sound::SoftMainMixer$SoftChannelMixerContainer>;
using $SoftVoiceArray = $Array<::com::sun::media::sound::SoftVoice>;
using $floatArray2 = $Array<float, 2>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftChorus = ::com::sun::media::sound::SoftChorus;
using $SoftLimiter = ::com::sun::media::sound::SoftLimiter;
using $SoftMainMixer$1 = ::com::sun::media::sound::SoftMainMixer$1;
using $SoftMainMixer$2 = ::com::sun::media::sound::SoftMainMixer$2;
using $SoftMainMixer$SoftChannelMixerContainer = ::com::sun::media::sound::SoftMainMixer$SoftChannelMixerContainer;
using $SoftReverb = ::com::sun::media::sound::SoftReverb;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $SoftTuning = ::com::sun::media::sound::SoftTuning;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $TreeMap = ::java::util::TreeMap;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Patch = ::javax::sound::midi::Patch;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMainMixer::processSystemExclusiveMessage($bytes* data) {
	$useLocalObjectStack();
	$synchronized($nc(this->synth)->control_mutex) {
		activity();
		if (($nc(data)->get(1) & 0xff) == 0x7e) {
			int32_t deviceID = data->get(2) & 0xff;
			if (deviceID == 127 || deviceID == this->synth->getDeviceID()) {
				int32_t subid1 = data->get(3) & 0xff;
				int32_t subid2 = 0;
				switch (subid1) {
				case 8:
					subid2 = data->get(4) & 0xff;
					switch (subid2) {
					case 1:
						{
							$var($SoftTuning, tuning, this->synth->getTuning($$new($Patch, 0, data->get(5) & 0xff)));
							$nc(tuning)->load(data);
							break;
						}
					case 4:
					case 5:
					case 6:
					case 7:
						{
							$var($SoftTuning, tuning, this->synth->getTuning($$new($Patch, data->get(5) & 0xff, data->get(6) & 0xff)));
							$nc(tuning)->load(data);
							break;
						}
					case 8:
					case 9:
						{
							$var($SoftTuning, tuning, $new($SoftTuning, data));
							int32_t channelmask = (data->get(5) & 0xff) * 0x4000 + (data->get(6) & 0xff) * 0x80 + (data->get(7) & 0xff);
							$var($SoftChannelArray, channels, this->synth->channels);
							for (int32_t i = 0; i < $nc(channels)->length; ++i) {
								if ((channelmask & ($sl(1, i))) != 0) {
									$set($nc(channels->get(i)), tuning, tuning);
								}
							}
							break;
						}
					default:
						break;
					}
					break;
				case 9:
					subid2 = data->get(4) & 0xff;
					switch (subid2) {
					case 1:
						this->synth->setGeneralMidiMode(1);
						reset();
						break;
					case 2:
						this->synth->setGeneralMidiMode(0);
						reset();
						break;
					case 3:
						this->synth->setGeneralMidiMode(2);
						reset();
						break;
					default:
						break;
					}
					break;
				case 10:
					subid2 = data->get(4) & 0xff;
					switch (subid2) {
					case 1:
						if (this->synth->getGeneralMidiMode() == 0) {
							this->synth->setGeneralMidiMode(1);
						}
						this->synth->voice_allocation_mode = 1;
						reset();
						break;
					case 2:
						this->synth->setGeneralMidiMode(0);
						this->synth->voice_allocation_mode = 0;
						reset();
						break;
					case 3:
						this->synth->voice_allocation_mode = 0;
						break;
					case 4:
						this->synth->voice_allocation_mode = 1;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
		}
		if ((data->get(1) & 0xff) == 0x7f) {
			int32_t deviceID = data->get(2) & 0xff;
			if (deviceID == 127 || deviceID == this->synth->getDeviceID()) {
				int32_t subid1 = data->get(3) & 0xff;
				int32_t subid2 = 0;
				switch (subid1) {
				case 4:
					{
						subid2 = data->get(4) & 0xff;
						{
							int32_t val = 0;
							int32_t ix = 0;
							int32_t slotPathLen = 0;
							int32_t paramWidth = 0;
							int32_t valueWidth = 0;
							$var($ints, slotPath, nullptr);
							int32_t paramCount = 0;
							$var($longs, params, nullptr);
							$var($longs, values, nullptr);
							switch (subid2) {
							case 1:
							case 2:
							case 3:
							case 4:
								val = (data->get(5) & 0x7f) + ((data->get(6) & 0x7f) * 0x80);
								if (subid2 == 1) {
									setVolume(val);
								} else if (subid2 == 2) {
									setBalance(val);
								} else if (subid2 == 3) {
									setFineTuning(val);
								} else if (subid2 == 4) {
									setCoarseTuning(val);
								}
								break;
							case 5:
								ix = 5;
								slotPathLen = (data->get(ix++) & 0xff);
								paramWidth = (data->get(ix++) & 0xff);
								valueWidth = (data->get(ix++) & 0xff);
								$assign(slotPath, $new($ints, slotPathLen));
								for (int32_t i = 0; i < slotPathLen; ++i) {
									int32_t msb = (data->get(ix++) & 0xff);
									int32_t lsb = (data->get(ix++) & 0xff);
									slotPath->set(i, msb * 128 + lsb);
								}
								paramCount = $div((data->length - 1 - ix), (paramWidth + valueWidth));
								$assign(params, $new($longs, paramCount));
								$assign(values, $new($longs, paramCount));
								for (int32_t i = 0; i < paramCount; ++i) {
									values->set(i, 0);
									for (int32_t j = 0; j < paramWidth; ++j) {
										params->set(i, params->get(i) * 128 + (data->get(ix++) & 0xff));
									}
									for (int32_t j = 0; j < valueWidth; ++j) {
										values->set(i, values->get(i) * 128 + (data->get(ix++) & 0xff));
									}
								}
								globalParameterControlChange(slotPath, params, values);
								break;
							default:
								break;
							}
						}
						break;
					}
				case 8:
					subid2 = data->get(4) & 0xff;
					switch (subid2) {
					case 2:
						{
							$var($SoftTuning, tuning, this->synth->getTuning($$new($Patch, 0, data->get(5) & 0xff)));
							$nc(tuning)->load(data);
							$var($SoftVoiceArray, voices, this->synth->getVoices());
							for (int32_t i = 0; i < $nc(voices)->length; ++i) {
								if ($nc(voices->get(i))->active) {
									if ($nc(voices->get(i))->tuning == tuning) {
										$nc(voices->get(i))->updateTuning(tuning);
									}
								}
							}
							break;
						}
					case 7:
						{
							$var($SoftTuning, tuning, this->synth->getTuning($$new($Patch, data->get(5) & 0xff, data->get(6) & 0xff)));
							$nc(tuning)->load(data);
							$var($SoftVoiceArray, voices, this->synth->getVoices());
							for (int32_t i = 0; i < $nc(voices)->length; ++i) {
								if ($nc(voices->get(i))->active) {
									if ($nc(voices->get(i))->tuning == tuning) {
										$nc(voices->get(i))->updateTuning(tuning);
									}
								}
							}
							break;
						}
					case 8:
					case 9:
						{
							$var($SoftTuning, tuning, $new($SoftTuning, data));
							int32_t channelmask = (data->get(5) & 0xff) * 0x4000 + (data->get(6) & 0xff) * 0x80 + (data->get(7) & 0xff);
							$var($SoftChannelArray, channels, this->synth->channels);
							for (int32_t i = 0; i < $nc(channels)->length; ++i) {
								if ((channelmask & ($sl(1, i))) != 0) {
									$set($nc(channels->get(i)), tuning, tuning);
								}
							}
							$var($SoftVoiceArray, voices, this->synth->getVoices());
							for (int32_t i = 0; i < $nc(voices)->length; ++i) {
								if ($nc(voices->get(i))->active) {
									if ((channelmask & ($sl(1, $nc(voices->get(i))->channel))) != 0) {
										$nc(voices->get(i))->updateTuning(tuning);
									}
								}
							}
							break;
						}
					default:
						break;
					}
					break;
				case 9:
					subid2 = data->get(4) & 0xff;
					switch (subid2) {
					case 1:
						{
							$var($ints, destinations, $new($ints, (data->length - 7) / 2));
							$var($ints, ranges, $new($ints, (data->length - 7) / 2));
							int32_t ix = 0;
							for (int32_t j = 6; j < data->length - 1; j += 2) {
								destinations->set(ix, data->get(j) & 0xff);
								ranges->set(ix, data->get(j + 1) & 0xff);
								++ix;
							}
							int32_t channel = data->get(5) & 0xff;
							$var($SoftChannel, softchannel, $nc(this->synth->channels)->get(channel));
							$nc(softchannel)->mapChannelPressureToDestination(destinations, ranges);
							break;
						}
					case 2:
						{
							$var($ints, destinations, $new($ints, (data->length - 7) / 2));
							$var($ints, ranges, $new($ints, (data->length - 7) / 2));
							int32_t ix = 0;
							for (int32_t j = 6; j < data->length - 1; j += 2) {
								destinations->set(ix, data->get(j) & 0xff);
								ranges->set(ix, data->get(j + 1) & 0xff);
								++ix;
							}
							int32_t channel = data->get(5) & 0xff;
							$var($SoftChannel, softchannel, $nc(this->synth->channels)->get(channel));
							$nc(softchannel)->mapPolyPressureToDestination(destinations, ranges);
							break;
						}
					case 3:
						{
							$var($ints, destinations, $new($ints, (data->length - 7) / 2));
							$var($ints, ranges, $new($ints, (data->length - 7) / 2));
							int32_t ix = 0;
							for (int32_t j = 7; j < data->length - 1; j += 2) {
								destinations->set(ix, data->get(j) & 0xff);
								ranges->set(ix, data->get(j + 1) & 0xff);
								++ix;
							}
							int32_t channel = data->get(5) & 0xff;
							$var($SoftChannel, softchannel, $nc(this->synth->channels)->get(channel));
							int32_t control = data->get(6) & 0xff;
							$nc(softchannel)->mapControlToDestination(control, destinations, ranges);
							break;
						}
					default:
						break;
					}
					break;
				case 10:
					{
						subid2 = data->get(4) & 0xff;
						{
							int32_t channel = 0;
							int32_t keynumber = 0;
							$var($SoftChannel, softchannel, nullptr);
							switch (subid2) {
							case 1:
								channel = data->get(5) & 0xff;
								keynumber = data->get(6) & 0xff;
								$assign(softchannel, $nc(this->synth->channels)->get(channel));
								for (int32_t j = 7; j < data->length - 1; j += 2) {
									int32_t controlnumber = data->get(j) & 0xff;
									int32_t controlvalue = data->get(j + 1) & 0xff;
									$nc(softchannel)->controlChangePerNote(keynumber, controlnumber, controlvalue);
								}
								break;
							default:
								break;
							}
						}
						break;
					}
				default:
					break;
				}
			}
		}
	}
}

void SoftMainMixer::processMessages(int64_t timeStamp) {
	$useLocalObjectStack();
	$var($Iterator, iter, $$nc($nc(this->midimessages)->entrySet())->iterator());
	while ($nc(iter)->hasNext()) {
		$var($Map$Entry, entry, $cast($Map$Entry, iter->next()));
		if ($$sure($Long, $nc(entry)->getKey())->longValue() >= (timeStamp + this->msec_buffer_len)) {
			return;
		}
		int64_t msec_delay = $$sure($Long, entry->getKey())->longValue() - timeStamp;
		this->delay_midievent = $cast(int32_t, (msec_delay * (this->samplerate / 1000000.0) + 0.5));
		if (this->delay_midievent > this->max_delay_midievent) {
			this->delay_midievent = this->max_delay_midievent;
		}
		if (this->delay_midievent < 0) {
			this->delay_midievent = 0;
		}
		processMessage($(entry->getValue()));
		iter->remove();
	}
	this->delay_midievent = 0;
}

void SoftMainMixer::processAudioBuffers() {
	$useLocalObjectStack();
	if ($nc(this->synth)->weakstream != nullptr && this->synth->weakstream->silent_samples != 0) {
		this->sample_pos += this->synth->weakstream->silent_samples;
		this->synth->weakstream->silent_samples = 0;
	}
	for (int32_t i = 0; i < $nc(this->buffers)->length; ++i) {
		if (i != SoftMainMixer::CHANNEL_DELAY_LEFT && i != SoftMainMixer::CHANNEL_DELAY_RIGHT && i != SoftMainMixer::CHANNEL_DELAY_MONO && i != SoftMainMixer::CHANNEL_DELAY_EFFECT1 && i != SoftMainMixer::CHANNEL_DELAY_EFFECT2) {
			$nc(this->buffers->get(i))->clear();
		}
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT))->isSilent()) {
		$nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT))->isSilent()) {
		$nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO))->isSilent()) {
		$nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO));
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_EFFECT1))->isSilent()) {
		$nc(this->buffers->get(SoftMainMixer::CHANNEL_EFFECT1))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_EFFECT1));
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_EFFECT2))->isSilent()) {
		$nc(this->buffers->get(SoftMainMixer::CHANNEL_EFFECT2))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_EFFECT2));
	}
	double volume_left = 0.0;
	double volume_right = 0.0;
	$var($SoftMainMixer$SoftChannelMixerContainerArray, act_registeredMixers, nullptr);
	$synchronized(this->control_mutex) {
		int64_t msec_pos = $cast(int64_t, (this->sample_pos * (1000000.0 / this->samplerate)));
		processMessages(msec_pos);
		if (this->active_sensing_on) {
			if ((msec_pos - this->msec_last_activity) > 1000000) {
				this->active_sensing_on = false;
				{
					$var($SoftChannelArray, arr$, this->synth->channels);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($SoftChannel, c, arr$->get(i$));
						$nc(c)->allSoundOff();
					}
				}
			}
		}
		for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
			if ($nc(this->voicestatus->get(i))->active) {
				$nc(this->voicestatus->get(i))->processControlLogic();
			}
		}
		this->sample_pos += this->buffer_len;
		double volume = $nc(this->co_master_volume)->get(0);
		volume_left = volume;
		volume_right = volume;
		double balance = $nc(this->co_master_balance)->get(0);
		if (balance > 0.5) {
			volume_left *= (1 - balance) * 2;
		} else {
			volume_right *= balance * 2;
		}
		$nc(this->chorus)->processControlLogic();
		$nc(this->reverb)->processControlLogic();
		$nc(this->agc)->processControlLogic();
		if (this->cur_registeredMixers == nullptr) {
			if (this->registeredMixers != nullptr) {
				$set(this, cur_registeredMixers, $new($SoftMainMixer$SoftChannelMixerContainerArray, this->registeredMixers->size()));
				this->registeredMixers->toArray(this->cur_registeredMixers);
			}
		}
		$assign(act_registeredMixers, this->cur_registeredMixers);
		if (act_registeredMixers != nullptr) {
			if (act_registeredMixers->length == 0) {
				$assign(act_registeredMixers, nullptr);
			}
		}
	}
	if (act_registeredMixers != nullptr) {
		$var($SoftAudioBuffer, leftbak, this->buffers->get(SoftMainMixer::CHANNEL_LEFT));
		$var($SoftAudioBuffer, rightbak, this->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
		$var($SoftAudioBuffer, monobak, this->buffers->get(SoftMainMixer::CHANNEL_MONO));
		$var($SoftAudioBuffer, delayleftbak, this->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
		$var($SoftAudioBuffer, delayrightbak, this->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
		$var($SoftAudioBuffer, delaymonobak, this->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO));
		int32_t bufferlen = $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		$var($floatArray2, cbuffer, $new($floatArray2, this->nrofchannels));
		$var($floatArray2, obuffer, $new($floatArray2, this->nrofchannels));
		obuffer->set(0, $($nc(leftbak)->array()));
		if (this->nrofchannels != 1) {
			obuffer->set(1, $($nc(rightbak)->array()));
		}
		{
			$var($SoftMainMixer$SoftChannelMixerContainerArray, arr$, act_registeredMixers);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($SoftMainMixer$SoftChannelMixerContainer, cmixer, arr$->get(i$));
				{
					this->buffers->set(SoftMainMixer::CHANNEL_LEFT, $nc($nc(cmixer)->buffers)->get(SoftMainMixer::CHANNEL_LEFT));
					this->buffers->set(SoftMainMixer::CHANNEL_RIGHT, cmixer->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
					this->buffers->set(SoftMainMixer::CHANNEL_MONO, cmixer->buffers->get(SoftMainMixer::CHANNEL_MONO));
					this->buffers->set(SoftMainMixer::CHANNEL_DELAY_LEFT, cmixer->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
					this->buffers->set(SoftMainMixer::CHANNEL_DELAY_RIGHT, cmixer->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
					this->buffers->set(SoftMainMixer::CHANNEL_DELAY_MONO, cmixer->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO));
					$nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->clear();
					$nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->clear();
					$nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->clear();
					if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT))->isSilent()) {
						$nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_LEFT));
					}
					if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT))->isSilent()) {
						$nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_RIGHT));
					}
					if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO))->isSilent()) {
						$nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->swap(this->buffers->get(SoftMainMixer::CHANNEL_DELAY_MONO));
					}
					cbuffer->set(0, $($nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->array()));
					if (this->nrofchannels != 1) {
						cbuffer->set(1, $($nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->array()));
					}
					bool hasactivevoices = false;
					for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
						if ($nc(this->voicestatus->get(i))->active) {
							if ($nc(this->voicestatus->get(i))->channelmixer == cmixer->mixer) {
								$nc(this->voicestatus->get(i))->processAudioLogic(this->buffers);
								hasactivevoices = true;
							}
						}
					}
					if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->isSilent()) {
						$var($floats, mono, $nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->array());
						$var($floats, left, $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->array());
						if (this->nrofchannels != 1) {
							$var($floats, right, $nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->array());
							for (int32_t i = 0; i < bufferlen; ++i) {
								float v = $nc(mono)->get(i);
								(*$nc(left))[i] += v;
								(*$nc(right))[i] += v;
							}
						} else {
							for (int32_t i = 0; i < bufferlen; ++i) {
								(*$nc(left))[i] += $nc(mono)->get(i);
							}
						}
					}
					if (!$nc(cmixer->mixer)->process(cbuffer, 0, bufferlen)) {
						$synchronized(this->control_mutex) {
							$nc(this->registeredMixers)->remove(cmixer);
							$set(this, cur_registeredMixers, nullptr);
						}
					}
					for (int32_t i = 0; i < cbuffer->length; ++i) {
						$var($floats, cbuff, cbuffer->get(i));
						$var($floats, obuff, obuffer->get(i));
						for (int32_t j = 0; j < bufferlen; ++j) {
							(*$nc(obuff))[j] += $nc(cbuff)->get(j);
						}
					}
					if (!hasactivevoices) {
						$synchronized(this->control_mutex) {
							if (this->stoppedMixers != nullptr) {
								if (this->stoppedMixers->contains(cmixer->mixer)) {
									this->stoppedMixers->remove(cmixer->mixer);
									$nc(cmixer->mixer)->stop();
								}
							}
						}
					}
				}
			}
		}
		this->buffers->set(SoftMainMixer::CHANNEL_LEFT, leftbak);
		this->buffers->set(SoftMainMixer::CHANNEL_RIGHT, rightbak);
		this->buffers->set(SoftMainMixer::CHANNEL_MONO, monobak);
		this->buffers->set(SoftMainMixer::CHANNEL_DELAY_LEFT, delayleftbak);
		this->buffers->set(SoftMainMixer::CHANNEL_DELAY_RIGHT, delayrightbak);
		this->buffers->set(SoftMainMixer::CHANNEL_DELAY_MONO, delaymonobak);
	}
	for (int32_t i = 0; i < $nc(this->voicestatus)->length; ++i) {
		if ($nc(this->voicestatus->get(i))->active) {
			if ($nc(this->voicestatus->get(i))->channelmixer == nullptr) {
				$nc(this->voicestatus->get(i))->processAudioLogic(this->buffers);
			}
		}
	}
	if (!$nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->isSilent()) {
		$var($floats, mono, $nc(this->buffers->get(SoftMainMixer::CHANNEL_MONO))->array());
		$var($floats, left, $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->array());
		int32_t bufferlen = $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		if (this->nrofchannels != 1) {
			$var($floats, right, $nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->array());
			for (int32_t i = 0; i < bufferlen; ++i) {
				float v = $nc(mono)->get(i);
				(*$nc(left))[i] += v;
				(*$nc(right))[i] += v;
			}
		} else {
			for (int32_t i = 0; i < bufferlen; ++i) {
				(*$nc(left))[i] += $nc(mono)->get(i);
			}
		}
	}
	if (this->synth->chorus_on) {
		this->chorus->processAudio();
	}
	if (this->synth->reverb_on) {
		this->reverb->processAudio();
	}
	if (this->nrofchannels == 1) {
		volume_left = (volume_left + volume_right) / 2;
	}
	if (this->last_volume_left != volume_left || this->last_volume_right != volume_right) {
		$var($floats, left, $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->array());
		$var($floats, right, $nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->array());
		int32_t bufferlen = $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		float amp = 0.0;
		float amp_delta = 0.0;
		amp = (float)(this->last_volume_left * this->last_volume_left);
		amp_delta = (float)((volume_left * volume_left - amp) / bufferlen);
		for (int32_t i = 0; i < bufferlen; ++i) {
			amp += amp_delta;
			(*$nc(left))[i] *= amp;
		}
		if (this->nrofchannels != 1) {
			amp = (float)(this->last_volume_right * this->last_volume_right);
			amp_delta = (float)((volume_right * volume_right - amp) / bufferlen);
			for (int32_t i = 0; i < bufferlen; ++i) {
				amp += amp_delta;
				(*$nc(right))[i] *= volume_right;
			}
		}
		this->last_volume_left = volume_left;
		this->last_volume_right = volume_right;
	} else if (volume_left != 1.0 || volume_right != 1.0) {
		$var($floats, left, $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->array());
		$var($floats, right, $nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->array());
		int32_t bufferlen = $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->getSize();
		float amp = 0.0;
		amp = (float)(volume_left * volume_left);
		for (int32_t i = 0; i < bufferlen; ++i) {
			(*$nc(left))[i] *= amp;
		}
		if (this->nrofchannels != 1) {
			amp = (float)(volume_right * volume_right);
			for (int32_t i = 0; i < bufferlen; ++i) {
				(*$nc(right))[i] *= amp;
			}
		}
	}
	bool var$0 = $nc(this->buffers->get(SoftMainMixer::CHANNEL_LEFT))->isSilent();
	if (var$0 && $nc(this->buffers->get(SoftMainMixer::CHANNEL_RIGHT))->isSilent()) {
		int32_t midimessages_size = 0;
		$synchronized(this->control_mutex) {
			midimessages_size = $nc(this->midimessages)->size();
		}
		if (midimessages_size == 0) {
			++this->pusher_silent_count;
			if (this->pusher_silent_count > 5) {
				this->pusher_silent_count = 0;
				$synchronized(this->control_mutex) {
					this->pusher_silent = true;
					if (this->synth->weakstream != nullptr) {
						this->synth->weakstream->setInputStream(nullptr);
					}
				}
			}
		}
	} else {
		this->pusher_silent_count = 0;
	}
	if (this->synth->agc_on) {
		this->agc->processAudio();
	}
}

void SoftMainMixer::activity() {
	int64_t silent_samples = 0;
	if (this->pusher_silent) {
		this->pusher_silent = false;
		if ($nc(this->synth)->weakstream != nullptr) {
			this->synth->weakstream->setInputStream(this->ais);
			silent_samples = $nc(this->synth->weakstream)->silent_samples;
		}
	}
	this->msec_last_activity = $cast(int64_t, ((this->sample_pos + silent_samples) * (1000000.0 / this->samplerate)));
}

void SoftMainMixer::stopMixer($ModelChannelMixer* mixer) {
	if (this->stoppedMixers == nullptr) {
		$set(this, stoppedMixers, $new($HashSet));
	}
	$nc(this->stoppedMixers)->add(mixer);
}

void SoftMainMixer::registerMixer($ModelChannelMixer* mixer) {
	$useLocalObjectStack();
	if (this->registeredMixers == nullptr) {
		$set(this, registeredMixers, $new($HashSet));
	}
	$var($SoftMainMixer$SoftChannelMixerContainer, mixercontainer, $new($SoftMainMixer$SoftChannelMixerContainer, this));
	$set(mixercontainer, buffers, $new($SoftAudioBufferArray, 6));
	for (int32_t i = 0; i < $nc(mixercontainer->buffers)->length; ++i) {
		mixercontainer->buffers->set(i, $$new($SoftAudioBuffer, this->buffer_len, $($nc(this->synth)->getFormat())));
	}
	$set(mixercontainer, mixer, mixer);
	$nc(this->registeredMixers)->add(mixercontainer);
	$set(this, cur_registeredMixers, nullptr);
}

void SoftMainMixer::init$($SoftSynthesizer* synth) {
	$useLocalObjectStack();
	this->active_sensing_on = false;
	this->msec_last_activity = -1;
	this->pusher_silent = false;
	this->pusher_silent_count = 0;
	this->sample_pos = 0;
	this->readfully = true;
	this->samplerate = 0x0000ac44;
	this->nrofchannels = 2;
	$set(this, voicestatus, nullptr);
	this->msec_buffer_len = 0;
	this->buffer_len = 0;
	$set(this, midimessages, $new($TreeMap));
	this->delay_midievent = 0;
	this->max_delay_midievent = 0;
	this->last_volume_left = 1.0;
	this->last_volume_right = 1.0;
	$set(this, co_master_balance, $new($doubles, 1));
	$set(this, co_master_volume, $new($doubles, 1));
	$set(this, co_master_coarse_tuning, $new($doubles, 1));
	$set(this, co_master_fine_tuning, $new($doubles, 1));
	$set(this, registeredMixers, nullptr);
	$set(this, stoppedMixers, nullptr);
	$set(this, cur_registeredMixers, nullptr);
	$set(this, co_master, $new($SoftMainMixer$1, this));
	$set(this, synth, synth);
	this->sample_pos = 0;
	this->co_master_balance->set(0, 0.5);
	this->co_master_volume->set(0, 1);
	this->co_master_coarse_tuning->set(0, 0.5);
	this->co_master_fine_tuning->set(0, 0.5);
	this->msec_buffer_len = $cast(int64_t, (1000000.0 / $nc(synth)->getControlRate()));
	this->samplerate = $$nc(synth->getFormat())->getSampleRate();
	this->nrofchannels = $$nc(synth->getFormat())->getChannels();
	float var$0 = $$nc(synth->getFormat())->getSampleRate();
	int32_t buffersize = $cast(int32_t, (var$0 / synth->getControlRate()));
	this->buffer_len = buffersize;
	this->max_delay_midievent = buffersize;
	$set(this, control_mutex, synth->control_mutex);
	$set(this, buffers, $new($SoftAudioBufferArray, 14));
	for (int32_t i = 0; i < this->buffers->length; ++i) {
		this->buffers->set(i, $$new($SoftAudioBuffer, buffersize, $(synth->getFormat())));
	}
	$set(this, voicestatus, synth->getVoices());
	$set(this, reverb, $new($SoftReverb));
	$set(this, chorus, $new($SoftChorus));
	$set(this, agc, $new($SoftLimiter));
	float samplerate = $$nc(synth->getFormat())->getSampleRate();
	float controlrate = synth->getControlRate();
	this->reverb->init(samplerate, controlrate);
	this->chorus->init(samplerate, controlrate);
	this->agc->init(samplerate, controlrate);
	this->reverb->setLightMode(synth->reverb_light);
	this->reverb->setMixMode(true);
	this->chorus->setMixMode(true);
	this->agc->setMixMode(false);
	this->chorus->setInput(0, this->buffers->get(SoftMainMixer::CHANNEL_EFFECT2));
	this->chorus->setOutput(0, this->buffers->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		this->chorus->setOutput(1, this->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	this->chorus->setOutput(2, this->buffers->get(SoftMainMixer::CHANNEL_EFFECT1));
	this->reverb->setInput(0, this->buffers->get(SoftMainMixer::CHANNEL_EFFECT1));
	this->reverb->setOutput(0, this->buffers->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		this->reverb->setOutput(1, this->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	this->agc->setInput(0, this->buffers->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		this->agc->setInput(1, this->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	this->agc->setOutput(0, this->buffers->get(SoftMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		this->agc->setOutput(1, this->buffers->get(SoftMainMixer::CHANNEL_RIGHT));
	}
	$var($InputStream, in, $new($SoftMainMixer$2, this));
	$set(this, ais, $new($AudioInputStream, in, $(synth->getFormat()), $AudioSystem::NOT_SPECIFIED));
}

$AudioInputStream* SoftMainMixer::getInputStream() {
	return this->ais;
}

void SoftMainMixer::reset() {
	$useLocalObjectStack();
	$var($SoftChannelArray, channels, $nc(this->synth)->channels);
	for (int32_t i = 0; i < $nc(channels)->length; ++i) {
		$nc(channels->get(i))->allSoundOff();
		$nc(channels->get(i))->resetAllControllers(true);
		if (this->synth->getGeneralMidiMode() == 2) {
			if (i == 9) {
				$nc(channels->get(i))->programChange(0, 120 * 128);
			} else {
				$nc(channels->get(i))->programChange(0, 121 * 128);
			}
		} else {
			$nc(channels->get(i))->programChange(0, 0);
		}
	}
	setVolume(127 * 128 + 127);
	setBalance(64 * 128 + 0);
	setCoarseTuning(64 * 128 + 0);
	setFineTuning(64 * 128 + 0);
	globalParameterControlChange($$new($ints, {1 * 128 + 1}), $$new($longs, {0}), $$new($longs, {4}));
	globalParameterControlChange($$new($ints, {1 * 128 + 2}), $$new($longs, {0}), $$new($longs, {2}));
}

void SoftMainMixer::setVolume(int32_t value) {
	$synchronized(this->control_mutex) {
		this->co_master_volume->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setBalance(int32_t value) {
	$synchronized(this->control_mutex) {
		this->co_master_balance->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setFineTuning(int32_t value) {
	$synchronized(this->control_mutex) {
		this->co_master_fine_tuning->set(0, value / 16384.0);
	}
}

void SoftMainMixer::setCoarseTuning(int32_t value) {
	$synchronized(this->control_mutex) {
		this->co_master_coarse_tuning->set(0, value / 16384.0);
	}
}

int32_t SoftMainMixer::getVolume() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, (this->co_master_volume->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getBalance() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, (this->co_master_balance->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getFineTuning() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, (this->co_master_fine_tuning->get(0) * 16384.0));
	}
}

int32_t SoftMainMixer::getCoarseTuning() {
	$synchronized(this->control_mutex) {
		return $cast(int32_t, (this->co_master_coarse_tuning->get(0) * 16384.0));
	}
}

void SoftMainMixer::globalParameterControlChange($ints* slothpath, $longs* params, $longs* paramsvalue) {
	if ($nc(slothpath)->length == 0) {
		return;
	}
	$synchronized(this->control_mutex) {
		if (slothpath->get(0) == 1 * 128 + 1) {
			for (int32_t i = 0; i < $nc(paramsvalue)->length; ++i) {
				this->reverb->globalParameterControlChange(slothpath, $nc(params)->get(i), paramsvalue->get(i));
			}
		}
		if (slothpath->get(0) == 1 * 128 + 2) {
			for (int32_t i = 0; i < $nc(paramsvalue)->length; ++i) {
				this->chorus->globalParameterControlChange(slothpath, $nc(params)->get(i), paramsvalue->get(i));
			}
		}
	}
}

void SoftMainMixer::processMessage(Object$* object) {
	if ($instanceOf($bytes, object)) {
		processMessage($cast($bytes, object));
	}
	if ($instanceOf($MidiMessage, object)) {
		processMessage($cast($MidiMessage, object));
	}
}

void SoftMainMixer::processMessage($MidiMessage* message) {
	$useLocalObjectStack();
	if ($instanceOf($ShortMessage, message)) {
		$var($ShortMessage, sms, $cast($ShortMessage, message));
		int32_t var$0 = sms->getChannel();
		int32_t var$1 = sms->getCommand();
		int32_t var$2 = sms->getData1();
		processMessage(var$0, var$1, var$2, sms->getData2());
		return;
	}
	processMessage($($nc(message)->getMessage()));
}

void SoftMainMixer::processMessage($bytes* data) {
	int32_t status = 0;
	if ($nc(data)->length > 0) {
		status = data->get(0) & 0xff;
	}
	if (status == 240) {
		processSystemExclusiveMessage(data);
		return;
	}
	int32_t cmd = (status & 0xf0);
	int32_t ch = (status & 0x0f);
	int32_t data1 = 0;
	int32_t data2 = 0;
	if (data->length > 1) {
		data1 = data->get(1) & 0xff;
	} else {
		data1 = 0;
	}
	if (data->length > 2) {
		data2 = data->get(2) & 0xff;
	} else {
		data2 = 0;
	}
	processMessage(ch, cmd, data1, data2);
}

void SoftMainMixer::processMessage(int32_t ch, int32_t cmd, int32_t data1, int32_t data2) {
	$useLocalObjectStack();
	$synchronized($nc(this->synth)->control_mutex) {
		activity();
	}
	if (cmd == 240) {
		int32_t status = cmd | ch;
		switch (status) {
		case $ShortMessage::ACTIVE_SENSING:
			$synchronized(this->synth->control_mutex) {
				this->active_sensing_on = true;
			}
			break;
		default:
			break;
		}
		return;
	}
	$var($SoftChannelArray, channels, this->synth->channels);
	if (ch >= $nc(channels)->length) {
		return;
	}
	$var($SoftChannel, softchannel, channels->get(ch));
	switch (cmd) {
	case $ShortMessage::NOTE_ON:
		if (this->delay_midievent != 0) {
			$nc(softchannel)->noteOn(data1, data2, this->delay_midievent);
		} else {
			$nc(softchannel)->noteOn(data1, data2);
		}
		break;
	case $ShortMessage::NOTE_OFF:
		$nc(softchannel)->noteOff(data1, data2);
		break;
	case $ShortMessage::POLY_PRESSURE:
		$nc(softchannel)->setPolyPressure(data1, data2);
		break;
	case $ShortMessage::CONTROL_CHANGE:
		$nc(softchannel)->controlChange(data1, data2);
		break;
	case $ShortMessage::PROGRAM_CHANGE:
		$nc(softchannel)->programChange(data1);
		break;
	case $ShortMessage::CHANNEL_PRESSURE:
		$nc(softchannel)->setChannelPressure(data1);
		break;
	case $ShortMessage::PITCH_BEND:
		$nc(softchannel)->setPitchBend(data1 + data2 * 128);
		break;
	default:
		break;
	}
}

int64_t SoftMainMixer::getMicrosecondPosition() {
	if (this->pusher_silent) {
		if ($nc(this->synth)->weakstream != nullptr) {
			return $cast(int64_t, ((this->sample_pos + this->synth->weakstream->silent_samples) * (1000000.0 / this->samplerate)));
		}
	}
	return $cast(int64_t, (this->sample_pos * (1000000.0 / this->samplerate)));
}

void SoftMainMixer::close() {
}

SoftMainMixer::SoftMainMixer() {
}

$Class* SoftMainMixer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CHANNEL_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_LEFT)},
		{"CHANNEL_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_RIGHT)},
		{"CHANNEL_MONO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_MONO)},
		{"CHANNEL_DELAY_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_LEFT)},
		{"CHANNEL_DELAY_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_RIGHT)},
		{"CHANNEL_DELAY_MONO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_MONO)},
		{"CHANNEL_EFFECT1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_EFFECT1)},
		{"CHANNEL_EFFECT2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_EFFECT2)},
		{"CHANNEL_DELAY_EFFECT1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_EFFECT1)},
		{"CHANNEL_DELAY_EFFECT2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_DELAY_EFFECT2)},
		{"CHANNEL_LEFT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_LEFT_DRY)},
		{"CHANNEL_RIGHT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_RIGHT_DRY)},
		{"CHANNEL_SCRATCH1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_SCRATCH1)},
		{"CHANNEL_SCRATCH2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMainMixer, CHANNEL_SCRATCH2)},
		{"active_sensing_on", "Z", nullptr, 0, $field(SoftMainMixer, active_sensing_on)},
		{"msec_last_activity", "J", nullptr, $PRIVATE, $field(SoftMainMixer, msec_last_activity)},
		{"pusher_silent", "Z", nullptr, $PRIVATE, $field(SoftMainMixer, pusher_silent)},
		{"pusher_silent_count", "I", nullptr, $PRIVATE, $field(SoftMainMixer, pusher_silent_count)},
		{"sample_pos", "J", nullptr, $PRIVATE, $field(SoftMainMixer, sample_pos)},
		{"readfully", "Z", nullptr, 0, $field(SoftMainMixer, readfully)},
		{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, control_mutex)},
		{"synth", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, synth)},
		{"samplerate", "F", nullptr, $PRIVATE, $field(SoftMainMixer, samplerate)},
		{"nrofchannels", "I", nullptr, $PRIVATE, $field(SoftMainMixer, nrofchannels)},
		{"voicestatus", "[Lcom/sun/media/sound/SoftVoice;", nullptr, $PRIVATE, $field(SoftMainMixer, voicestatus)},
		{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, buffers)},
		{"reverb", "Lcom/sun/media/sound/SoftReverb;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, reverb)},
		{"chorus", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, chorus)},
		{"agc", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, agc)},
		{"msec_buffer_len", "J", nullptr, $PRIVATE, $field(SoftMainMixer, msec_buffer_len)},
		{"buffer_len", "I", nullptr, $PRIVATE, $field(SoftMainMixer, buffer_len)},
		{"midimessages", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/Long;Ljava/lang/Object;>;", 0, $field(SoftMainMixer, midimessages)},
		{"delay_midievent", "I", nullptr, $PRIVATE, $field(SoftMainMixer, delay_midievent)},
		{"max_delay_midievent", "I", nullptr, $PRIVATE, $field(SoftMainMixer, max_delay_midievent)},
		{"last_volume_left", "D", nullptr, 0, $field(SoftMainMixer, last_volume_left)},
		{"last_volume_right", "D", nullptr, 0, $field(SoftMainMixer, last_volume_right)},
		{"co_master_balance", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_balance)},
		{"co_master_volume", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_volume)},
		{"co_master_coarse_tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_coarse_tuning)},
		{"co_master_fine_tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, co_master_fine_tuning)},
		{"ais", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(SoftMainMixer, ais)},
		{"registeredMixers", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer;>;", $PRIVATE, $field(SoftMainMixer, registeredMixers)},
		{"stoppedMixers", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/media/sound/ModelChannelMixer;>;", $PRIVATE, $field(SoftMainMixer, stoppedMixers)},
		{"cur_registeredMixers", "[Lcom/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer;", nullptr, $PRIVATE, $field(SoftMainMixer, cur_registeredMixers)},
		{"co_master", "Lcom/sun/media/sound/SoftControl;", nullptr, 0, $field(SoftMainMixer, co_master)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $method(SoftMainMixer, init$, void, $SoftSynthesizer*)},
		{"activity", "()V", nullptr, $PUBLIC, $method(SoftMainMixer, activity, void)},
		{"close", "()V", nullptr, $PUBLIC, $method(SoftMainMixer, close, void)},
		{"getBalance", "()I", nullptr, $PUBLIC, $method(SoftMainMixer, getBalance, int32_t)},
		{"getCoarseTuning", "()I", nullptr, $PUBLIC, $method(SoftMainMixer, getCoarseTuning, int32_t)},
		{"getFineTuning", "()I", nullptr, $PUBLIC, $method(SoftMainMixer, getFineTuning, int32_t)},
		{"getInputStream", "()Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(SoftMainMixer, getInputStream, $AudioInputStream*)},
		{"getMicrosecondPosition", "()J", nullptr, $PUBLIC, $method(SoftMainMixer, getMicrosecondPosition, int64_t)},
		{"getVolume", "()I", nullptr, $PUBLIC, $method(SoftMainMixer, getVolume, int32_t)},
		{"globalParameterControlChange", "([I[J[J)V", nullptr, $PUBLIC, $method(SoftMainMixer, globalParameterControlChange, void, $ints*, $longs*, $longs*)},
		{"processAudioBuffers", "()V", nullptr, 0, $method(SoftMainMixer, processAudioBuffers, void)},
		{"processMessage", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SoftMainMixer, processMessage, void, Object$*)},
		{"processMessage", "(Ljavax/sound/midi/MidiMessage;)V", nullptr, $PUBLIC, $method(SoftMainMixer, processMessage, void, $MidiMessage*)},
		{"processMessage", "([B)V", nullptr, $PUBLIC, $method(SoftMainMixer, processMessage, void, $bytes*)},
		{"processMessage", "(IIII)V", nullptr, $PUBLIC, $method(SoftMainMixer, processMessage, void, int32_t, int32_t, int32_t, int32_t)},
		{"processMessages", "(J)V", nullptr, $PRIVATE, $method(SoftMainMixer, processMessages, void, int64_t)},
		{"processSystemExclusiveMessage", "([B)V", nullptr, $PRIVATE, $method(SoftMainMixer, processSystemExclusiveMessage, void, $bytes*)},
		{"registerMixer", "(Lcom/sun/media/sound/ModelChannelMixer;)V", nullptr, $PUBLIC, $method(SoftMainMixer, registerMixer, void, $ModelChannelMixer*)},
		{"reset", "()V", nullptr, $PUBLIC, $method(SoftMainMixer, reset, void)},
		{"setBalance", "(I)V", nullptr, $PUBLIC, $method(SoftMainMixer, setBalance, void, int32_t)},
		{"setCoarseTuning", "(I)V", nullptr, $PUBLIC, $method(SoftMainMixer, setCoarseTuning, void, int32_t)},
		{"setFineTuning", "(I)V", nullptr, $PUBLIC, $method(SoftMainMixer, setFineTuning, void, int32_t)},
		{"setVolume", "(I)V", nullptr, $PUBLIC, $method(SoftMainMixer, setVolume, void, int32_t)},
		{"stopMixer", "(Lcom/sun/media/sound/ModelChannelMixer;)V", nullptr, $PUBLIC, $method(SoftMainMixer, stopMixer, void, $ModelChannelMixer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer", "com.sun.media.sound.SoftMainMixer", "SoftChannelMixerContainer", $PRIVATE},
		{"com.sun.media.sound.SoftMainMixer$2", nullptr, nullptr, 0},
		{"com.sun.media.sound.SoftMainMixer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMainMixer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer,com.sun.media.sound.SoftMainMixer$2,com.sun.media.sound.SoftMainMixer$1"
	};
	$loadClass(SoftMainMixer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMainMixer);
	});
	return class$;
}

$Class* SoftMainMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com