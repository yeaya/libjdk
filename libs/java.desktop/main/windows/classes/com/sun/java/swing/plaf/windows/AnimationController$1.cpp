#include <com/sun/java/swing/plaf/windows/AnimationController$1.h>
#include <com/sun/java/swing/plaf/windows/AnimationController.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef DOWNDISABLED
#undef DOWNHOT
#undef DOWNNORMAL
#undef DOWNPRESSED
#undef LEFTDISABLED
#undef LEFTHOT
#undef LEFTNORMAL
#undef LEFTPRESSED
#undef RIGHTDISABLED
#undef RIGHTHOT
#undef RIGHTNORMAL
#undef RIGHTPRESSED

using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$ints* AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State = nullptr;

void AnimationController$1::clinit$($Class* clazz) {
	$assignStatic(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State, $new($ints, $($TMSchema$State::values())->length));
	{
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::DOWNPRESSED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::LEFTPRESSED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::RIGHTPRESSED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::DOWNDISABLED->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::LEFTDISABLED->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::RIGHTDISABLED->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::DOWNHOT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::LEFTHOT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::RIGHTHOT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::DOWNNORMAL->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::LEFTNORMAL->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::RIGHTNORMAL->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AnimationController$1::AnimationController$1() {
}

$Class* AnimationController$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AnimationController$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.AnimationController",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.AnimationController$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.java.swing.plaf.windows.AnimationController$1",
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
		"com.sun.java.swing.plaf.windows.AnimationController"
	};
	$loadClass(AnimationController$1, name, initialize, &classInfo$$, AnimationController$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AnimationController$1);
	});
	return class$;
}

$Class* AnimationController$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com