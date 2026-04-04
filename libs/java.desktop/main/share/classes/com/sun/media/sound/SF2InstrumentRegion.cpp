#include <com/sun/media/sound/SF2InstrumentRegion.h>
#include <com/sun/media/sound/SF2Layer.h>
#include <com/sun/media/sound/SF2Region.h>
#include <jcpp.h>

using $SF2Layer = ::com::sun::media::sound::SF2Layer;
using $SF2Region = ::com::sun::media::sound::SF2Region;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SF2InstrumentRegion::init$() {
	$SF2Region::init$();
}

$SF2Layer* SF2InstrumentRegion::getLayer() {
	return this->layer;
}

void SF2InstrumentRegion::setLayer($SF2Layer* layer) {
	$set(this, layer, layer);
}

SF2InstrumentRegion::SF2InstrumentRegion() {
}

$Class* SF2InstrumentRegion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"layer", "Lcom/sun/media/sound/SF2Layer;", nullptr, 0, $field(SF2InstrumentRegion, layer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SF2InstrumentRegion, init$, void)},
		{"getLayer", "()Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC, $method(SF2InstrumentRegion, getLayer, $SF2Layer*)},
		{"setLayer", "(Lcom/sun/media/sound/SF2Layer;)V", nullptr, $PUBLIC, $method(SF2InstrumentRegion, setLayer, void, $SF2Layer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SF2InstrumentRegion",
		"com.sun.media.sound.SF2Region",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SF2InstrumentRegion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SF2InstrumentRegion);
	});
	return class$;
}

$Class* SF2InstrumentRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com