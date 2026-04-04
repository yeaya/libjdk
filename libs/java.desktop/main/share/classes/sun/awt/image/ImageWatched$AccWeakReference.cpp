#include <sun/awt/image/ImageWatched$AccWeakReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <sun/awt/image/ImageWatched.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;

namespace sun {
	namespace awt {
		namespace image {

void ImageWatched$AccWeakReference::init$(Object$* ref) {
	$WeakReference::init$(ref);
	$set(this, acc, $AccessController::getContext());
}

ImageWatched$AccWeakReference::ImageWatched$AccWeakReference() {
}

$Class* ImageWatched$AccWeakReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(ImageWatched$AccWeakReference, acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(ImageWatched$AccWeakReference, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageWatched$AccWeakReference", "sun.awt.image.ImageWatched", "AccWeakReference", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImageWatched$AccWeakReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.ImageWatched"
	};
	$loadClass(ImageWatched$AccWeakReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageWatched$AccWeakReference);
	});
	return class$;
}

$Class* ImageWatched$AccWeakReference::class$ = nullptr;

		} // image
	} // awt
} // sun