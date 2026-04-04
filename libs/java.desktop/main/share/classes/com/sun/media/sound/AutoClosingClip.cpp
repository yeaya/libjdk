#include <com/sun/media/sound/AutoClosingClip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* AutoClosingClip::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isAutoClosing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AutoClosingClip, isAutoClosing, bool)},
		{"setAutoClosing", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AutoClosingClip, setAutoClosing, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.media.sound.AutoClosingClip",
		nullptr,
		"javax.sound.sampled.Clip",
		nullptr,
		methodInfos$$
	};
	$loadClass(AutoClosingClip, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AutoClosingClip);
	});
	return class$;
}

$Class* AutoClosingClip::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com