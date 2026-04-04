#include <sun/lwawt/macosx/CCheckboxMenuItem$1.h>
#include <java/awt/CheckboxMenuItem.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CCheckboxMenuItem = ::sun::lwawt::macosx::CCheckboxMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CCheckboxMenuItem$1::init$($CCheckboxMenuItem* this$0, $CheckboxMenuItem* val$target, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$target, val$target);
	this->val$state = val$state;
}

void CCheckboxMenuItem$1::run() {
	$nc(this->val$target)->setState(this->val$state);
}

CCheckboxMenuItem$1::CCheckboxMenuItem$1() {
}

$Class* CCheckboxMenuItem$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CCheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, this$0)},
		{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, val$state)},
		{"val$target", "Ljava/awt/CheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, val$target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;Ljava/awt/CheckboxMenuItem;Z)V", "()V", 0, $method(CCheckboxMenuItem$1, init$, void, $CCheckboxMenuItem*, $CheckboxMenuItem*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CCheckboxMenuItem",
		"handleAction",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CCheckboxMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CCheckboxMenuItem$1",
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
		"sun.lwawt.macosx.CCheckboxMenuItem"
	};
	$loadClass(CCheckboxMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CCheckboxMenuItem$1);
	});
	return class$;
}

$Class* CCheckboxMenuItem$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun