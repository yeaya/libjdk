#include <sun/awt/SunToolkit$2.h>
#include <java/lang/Runnable.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PeerEvent = ::sun::awt::PeerEvent;

namespace sun {
	namespace awt {

void SunToolkit$2::init$(Object$* source, $Runnable* runnable, int64_t flags, int64_t val$when) {
	this->val$when = val$when;
	$PeerEvent::init$(source, runnable, flags);
}

int64_t SunToolkit$2::getWhen() {
	return this->val$when;
}

SunToolkit$2::SunToolkit$2() {
}

$Class* SunToolkit$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$2, val$when)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;JJ)V", nullptr, 0, $method(SunToolkit$2, init$, void, Object$*, $Runnable*, int64_t, int64_t)},
		{"getWhen", "()J", nullptr, $PUBLIC, $virtualMethod(SunToolkit$2, getWhen, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.SunToolkit",
		"executeOnEventHandlerThread",
		"(Ljava/lang/Object;Ljava/lang/Runnable;J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SunToolkit$2",
		"sun.awt.PeerEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunToolkit$2));
	});
	return class$;
}

$Class* SunToolkit$2::class$ = nullptr;

	} // awt
} // sun