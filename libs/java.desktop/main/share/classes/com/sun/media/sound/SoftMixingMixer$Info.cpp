#include <com/sun/media/sound/SoftMixingMixer$Info.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMixingMixer$Info::init$() {
	$Mixer$Info::init$("Gervill Sound Mixer"_s, "OpenJDK Proposal"_s, "Software Sound Mixer"_s, "1.0"_s);
}

SoftMixingMixer$Info::SoftMixingMixer$Info() {
}

$Class* SoftMixingMixer$Info::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SoftMixingMixer$Info, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingMixer$Info", "com.sun.media.sound.SoftMixingMixer", "Info", $PRIVATE | $STATIC},
		{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftMixingMixer$Info",
		"javax.sound.sampled.Mixer$Info",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftMixingMixer"
	};
	$loadClass(SoftMixingMixer$Info, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingMixer$Info);
	});
	return class$;
}

$Class* SoftMixingMixer$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com