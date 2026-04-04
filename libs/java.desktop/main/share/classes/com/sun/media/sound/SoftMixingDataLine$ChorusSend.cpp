#include <com/sun/media/sound/SoftMixingDataLine$ChorusSend.h>
#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef CHORUS_SEND

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMixingDataLine$ChorusSend::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($SoftMixingDataLine);
	$FloatControl::init$($SoftMixingDataLine::CHORUS_SEND, -80.0f, 6.0206f, 80.0f / 128.0f, -1, -80.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$ChorusSend::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	$nc(this->this$0->balance_control)->setValue(newValue);
}

SoftMixingDataLine$ChorusSend::SoftMixingDataLine$ChorusSend() {
}

$Class* SoftMixingDataLine$ChorusSend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ChorusSend, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(SoftMixingDataLine$ChorusSend, init$, void, $SoftMixingDataLine*)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftMixingDataLine$ChorusSend, setValue, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingDataLine$ChorusSend", "com.sun.media.sound.SoftMixingDataLine", "ChorusSend", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingDataLine$ChorusSend",
		"javax.sound.sampled.FloatControl",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftMixingDataLine"
	};
	$loadClass(SoftMixingDataLine$ChorusSend, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingDataLine$ChorusSend);
	});
	return class$;
}

$Class* SoftMixingDataLine$ChorusSend::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com