#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$2.h>
#include <java/awt/Checkbox.h>
#include <java/awt/Component.h>
#include <javax/swing/JRadioButton.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <jcpp.h>

using $Checkbox = ::java::awt::Checkbox;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRadioButton = ::javax::swing::JRadioButton;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;
using $LWCheckboxPeer$CheckboxDelegate = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate;

namespace sun {
	namespace lwawt {

void LWCheckboxPeer$CheckboxDelegate$2::init$($LWCheckboxPeer$CheckboxDelegate* this$1, $LWCheckboxPeer* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$JRadioButton::init$();
}

bool LWCheckboxPeer$CheckboxDelegate$2::hasFocus() {
	return $$sure($Checkbox, $nc(this->this$1->this$0)->getTarget())->hasFocus();
}

LWCheckboxPeer$CheckboxDelegate$2::LWCheckboxPeer$CheckboxDelegate$2() {
}

$Class* LWCheckboxPeer$CheckboxDelegate$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate$2, this$1)},
		{"val$this$0", "Lsun/lwawt/LWCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate$2, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;Lsun/lwawt/LWCheckboxPeer;)V", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate$2, init$, void, $LWCheckboxPeer$CheckboxDelegate*, $LWCheckboxPeer*)},
		{"hasFocus", "()Z", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$CheckboxDelegate$2, hasFocus, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWCheckboxPeer$CheckboxDelegate",
		"<init>",
		"(Lsun/lwawt/LWCheckboxPeer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate", "sun.lwawt.LWCheckboxPeer", "CheckboxDelegate", $FINAL},
		{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2",
		"javax.swing.JRadioButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWCheckboxPeer"
	};
	$loadClass(LWCheckboxPeer$CheckboxDelegate$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWCheckboxPeer$CheckboxDelegate$2));
	});
	return class$;
}

$Class* LWCheckboxPeer$CheckboxDelegate$2::class$ = nullptr;

	} // lwawt
} // sun