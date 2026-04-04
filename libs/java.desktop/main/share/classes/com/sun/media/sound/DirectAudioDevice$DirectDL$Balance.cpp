#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Balance.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Pan.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef BALANCE

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void DirectAudioDevice$DirectDL$Balance::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::BALANCE, -1.0f, 1.0f, (1.0f / 128.0f), -1, 0.0f, ""_s, "Left"_s, "Center"_s, "Right"_s);
}

void DirectAudioDevice$DirectDL$Balance::setValue(float newValue) {
	setValueImpl(newValue);
	$nc(this->this$0->panControl)->setValueImpl(newValue);
	this->this$0->calcVolume();
}

void DirectAudioDevice$DirectDL$Balance::setValueImpl(float newValue) {
	$FloatControl::setValue(newValue);
}

DirectAudioDevice$DirectDL$Balance::DirectAudioDevice$DirectDL$Balance() {
}

$Class* DirectAudioDevice$DirectDL$Balance::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Balance, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(DirectAudioDevice$DirectDL$Balance, init$, void, $DirectAudioDevice$DirectDL*)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice$DirectDL$Balance, setValue, void, float)},
		{"setValueImpl", "(F)V", nullptr, 0, $method(DirectAudioDevice$DirectDL$Balance, setValueImpl, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
		{"com.sun.media.sound.DirectAudioDevice$DirectDL$Balance", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Balance", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice$DirectDL$Balance",
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
	$loadClass(DirectAudioDevice$DirectDL$Balance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDevice$DirectDL$Balance);
	});
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Balance::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com