#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* FPMethodCalledTest$Resultable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getResult", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FPMethodCalledTest$Resultable, getResult, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"FPMethodCalledTest$Resultable",
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
		"FPMethodCalledTest"
	};
	$loadClass(FPMethodCalledTest$Resultable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$Resultable);
	});
	return class$;
}

$Class* FPMethodCalledTest$Resultable::class$ = nullptr;