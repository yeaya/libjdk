#include <com/sun/media/sound/PortMixer$FloatCtrl$FCT.h>
#include <com/sun/media/sound/PortMixer$FloatCtrl.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void PortMixer$FloatCtrl$FCT::init$($String* name) {
	$FloatControl$Type::init$(name);
}

PortMixer$FloatCtrl$FCT::PortMixer$FloatCtrl$FCT() {
}

$Class* PortMixer$FloatCtrl$FCT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PortMixer$FloatCtrl$FCT, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixer$FloatCtrl", "com.sun.media.sound.PortMixer", "FloatCtrl", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.PortMixer$FloatCtrl$FCT", "com.sun.media.sound.PortMixer$FloatCtrl", "FCT", $PRIVATE | $STATIC | $FINAL},
		{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixer$FloatCtrl$FCT",
		"javax.sound.sampled.FloatControl$Type",
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
	$loadClass(PortMixer$FloatCtrl$FCT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixer$FloatCtrl$FCT);
	});
	return class$;
}

$Class* PortMixer$FloatCtrl$FCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com