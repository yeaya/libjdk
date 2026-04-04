#include <sun/java2d/xr/XRCompositeManager$1.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;

namespace sun {
	namespace java2d {
		namespace xr {

void XRCompositeManager$1::init$($XRCompositeManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* XRCompositeManager$1::run() {
	return $of($System::getProperty("sun.java2d.xrgradcache"_s));
}

XRCompositeManager$1::XRCompositeManager$1() {
}

$Class* XRCompositeManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/xr/XRCompositeManager;", nullptr, $FINAL | $SYNTHETIC, $field(XRCompositeManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/xr/XRCompositeManager;)V", nullptr, 0, $method(XRCompositeManager$1, init$, void, $XRCompositeManager*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XRCompositeManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.xr.XRCompositeManager",
		"<init>",
		"(Lsun/java2d/xr/XRSurfaceData;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.xr.XRCompositeManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.xr.XRCompositeManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.xr.XRCompositeManager"
	};
	$loadClass(XRCompositeManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRCompositeManager$1);
	});
	return class$;
}

$Class* XRCompositeManager$1::class$ = nullptr;

		} // xr
	} // java2d
} // sun