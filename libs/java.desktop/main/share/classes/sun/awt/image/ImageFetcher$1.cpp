#include <sun/awt/image/ImageFetcher$1.h>
#include <java/lang/Error.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/image/FetcherInfo.h>
#include <sun/awt/image/ImageFetcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $FetcherInfo = ::sun::awt::image::FetcherInfo;
using $ImageFetcher = ::sun::awt::image::ImageFetcher;

namespace sun {
	namespace awt {
		namespace image {

void ImageFetcher$1::init$($FetcherInfo* val$info, $ThreadGroup* val$fetcherGroup) {
	$set(this, val$info, val$info);
	$set(this, val$fetcherGroup, val$fetcherGroup);
}

$Object* ImageFetcher$1::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc($nc(this->val$info)->fetchers)->length; ++i) {
		if (this->val$info->fetchers->get(i) == nullptr) {
			$var($ImageFetcher, f, $new($ImageFetcher, this->val$fetcherGroup, i));
			try {
				f->start();
				this->val$info->fetchers->set(i, f);
				++this->val$info->numFetchers;
				break;
			} catch ($Error& e) {
			}
		}
	}
	return nullptr;
}

ImageFetcher$1::ImageFetcher$1() {
}

$Class* ImageFetcher$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$fetcherGroup", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(ImageFetcher$1, val$fetcherGroup)},
		{"val$info", "Lsun/awt/image/FetcherInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ImageFetcher$1, val$info)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/FetcherInfo;Ljava/lang/ThreadGroup;)V", "()V", 0, $method(ImageFetcher$1, init$, void, $FetcherInfo*, $ThreadGroup*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageFetcher$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.image.ImageFetcher",
		"createFetchers",
		"(Lsun/awt/image/FetcherInfo;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageFetcher$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImageFetcher$1",
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
		"sun.awt.image.ImageFetcher"
	};
	$loadClass(ImageFetcher$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageFetcher$1);
	});
	return class$;
}

$Class* ImageFetcher$1::class$ = nullptr;

		} // image
	} // awt
} // sun