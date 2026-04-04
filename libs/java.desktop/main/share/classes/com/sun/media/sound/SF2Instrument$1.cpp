#include <com/sun/media/sound/SF2Instrument$1.h>
#include <com/sun/media/sound/SF2Instrument.h>
#include <jcpp.h>

using $SF2Instrument = ::com::sun::media::sound::SF2Instrument;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SF2Instrument$1::init$($SF2Instrument* this$0) {
	$set(this, this$0, this$0);
}

double SF2Instrument$1::transform(double value) {
	if (value < 0.5) {
		return 1 - value * 2;
	} else {
		return 0;
	}
}

SF2Instrument$1::SF2Instrument$1() {
}

$Class* SF2Instrument$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SF2Instrument;", nullptr, $FINAL | $SYNTHETIC, $field(SF2Instrument$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SF2Instrument;)V", nullptr, 0, $method(SF2Instrument$1, init$, void, $SF2Instrument*)},
		{"transform", "(D)D", nullptr, $PUBLIC, $virtualMethod(SF2Instrument$1, transform, double, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SF2Instrument",
		"getPerformers",
		"()[Lcom/sun/media/sound/ModelPerformer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SF2Instrument$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SF2Instrument$1",
		"java.lang.Object",
		"com.sun.media.sound.ModelTransform",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SF2Instrument"
	};
	$loadClass(SF2Instrument$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SF2Instrument$1);
	});
	return class$;
}

$Class* SF2Instrument$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com