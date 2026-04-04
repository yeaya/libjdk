#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Gain.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/lang/Math.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef MASTER_GAIN

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void DirectAudioDevice$DirectDL$Gain::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$var($FloatControl$Type, var$0, $FloatControl$Type::MASTER_GAIN);
	float var$1 = $Toolkit::linearToDB(0.0f);
	float var$2 = $Toolkit::linearToDB(2.0f);
	float var$3 = $Toolkit::linearToDB(1.0f);
	$FloatControl::init$(var$0, var$1, var$2, $Math::abs(var$3 - $Toolkit::linearToDB(0.0f)) / 128.0f, -1, 0.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
	this->linearGain = 1.0f;
}

void DirectAudioDevice$DirectDL$Gain::setValue(float newValue) {
	float newLinearGain = $Toolkit::dBToLinear(newValue);
	$FloatControl::setValue($Toolkit::linearToDB(newLinearGain));
	this->linearGain = newLinearGain;
	this->this$0->calcVolume();
}

float DirectAudioDevice$DirectDL$Gain::getLinearGain() {
	return this->linearGain;
}

DirectAudioDevice$DirectDL$Gain::DirectAudioDevice$DirectDL$Gain() {
}

$Class* DirectAudioDevice$DirectDL$Gain::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Gain, this$0)},
		{"linearGain", "F", nullptr, $PRIVATE, $field(DirectAudioDevice$DirectDL$Gain, linearGain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(DirectAudioDevice$DirectDL$Gain, init$, void, $DirectAudioDevice$DirectDL*)},
		{"getLinearGain", "()F", nullptr, 0, $method(DirectAudioDevice$DirectDL$Gain, getLinearGain, float)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice$DirectDL$Gain, setValue, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
		{"com.sun.media.sound.DirectAudioDevice$DirectDL$Gain", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Gain", $PROTECTED | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice$DirectDL$Gain",
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
		"com.sun.media.sound.DirectAudioDevice"
	};
	$loadClass(DirectAudioDevice$DirectDL$Gain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDevice$DirectDL$Gain);
	});
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Gain::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com