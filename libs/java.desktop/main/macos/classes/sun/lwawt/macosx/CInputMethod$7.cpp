#include <sun/lwawt/macosx/CInputMethod$7.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $TextHitInfoArray = $Array<::java::awt::font::TextHitInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CInputMethod$7::init$($CInputMethod* this$0, $TextHitInfoArray* val$offsetInfo, int32_t val$screenX, int32_t val$screenY, $ints* val$insertPositionOffset) {
	$set(this, this$0, this$0);
	$set(this, val$offsetInfo, val$offsetInfo);
	this->val$screenX = val$screenX;
	this->val$screenY = val$screenY;
	$set(this, val$insertPositionOffset, val$insertPositionOffset);
}

void CInputMethod$7::run() {
	$synchronized(this->val$offsetInfo) {
		this->val$offsetInfo->set(0, $($nc(this->this$0->fIMContext)->getLocationOffset(this->val$screenX, this->val$screenY)));
		$nc(this->val$insertPositionOffset)->set(0, $nc(this->this$0->fIMContext)->getInsertPositionOffset());
	}
}

CInputMethod$7::CInputMethod$7() {
}

$Class* CInputMethod$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, this$0)},
		{"val$insertPositionOffset", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$insertPositionOffset)},
		{"val$screenY", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$screenY)},
		{"val$screenX", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$screenX)},
		{"val$offsetInfo", "[Ljava/awt/font/TextHitInfo;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$offsetInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[Ljava/awt/font/TextHitInfo;II[I)V", "()V", 0, $method(CInputMethod$7, init$, void, $CInputMethod*, $TextHitInfoArray*, int32_t, int32_t, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CInputMethod$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CInputMethod",
		"characterIndexForPoint",
		"(II)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CInputMethod$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CInputMethod$7",
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
	$loadClass(CInputMethod$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CInputMethod$7);
	});
	return class$;
}

$Class* CInputMethod$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun