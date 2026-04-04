#include <com/sun/media/sound/PortMixer$CompCtrl$CCT.h>
#include <com/sun/media/sound/PortMixer$CompCtrl.h>
#include <javax/sound/sampled/CompoundControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompoundControl$Type = ::javax::sound::sampled::CompoundControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void PortMixer$CompCtrl$CCT::init$($String* name) {
	$CompoundControl$Type::init$(name);
}

PortMixer$CompCtrl$CCT::PortMixer$CompCtrl$CCT() {
}

$Class* PortMixer$CompCtrl$CCT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PortMixer$CompCtrl$CCT, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixer$CompCtrl", "com.sun.media.sound.PortMixer", "CompCtrl", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.PortMixer$CompCtrl$CCT", "com.sun.media.sound.PortMixer$CompCtrl", "CCT", $PRIVATE | $STATIC | $FINAL},
		{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixer$CompCtrl$CCT",
		"javax.sound.sampled.CompoundControl$Type",
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
	$loadClass(PortMixer$CompCtrl$CCT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixer$CompCtrl$CCT);
	});
	return class$;
}

$Class* PortMixer$CompCtrl$CCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com