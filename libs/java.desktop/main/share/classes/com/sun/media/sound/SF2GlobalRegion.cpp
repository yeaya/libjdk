#include <com/sun/media/sound/SF2GlobalRegion.h>
#include <com/sun/media/sound/SF2Region.h>
#include <jcpp.h>

using $SF2Region = ::com::sun::media::sound::SF2Region;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SF2GlobalRegion::init$() {
	$SF2Region::init$();
}

SF2GlobalRegion::SF2GlobalRegion() {
}

$Class* SF2GlobalRegion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SF2GlobalRegion, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SF2GlobalRegion",
		"com.sun.media.sound.SF2Region",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SF2GlobalRegion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SF2GlobalRegion);
	});
	return class$;
}

$Class* SF2GlobalRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com