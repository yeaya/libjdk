#include <java/lang/management/ThreadInfo$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/Thread$State.h>
#include <java/lang/management/ThreadInfo.h>
#include <jcpp.h>

#undef BLOCKED
#undef TIMED_WAITING
#undef WAITING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Thread$State = ::java::lang::Thread$State;

namespace java {
	namespace lang {
		namespace management {

$ints* ThreadInfo$1::$SwitchMap$java$lang$Thread$State = nullptr;

void ThreadInfo$1::clinit$($Class* clazz) {
	$assignStatic(ThreadInfo$1::$SwitchMap$java$lang$Thread$State, $new($ints, $($Thread$State::values())->length));
	{
		try {
			ThreadInfo$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::BLOCKED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ThreadInfo$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::WAITING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ThreadInfo$1::$SwitchMap$java$lang$Thread$State->set($Thread$State::TIMED_WAITING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ThreadInfo$1::ThreadInfo$1() {
}

$Class* ThreadInfo$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$Thread$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThreadInfo$1, $SwitchMap$java$lang$Thread$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.ThreadInfo",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.ThreadInfo$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.management.ThreadInfo$1",
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
		"java.lang.management.ThreadInfo"
	};
	$loadClass(ThreadInfo$1, name, initialize, &classInfo$$, ThreadInfo$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadInfo$1);
	});
	return class$;
}

$Class* ThreadInfo$1::class$ = nullptr;

		} // management
	} // lang
} // java