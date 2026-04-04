#include <java/awt/BufferCapabilities.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/ImageCapabilities.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void BufferCapabilities::init$($ImageCapabilities* frontCaps, $ImageCapabilities* backCaps, $BufferCapabilities$FlipContents* flipContents) {
	if (frontCaps == nullptr || backCaps == nullptr) {
		$throwNew($IllegalArgumentException, "Image capabilities specified cannot be null"_s);
	}
	$set(this, frontCaps, frontCaps);
	$set(this, backCaps, backCaps);
	$set(this, flipContents, flipContents);
}

$ImageCapabilities* BufferCapabilities::getFrontBufferCapabilities() {
	return this->frontCaps;
}

$ImageCapabilities* BufferCapabilities::getBackBufferCapabilities() {
	return this->backCaps;
}

bool BufferCapabilities::isPageFlipping() {
	return (getFlipContents() != nullptr);
}

$BufferCapabilities$FlipContents* BufferCapabilities::getFlipContents() {
	return this->flipContents;
}

bool BufferCapabilities::isFullScreenRequired() {
	return false;
}

bool BufferCapabilities::isMultiBufferAvailable() {
	return false;
}

$Object* BufferCapabilities::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

BufferCapabilities::BufferCapabilities() {
}

$Class* BufferCapabilities::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frontCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE, $field(BufferCapabilities, frontCaps)},
		{"backCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE, $field(BufferCapabilities, backCaps)},
		{"flipContents", "Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PRIVATE, $field(BufferCapabilities, flipContents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/ImageCapabilities;Ljava/awt/ImageCapabilities;Ljava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC, $method(BufferCapabilities, init$, void, $ImageCapabilities*, $ImageCapabilities*, $BufferCapabilities$FlipContents*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, clone, $Object*)},
		{"getBackBufferCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, getBackBufferCapabilities, $ImageCapabilities*)},
		{"getFlipContents", "()Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, getFlipContents, $BufferCapabilities$FlipContents*)},
		{"getFrontBufferCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, getFrontBufferCapabilities, $ImageCapabilities*)},
		{"isFullScreenRequired", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, isFullScreenRequired, bool)},
		{"isMultiBufferAvailable", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, isMultiBufferAvailable, bool)},
		{"isPageFlipping", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferCapabilities, isPageFlipping, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.BufferCapabilities$FlipContents", "java.awt.BufferCapabilities", "FlipContents", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.BufferCapabilities",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.BufferCapabilities$FlipContents"
	};
	$loadClass(BufferCapabilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferCapabilities);
	});
	return class$;
}

$Class* BufferCapabilities::class$ = nullptr;

	} // awt
} // java