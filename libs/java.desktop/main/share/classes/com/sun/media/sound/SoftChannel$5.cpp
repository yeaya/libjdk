#include <com/sun/media/sound/SoftChannel$5.h>
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

void SoftChannel$5::init$($SoftChannel* this$0, double val$scale) {
	$set(this, this$0, this$0);
	this->val$scale = val$scale;
	this->s = this->val$scale;
}

double SoftChannel$5::transform(double value) {
	double var$0 = -((5.0 / 12.0) / $Math::log(10));
	return var$0 * $Math::log(1 - value * this->s);
}

SoftChannel$5::SoftChannel$5() {
}

$Class* SoftChannel$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$5, this$0)},
		{"val$scale", "D", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$5, val$scale)},
		{"s", "D", nullptr, 0, $field(SoftChannel$5, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftChannel;D)V", "()V", 0, $method(SoftChannel$5, init$, void, $SoftChannel*, double)},
		{"transform", "(D)D", nullptr, $PUBLIC, $virtualMethod(SoftChannel$5, transform, double, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftChannel",
		"createModelConnections",
		"(Lcom/sun/media/sound/ModelIdentifier;[I[I)[Lcom/sun/media/sound/ModelConnectionBlock;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChannel$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChannel$5",
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
	$loadClass(SoftChannel$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChannel$5);
	});
	return class$;
}

$Class* SoftChannel$5::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com