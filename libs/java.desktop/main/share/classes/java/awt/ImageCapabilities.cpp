#include <java/awt/ImageCapabilities.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void ImageCapabilities::init$(bool accelerated) {
	this->accelerated = false;
	this->accelerated = accelerated;
}

bool ImageCapabilities::isAccelerated() {
	return this->accelerated;
}

bool ImageCapabilities::isTrueVolatile() {
	return false;
}

$Object* ImageCapabilities::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

ImageCapabilities::ImageCapabilities() {
}

$Class* ImageCapabilities::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accelerated", "Z", nullptr, $PRIVATE, $field(ImageCapabilities, accelerated)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(ImageCapabilities, init$, void, bool)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageCapabilities, clone, $Object*)},
		{"isAccelerated", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageCapabilities, isAccelerated, bool)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageCapabilities, isTrueVolatile, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.ImageCapabilities",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageCapabilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCapabilities);
	});
	return class$;
}

$Class* ImageCapabilities::class$ = nullptr;

	} // awt
} // java