#include <com/sun/media/sound/PortMixer$BoolCtrl$BCT.h>
#include <com/sun/media/sound/PortMixer$BoolCtrl.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void PortMixer$BoolCtrl$BCT::init$($String* name) {
	$BooleanControl$Type::init$(name);
}

PortMixer$BoolCtrl$BCT::PortMixer$BoolCtrl$BCT() {
}

$Class* PortMixer$BoolCtrl$BCT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PortMixer$BoolCtrl$BCT, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixer$BoolCtrl", "com.sun.media.sound.PortMixer", "BoolCtrl", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.PortMixer$BoolCtrl$BCT", "com.sun.media.sound.PortMixer$BoolCtrl", "BCT", $PRIVATE | $STATIC | $FINAL},
		{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixer$BoolCtrl$BCT",
		"javax.sound.sampled.BooleanControl$Type",
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
	$loadClass(PortMixer$BoolCtrl$BCT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixer$BoolCtrl$BCT);
	});
	return class$;
}

$Class* PortMixer$BoolCtrl$BCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com