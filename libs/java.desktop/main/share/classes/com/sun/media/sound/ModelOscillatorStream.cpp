#include <com/sun/media/sound/ModelOscillatorStream.h>

#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $floatArray2 = $Array<float, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelOscillatorStream_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillatorStream, close, void), "java.io.IOException"},
	{"noteOff", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillatorStream, noteOff, void, int32_t)},
	{"noteOn", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/midi/VoiceStatus;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillatorStream, noteOn, void, $MidiChannel*, $VoiceStatus*, int32_t, int32_t)},
	{"read", "([[FII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillatorStream, read, int32_t, $floatArray2*, int32_t, int32_t), "java.io.IOException"},
	{"setPitch", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillatorStream, setPitch, void, float)},
	{}
};

$ClassInfo _ModelOscillatorStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelOscillatorStream",
	nullptr,
	nullptr,
	nullptr,
	_ModelOscillatorStream_MethodInfo_
};

$Object* allocate$ModelOscillatorStream($Class* clazz) {
	return $of($alloc(ModelOscillatorStream));
}

$Class* ModelOscillatorStream::load$($String* name, bool initialize) {
	$loadClass(ModelOscillatorStream, name, initialize, &_ModelOscillatorStream_ClassInfo_, allocate$ModelOscillatorStream);
	return class$;
}

$Class* ModelOscillatorStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com