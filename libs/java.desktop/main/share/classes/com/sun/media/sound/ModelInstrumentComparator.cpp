#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void ModelInstrumentComparator::init$() {
}

int32_t ModelInstrumentComparator::compare($Instrument* arg0, $Instrument* arg1) {
	$useLocalObjectStack();
	$var($Patch, p0, $nc(arg0)->getPatch());
	$var($Patch, p1, $nc(arg1)->getPatch());
	int32_t var$0 = $nc(p0)->getBank() * 128;
	int32_t a = var$0 + p0->getProgram();
	int32_t var$1 = $nc(p1)->getBank() * 128;
	int32_t b = var$1 + p1->getProgram();
	if ($instanceOf($ModelPatch, p0)) {
		a += $cast($ModelPatch, p0)->isPercussion() ? 0x00200000 : 0;
	}
	if ($instanceOf($ModelPatch, p1)) {
		b += $cast($ModelPatch, p1)->isPercussion() ? 0x00200000 : 0;
	}
	return a - b;
}

int32_t ModelInstrumentComparator::compare(Object$* arg0, Object$* arg1) {
	return this->compare($cast($Instrument, arg0), $cast($Instrument, arg1));
}

ModelInstrumentComparator::ModelInstrumentComparator() {
}

$Class* ModelInstrumentComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModelInstrumentComparator, init$, void)},
		{"compare", "(Ljavax/sound/midi/Instrument;Ljavax/sound/midi/Instrument;)I", nullptr, $PUBLIC, $method(ModelInstrumentComparator, compare, int32_t, $Instrument*, $Instrument*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ModelInstrumentComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelInstrumentComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljavax/sound/midi/Instrument;>;"
	};
	$loadClass(ModelInstrumentComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelInstrumentComparator);
	});
	return class$;
}

$Class* ModelInstrumentComparator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com