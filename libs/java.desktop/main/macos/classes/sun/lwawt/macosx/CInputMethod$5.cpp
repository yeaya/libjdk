#include <sun/lwawt/macosx/CInputMethod$5.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CInputMethod$5::init$($CInputMethod* this$0, $ints* val$returnValue) {
	$set(this, this$0, this$0);
	$set(this, val$returnValue, val$returnValue);
}

void CInputMethod$5::run() {
	$synchronized(this->val$returnValue) {
		this->val$returnValue->set(0, $nc(this->this$0->fIMContext)->getInsertPositionOffset());
	}
}

CInputMethod$5::CInputMethod$5() {
}

$Class* CInputMethod$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$5, this$0)},
		{"val$returnValue", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$5, val$returnValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[I)V", "()V", 0, $method(CInputMethod$5, init$, void, $CInputMethod*, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CInputMethod$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CInputMethod",
		"markedRange",
		"()[I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CInputMethod$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CInputMethod$5",
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
		"sun.lwawt.macosx.CInputMethod"
	};
	$loadClass(CInputMethod$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CInputMethod$5);
	});
	return class$;
}

$Class* CInputMethod$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun