#include <sun/lwawt/macosx/LWCToolkit$3.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$3::init$($booleans* val$ret, Object$* val$a, Object$* val$b) {
	$set(this, val$ret, val$ret);
	$set(this, val$a, val$a);
	$set(this, val$b, val$b);
}

void LWCToolkit$3::run() {
	$synchronized(this->val$ret) {
		this->val$ret->set(0, $nc(this->val$a)->equals(this->val$b));
	}
}

LWCToolkit$3::LWCToolkit$3() {
}

$Class* LWCToolkit$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$b", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$b)},
		{"val$a", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$a)},
		{"val$ret", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$ret)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([ZLjava/lang/Object;Ljava/lang/Object;)V", "()V", 0, $method(LWCToolkit$3, init$, void, $booleans*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWCToolkit$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.LWCToolkit",
		"doEquals",
		"(Ljava/lang/Object;Ljava/lang/Object;Ljava/awt/Component;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCToolkit$3);
	});
	return class$;
}

$Class* LWCToolkit$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun