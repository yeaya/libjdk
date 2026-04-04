#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Mute.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <jcpp.h>

#undef MUTE

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
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

void DirectAudioDevice$DirectDL$Mute::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($BooleanControl$Type);
	$BooleanControl::init$($BooleanControl$Type::MUTE, false, "True"_s, "False"_s);
}

void DirectAudioDevice$DirectDL$Mute::setValue(bool newValue) {
	$BooleanControl::setValue(newValue);
	this->this$0->calcVolume();
}

DirectAudioDevice$DirectDL$Mute::DirectAudioDevice$DirectDL$Mute() {
}

$Class* DirectAudioDevice$DirectDL$Mute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Mute, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(DirectAudioDevice$DirectDL$Mute, init$, void, $DirectAudioDevice$DirectDL*)},
		{"setValue", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice$DirectDL$Mute, setValue, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
		{"com.sun.media.sound.DirectAudioDevice$DirectDL$Mute", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Mute", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice$DirectDL$Mute",
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
		"com.sun.media.sound.DirectAudioDevice"
	};
	$loadClass(DirectAudioDevice$DirectDL$Mute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDevice$DirectDL$Mute);
	});
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Mute::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com