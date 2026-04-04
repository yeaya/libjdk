#include <javax/sound/sampled/spi/AudioFileReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

void AudioFileReader::init$() {
}

AudioFileReader::AudioFileReader() {
}

$Class* AudioFileReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AudioFileReader, init$, void)},
		{"getAudioFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioFileFormat, $AudioFileFormat*, $InputStream*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioFileFormat", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioFileFormat, $AudioFileFormat*, $URL*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioFileFormat", "(Ljava/io/File;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioFileFormat, $AudioFileFormat*, $File*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioInputStream, $AudioInputStream*, $InputStream*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioInputStream", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioInputStream, $AudioInputStream*, $URL*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioInputStream", "(Ljava/io/File;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileReader, getAudioInputStream, $AudioInputStream*, $File*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.spi.AudioFileReader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AudioFileReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFileReader);
	});
	return class$;
}

$Class* AudioFileReader::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax