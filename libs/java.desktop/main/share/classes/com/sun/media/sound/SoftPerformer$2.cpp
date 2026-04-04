#include <com/sun/media/sound/SoftPerformer$2.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <jcpp.h>

using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftPerformer$2::init$($SoftPerformer* this$0, double val$scale) {
	$set(this, this$0, this$0);
	this->val$scale = val$scale;
	this->s = this->val$scale;
}

double SoftPerformer$2::transform(double value) {
	value = value * 2 - 1;
	value *= 600;
	if (this->s == 0) {
		return value;
	} else if (this->s > 0) {
		if (value < -this->s) {
			value = -this->s;
		}
		return value;
	} else {
		if (value < this->s) {
			value = -this->s;
		}
		return -value;
	}
}

SoftPerformer$2::SoftPerformer$2() {
}

$Class* SoftPerformer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftPerformer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftPerformer$2, this$0)},
		{"val$scale", "D", nullptr, $FINAL | $SYNTHETIC, $field(SoftPerformer$2, val$scale)},
		{"s", "D", nullptr, 0, $field(SoftPerformer$2, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftPerformer;D)V", "()V", 0, $method(SoftPerformer$2, init$, void, $SoftPerformer*, double)},
		{"transform", "(D)D", nullptr, $PUBLIC, $virtualMethod(SoftPerformer$2, transform, double, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftPerformer",
		"<init>",
		"(Lcom/sun/media/sound/ModelPerformer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftPerformer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftPerformer$2",
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
		"com.sun.media.sound.SoftPerformer"
	};
	$loadClass(SoftPerformer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftPerformer$2);
	});
	return class$;
}

$Class* SoftPerformer$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com