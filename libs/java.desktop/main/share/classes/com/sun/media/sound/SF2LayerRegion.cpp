#include <com/sun/media/sound/SF2LayerRegion.h>
#include <com/sun/media/sound/SF2Region.h>
#include <com/sun/media/sound/SF2Sample.h>
#include <jcpp.h>

using $SF2Region = ::com::sun::media::sound::SF2Region;
using $SF2Sample = ::com::sun::media::sound::SF2Sample;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SF2LayerRegion::init$() {
	$SF2Region::init$();
}

$SF2Sample* SF2LayerRegion::getSample() {
	return this->sample;
}

void SF2LayerRegion::setSample($SF2Sample* sample) {
	$set(this, sample, sample);
}

SF2LayerRegion::SF2LayerRegion() {
}

$Class* SF2LayerRegion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sample", "Lcom/sun/media/sound/SF2Sample;", nullptr, 0, $field(SF2LayerRegion, sample)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SF2LayerRegion, init$, void)},
		{"getSample", "()Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC, $method(SF2LayerRegion, getSample, $SF2Sample*)},
		{"setSample", "(Lcom/sun/media/sound/SF2Sample;)V", nullptr, $PUBLIC, $method(SF2LayerRegion, setSample, void, $SF2Sample*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SF2LayerRegion",
		"com.sun.media.sound.SF2Region",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SF2LayerRegion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SF2LayerRegion);
	});
	return class$;
}

$Class* SF2LayerRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com