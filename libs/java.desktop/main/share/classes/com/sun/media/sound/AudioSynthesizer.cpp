#include <com/sun/media/sound/AudioSynthesizer.h>

#include <com/sun/media/sound/AudioSynthesizerPropertyInfo.h>
#include <java/util/Map.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

using $AudioSynthesizerPropertyInfoArray = $Array<::com::sun::media::sound::AudioSynthesizerPropertyInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AudioSynthesizer_MethodInfo_[] = {
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioSynthesizer, getFormat, $AudioFormat*)},
	{"getPropertyInfo", "(Ljava/util/Map;)[Lcom/sun/media/sound/AudioSynthesizerPropertyInfo;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)[Lcom/sun/media/sound/AudioSynthesizerPropertyInfo;", $PUBLIC | $ABSTRACT, $virtualMethod(AudioSynthesizer, getPropertyInfo, $AudioSynthesizerPropertyInfoArray*, $Map*)},
	{"open", "(Ljavax/sound/sampled/SourceDataLine;Ljava/util/Map;)V", "(Ljavax/sound/sampled/SourceDataLine;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(AudioSynthesizer, open, void, $SourceDataLine*, $Map*), "javax.sound.midi.MidiUnavailableException"},
	{"openStream", "(Ljavax/sound/sampled/AudioFormat;Ljava/util/Map;)Ljavax/sound/sampled/AudioInputStream;", "(Ljavax/sound/sampled/AudioFormat;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)Ljavax/sound/sampled/AudioInputStream;", $PUBLIC | $ABSTRACT, $virtualMethod(AudioSynthesizer, openStream, $AudioInputStream*, $AudioFormat*, $Map*), "javax.sound.midi.MidiUnavailableException"},
	{}
};

$ClassInfo _AudioSynthesizer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.AudioSynthesizer",
	nullptr,
	"javax.sound.midi.Synthesizer",
	nullptr,
	_AudioSynthesizer_MethodInfo_
};

$Object* allocate$AudioSynthesizer($Class* clazz) {
	return $of($alloc(AudioSynthesizer));
}

$Class* AudioSynthesizer::load$($String* name, bool initialize) {
	$loadClass(AudioSynthesizer, name, initialize, &_AudioSynthesizer_ClassInfo_, allocate$AudioSynthesizer);
	return class$;
}

$Class* AudioSynthesizer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com