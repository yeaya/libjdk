#include <com/sun/media/sound/SoftChannel$4.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftChannel$4::init$($SoftChannel* this$0, double val$scale) {
	$set(this, this$0, this$0);
	this->val$scale = val$scale;
	this->s = this->val$scale;
}

double SoftChannel$4::transform(double value) {
	if (this->s < 1) {
		value = this->s + (value * (1.0 - this->s));
	} else if (this->s > 1) {
		value = 1 + (value * (this->s - 1.0));
	} else {
		return 0;
	}
	double var$0 = -((5.0 / 12.0) / $Math::log(10));
	return var$0 * $Math::log(value);
}

SoftChannel$4::SoftChannel$4() {
}

$Class* SoftChannel$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$4, this$0)},
		{"val$scale", "D", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$4, val$scale)},
		{"s", "D", nullptr, 0, $field(SoftChannel$4, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftChannel;D)V", "()V", 0, $method(SoftChannel$4, init$, void, $SoftChannel*, double)},
		{"transform", "(D)D", nullptr, $PUBLIC, $virtualMethod(SoftChannel$4, transform, double, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftChannel",
		"createModelConnections",
		"(Lcom/sun/media/sound/ModelIdentifier;[I[I)[Lcom/sun/media/sound/ModelConnectionBlock;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChannel$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChannel$4",
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
		"com.sun.media.sound.SoftChannel"
	};
	$loadClass(SoftChannel$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChannel$4);
	});
	return class$;
}

$Class* SoftChannel$4::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com