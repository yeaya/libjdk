#include <com/apple/laf/AquaImageFactory$2.h>
#include <com/apple/eawt/Application.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$2::init$() {
}

$Object* AquaImageFactory$2::run() {
	return $$nc($Application::getApplication())->getDockIconImage();
}

AquaImageFactory$2::AquaImageFactory$2() {
}

$Class* AquaImageFactory$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaImageFactory$2, init$, void)},
		{"run", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(AquaImageFactory$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaImageFactory",
		"getGenericJavaIcon",
		"()Ljava/awt/Image;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Image;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$2);
	});
	return class$;
}

$Class* AquaImageFactory$2::class$ = nullptr;

		} // laf
	} // apple
} // com