#include <com/sun/media/sound/AudioFloatInputStream$DirectAudioFloatInputStream.h>
#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef PCM_SIGNED

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void AudioFloatInputStream$DirectAudioFloatInputStream::init$($AudioInputStream* stream$renamed) {
	$useLocalObjectStack();
	$var($AudioInputStream, stream, stream$renamed);
	$AudioFloatInputStream::init$();
	$set(this, converter, $AudioFloatConverter::getConverter($($nc(stream)->getFormat())));
	if (this->converter == nullptr) {
		$var($AudioFormat, format, stream->getFormat());
		$var($AudioFormat, newformat, nullptr);
		$init($AudioFormat$Encoding);
		$var($AudioFormatArray, formats, $AudioSystem::getTargetFormats($AudioFormat$Encoding::PCM_SIGNED, format));
		if ($nc(formats)->length != 0) {
			$assign(newformat, formats->get(0));
		} else {
			float samplerate = $nc(format)->getSampleRate();
			int32_t samplesizeinbits = format->getSampleSizeInBits();
			int32_t framesize = format->getFrameSize();
			float framerate = format->getFrameRate();
			samplesizeinbits = 16;
			framesize = format->getChannels() * (samplesizeinbits / 8);
			framerate = samplerate;
			$assign(newformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, samplerate, samplesizeinbits, format->getChannels(), framesize, framerate, false));
		}
		$assign(stream, $AudioSystem::getAudioInputStream(newformat, stream));
		$set(this, converter, $AudioFloatConverter::getConverter($($nc(stream)->getFormat())));
	}
	int32_t var$0 = $$nc(stream->getFormat())->getFrameSize();
	this->framesize_pc = $div(var$0, $$nc(stream->getFormat())->getChannels());
	$set(this, stream, stream);
}

$AudioFormat* AudioFloatInputStream$DirectAudioFloatInputStream::getFormat() {
	return $nc(this->stream)->getFormat();
}

int64_t AudioFloatInputStream$DirectAudioFloatInputStream::getFrameLength() {
	return $nc(this->stream)->getFrameLength();
}

int32_t AudioFloatInputStream$DirectAudioFloatInputStream::read($floats* b, int32_t off, int32_t len) {
	int32_t b_len = len * this->framesize_pc;
	if (this->buffer == nullptr || this->buffer->length < b_len) {
		$set(this, buffer, $new($bytes, b_len));
	}
	int32_t ret = $nc(this->stream)->read(this->buffer, 0, b_len);
	if (ret == -1) {
		return -1;
	}
	$nc(this->converter)->toFloatArray(this->buffer, b, off, $div(ret, this->framesize_pc));
	return $div(ret, this->framesize_pc);
}

int64_t AudioFloatInputStream$DirectAudioFloatInputStream::skip(int64_t len) {
	int64_t b_len = len * this->framesize_pc;
	int64_t ret = $nc(this->stream)->skip(b_len);
	if (ret == -1) {
		return -1;
	}
	return $div(ret, this->framesize_pc);
}

int32_t AudioFloatInputStream$DirectAudioFloatInputStream::available() {
	return $div($nc(this->stream)->available(), this->framesize_pc);
}

void AudioFloatInputStream$DirectAudioFloatInputStream::close() {
	$nc(this->stream)->close();
}

void AudioFloatInputStream$DirectAudioFloatInputStream::mark(int32_t readlimit) {
	$nc(this->stream)->mark(readlimit * this->framesize_pc);
}

bool AudioFloatInputStream$DirectAudioFloatInputStream::markSupported() {
	return $nc(this->stream)->markSupported();
}

void AudioFloatInputStream$DirectAudioFloatInputStream::reset() {
	$nc(this->stream)->reset();
}

AudioFloatInputStream$DirectAudioFloatInputStream::AudioFloatInputStream$DirectAudioFloatInputStream() {
}

$Class* AudioFloatInputStream$DirectAudioFloatInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$DirectAudioFloatInputStream, stream)},
		{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE, $field(AudioFloatInputStream$DirectAudioFloatInputStream, converter)},
		{"framesize_pc", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatInputStream$DirectAudioFloatInputStream, framesize_pc)},
		{"buffer", "[B", nullptr, $PRIVATE, $field(AudioFloatInputStream$DirectAudioFloatInputStream, buffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, 0, $method(AudioFloatInputStream$DirectAudioFloatInputStream, init$, void, $AudioInputStream*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, close, void), "java.io.IOException"},
		{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, getFormat, $AudioFormat*)},
		{"getFrameLength", "()J", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, getFrameLength, int64_t)},
		{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, mark, void, int32_t)},
		{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, markSupported, bool)},
		{"read", "([FII)I", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, read, int32_t, $floats*, int32_t, int32_t), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, reset, void), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(AudioFloatInputStream$DirectAudioFloatInputStream, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream", "com.sun.media.sound.AudioFloatInputStream", "DirectAudioFloatInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream",
		"com.sun.media.sound.AudioFloatInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.AudioFloatInputStream"
	};
	$loadClass(AudioFloatInputStream$DirectAudioFloatInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatInputStream$DirectAudioFloatInputStream);
	});
	return class$;
}

$Class* AudioFloatInputStream$DirectAudioFloatInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com