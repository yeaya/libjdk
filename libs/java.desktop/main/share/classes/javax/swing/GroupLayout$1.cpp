#include <javax/swing/GroupLayout$1.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef CENTER
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef TRAILING

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;

namespace javax {
	namespace swing {

$ints* GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;
$ints* GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment = nullptr;

void GroupLayout$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior->set($Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment, $new($ints, $($GroupLayout$Alignment::values())->length));
	{
		try {
			GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment->set($GroupLayout$Alignment::TRAILING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment->set($GroupLayout$Alignment::CENTER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GroupLayout$1::GroupLayout$1() {
}

$Class* GroupLayout$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
		{"$SwitchMap$javax$swing$GroupLayout$Alignment", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$1, $SwitchMap$javax$swing$GroupLayout$Alignment)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.GroupLayout",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.GroupLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.GroupLayout$1",
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
		"javax.swing.GroupLayout"
	};
	$loadClass(GroupLayout$1, name, initialize, &classInfo$$, GroupLayout$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GroupLayout$1);
	});
	return class$;
}

$Class* GroupLayout$1::class$ = nullptr;

	} // swing
} // javax