#include <sun/awt/image/ImageDecoder$1.h>
#include <sun/awt/image/ImageDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

void ImageDecoder$1::init$($ImageDecoder* this$0) {
	$set(this, this$0, this$0);
}

$Object* ImageDecoder$1::run() {
	$nc(this->this$0->feeder)->interrupt();
	return nullptr;
}

ImageDecoder$1::ImageDecoder$1() {
}

$Class* ImageDecoder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/image/ImageDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(ImageDecoder$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/ImageDecoder;)V", nullptr, 0, $method(ImageDecoder$1, init$, void, $ImageDecoder*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageDecoder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.image.ImageDecoder",
		"abort",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageDecoder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImageDecoder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.ImageDecoder"
	};
	$loadClass(ImageDecoder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageDecoder$1);
	});
	return class$;
}

$Class* ImageDecoder$1::class$ = nullptr;

		} // image
	} // awt
} // sun