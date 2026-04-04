#include <com/sun/media/sound/PortMixer$CompCtrl.h>
#include <com/sun/media/sound/PortMixer$CompCtrl$CCT.h>
#include <com/sun/media/sound/PortMixer.h>
#include <javax/sound/sampled/CompoundControl.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $PortMixer$CompCtrl$CCT = ::com::sun::media::sound::PortMixer$CompCtrl$CCT;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompoundControl = ::javax::sound::sampled::CompoundControl;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void PortMixer$CompCtrl::init$($String* name, $ControlArray* controls) {
	$CompoundControl::init$($$new($PortMixer$CompCtrl$CCT, name), controls);
}

PortMixer$CompCtrl::PortMixer$CompCtrl() {
}

$Class* PortMixer$CompCtrl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljavax/sound/sampled/Control;)V", nullptr, $PRIVATE, $method(PortMixer$CompCtrl, init$, void, $String*, $ControlArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixer$CompCtrl", "com.sun.media.sound.PortMixer", "CompCtrl", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.PortMixer$CompCtrl$CCT", "com.sun.media.sound.PortMixer$CompCtrl", "CCT", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixer$CompCtrl",
		"javax.sound.sampled.CompoundControl",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.PortMixer"
	};
	$loadClass(PortMixer$CompCtrl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixer$CompCtrl);
	});
	return class$;
}

$Class* PortMixer$CompCtrl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com