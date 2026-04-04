#include <com/sun/media/sound/SoftControl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* SoftControl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftControl, get, $doubles*, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.SoftControl",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SoftControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftControl);
	});
	return class$;
}

$Class* SoftControl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com