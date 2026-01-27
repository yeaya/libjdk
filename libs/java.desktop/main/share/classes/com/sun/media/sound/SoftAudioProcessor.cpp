#include <com/sun/media/sound/SoftAudioProcessor.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <jcpp.h>

using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftAudioProcessor_MethodInfo_[] = {
	{"globalParameterControlChange", "([IJJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, globalParameterControlChange, void, $ints*, int64_t, int64_t)},
	{"init", "(FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, init, void, float, float)},
	{"processAudio", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, processAudio, void)},
	{"processControlLogic", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, processControlLogic, void)},
	{"setInput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, setInput, void, int32_t, $SoftAudioBuffer*)},
	{"setMixMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, setMixMode, void, bool)},
	{"setOutput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftAudioProcessor, setOutput, void, int32_t, $SoftAudioBuffer*)},
	{}
};

$ClassInfo _SoftAudioProcessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftAudioProcessor",
	nullptr,
	nullptr,
	nullptr,
	_SoftAudioProcessor_MethodInfo_
};

$Object* allocate$SoftAudioProcessor($Class* clazz) {
	return $of($alloc(SoftAudioProcessor));
}

$Class* SoftAudioProcessor::load$($String* name, bool initialize) {
	$loadClass(SoftAudioProcessor, name, initialize, &_SoftAudioProcessor_ClassInfo_, allocate$SoftAudioProcessor);
	return class$;
}

$Class* SoftAudioProcessor::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com