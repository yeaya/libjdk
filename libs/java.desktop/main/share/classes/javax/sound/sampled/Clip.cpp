#include <javax/sound/sampled/Clip.h>

#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

#undef LOOP_CONTINUOUSLY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Clip_FieldInfo_[] = {
	{"LOOP_CONTINUOUSLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Clip, LOOP_CONTINUOUSLY)},
	{}
};

$MethodInfo _Clip_MethodInfo_[] = {
	{"getFrameLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, getFrameLength, int32_t)},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, getMicrosecondLength, int64_t)},
	{"loop", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, loop, void, int32_t)},
	{"open", "(Ljavax/sound/sampled/AudioFormat;[BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, open, void, $AudioFormat*, $bytes*, int32_t, int32_t), "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, open, void, $AudioInputStream*), "javax.sound.sampled.LineUnavailableException,java.io.IOException"},
	{"setFramePosition", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, setFramePosition, void, int32_t)},
	{"setLoopPoints", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, setLoopPoints, void, int32_t, int32_t)},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clip, setMicrosecondPosition, void, int64_t)},
	{}
};

$ClassInfo _Clip_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.Clip",
	nullptr,
	"javax.sound.sampled.DataLine",
	_Clip_FieldInfo_,
	_Clip_MethodInfo_
};

$Object* allocate$Clip($Class* clazz) {
	return $of($alloc(Clip));
}

$Class* Clip::load$($String* name, bool initialize) {
	$loadClass(Clip, name, initialize, &_Clip_ClassInfo_, allocate$Clip);
	return class$;
}

$Class* Clip::class$ = nullptr;

		} // sampled
	} // sound
} // javax