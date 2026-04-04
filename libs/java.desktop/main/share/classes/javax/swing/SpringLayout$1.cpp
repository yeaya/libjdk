#include <javax/swing/SpringLayout$1.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace javax {
	namespace swing {

$ints* SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;

void SpringLayout$1::clinit$($Class* clazz) {
	$assignStatic(SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CENTER_OFFSET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SpringLayout$1::SpringLayout$1() {
}

$Class* SpringLayout$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SpringLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SpringLayout",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SpringLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.SpringLayout$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SpringLayout"
	};
	$loadClass(SpringLayout$1, name, initialize, &classInfo$$, SpringLayout$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SpringLayout$1);
	});
	return class$;
}

$Class* SpringLayout$1::class$ = nullptr;

	} // swing
} // javax