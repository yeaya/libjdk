#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$KeyEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOriginalSource", "(Ljava/awt/event/KeyEvent;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyEventAccessor, getOriginalSource, $Component*, $KeyEvent*)},
		{"isProxyActive", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyEventAccessor, isProxyActive, bool, $KeyEvent*)},
		{"setExtendedKeyCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyEventAccessor, setExtendedKeyCode, void, $KeyEvent*, int64_t)},
		{"setPrimaryLevelUnicode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyEventAccessor, setPrimaryLevelUnicode, void, $KeyEvent*, int64_t)},
		{"setRawCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyEventAccessor, setRawCode, void, $KeyEvent*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$KeyEventAccessor", "sun.awt.AWTAccessor", "KeyEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$KeyEventAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$KeyEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$KeyEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$KeyEventAccessor::class$ = nullptr;

	} // awt
} // sun