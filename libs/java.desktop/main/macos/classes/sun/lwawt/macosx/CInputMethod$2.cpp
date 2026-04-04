#include <sun/lwawt/macosx/CInputMethod$2.h>
#include <java/awt/Component.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CInputMethod$2::init$($CInputMethod* this$0) {
	$set(this, this$0, this$0);
}

void CInputMethod$2::run() {
	int32_t offset = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
	if (offset < 0) {
		return;
	}
	$nc($cast($JTextComponent, this->this$0->fAwtFocussedComponent))->select(offset, offset + 1);
	return;
}

CInputMethod$2::CInputMethod$2() {
}

$Class* CInputMethod$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CInputMethod;)V", nullptr, 0, $method(CInputMethod$2, init$, void, $CInputMethod*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CInputMethod$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CInputMethod",
		"selectNextGlyph",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CInputMethod$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CInputMethod$2",
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
	$loadClass(CInputMethod$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CInputMethod$2);
	});
	return class$;
}

$Class* CInputMethod$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun