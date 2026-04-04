#include <com/sun/media/sound/SoftPerformer$1.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftPerformer$1::init$() {
}

double SoftPerformer$1::transform(double value) {
	int32_t v = $cast(int32_t, (value * 16384.0));
	int32_t msb = v >> 7;
	int32_t lsb = v & 0x7f;
	return (double)(msb * 100 + lsb);
}

SoftPerformer$1::SoftPerformer$1() {
}

$Class* SoftPerformer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SoftPerformer$1, init$, void)},
		{"transform", "(D)D", nullptr, $PUBLIC, $virtualMethod(SoftPerformer$1, transform, double, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftPerformer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftPerformer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftPerformer$1",
		"java.lang.Object",
		"com.sun.media.sound.ModelTransform",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftPerformer"
	};
	$loadClass(SoftPerformer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftPerformer$1);
	});
	return class$;
}

$Class* SoftPerformer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com