#include <java/awt/GridBagLayout$1.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/GridBagLayout.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef OTHER

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$ints* GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;

void GridBagLayout$1::clinit$($Class* clazz) {
	$assignStatic(GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CENTER_OFFSET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::OTHER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GridBagLayout$1::GridBagLayout$1() {
}

$Class* GridBagLayout$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GridBagLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.GridBagLayout",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GridBagLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.awt.GridBagLayout$1",
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
		"java.awt.GridBagLayout"
	};
	$loadClass(GridBagLayout$1, name, initialize, &classInfo$$, GridBagLayout$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GridBagLayout$1);
	});
	return class$;
}

$Class* GridBagLayout$1::class$ = nullptr;

	} // awt
} // java