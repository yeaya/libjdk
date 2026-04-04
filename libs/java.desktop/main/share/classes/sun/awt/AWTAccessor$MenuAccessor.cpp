#include <sun/awt/AWTAccessor$MenuAccessor.h>
#include <java/awt/Menu.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace sun {
	namespace awt {

$Class* AWTAccessor$MenuAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getItems", "(Ljava/awt/Menu;)Ljava/util/Vector;", "(Ljava/awt/Menu;)Ljava/util/Vector<Ljava/awt/MenuItem;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuAccessor, getItems, $Vector*, $Menu*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$MenuAccessor", "sun.awt.AWTAccessor", "MenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$MenuAccessor",
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
	$loadClass(AWTAccessor$MenuAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$MenuAccessor);
	});
	return class$;
}

$Class* AWTAccessor$MenuAccessor::class$ = nullptr;

	} // awt
} // sun