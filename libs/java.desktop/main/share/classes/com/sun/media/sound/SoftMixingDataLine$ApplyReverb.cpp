#include <com/sun/media/sound/SoftMixingDataLine$ApplyReverb.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <jcpp.h>

#undef APPLY_REVERB

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl = ::javax::sound::sampled::BooleanControl;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMixingDataLine$ApplyReverb::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($BooleanControl$Type);
	$BooleanControl::init$($BooleanControl$Type::APPLY_REVERB, false, "True"_s, "False"_s);
}

void SoftMixingDataLine$ApplyReverb::setValue(bool newValue) {
	$BooleanControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$ApplyReverb::SoftMixingDataLine$ApplyReverb() {
}

$Class* SoftMixingDataLine$ApplyReverb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ApplyReverb, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(SoftMixingDataLine$ApplyReverb, init$, void, $SoftMixingDataLine*)},
		{"setValue", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SoftMixingDataLine$ApplyReverb, setValue, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingDataLine$ApplyReverb", "com.sun.media.sound.SoftMixingDataLine", "ApplyReverb", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingDataLine$ApplyReverb",
		"javax.sound.sampled.BooleanControl",
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
	$loadClass(SoftMixingDataLine$ApplyReverb, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingDataLine$ApplyReverb);
	});
	return class$;
}

$Class* SoftMixingDataLine$ApplyReverb::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com