#include <sun/java2d/pipe/AAShapePipe$1.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/pipe/AAShapePipe$TileState.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $AAShapePipe$TileState = ::sun::java2d::pipe::AAShapePipe$TileState;

namespace sun {
	namespace java2d {
		namespace pipe {

void AAShapePipe$1::init$(int32_t refType) {
	$ReentrantContextProviderTL::init$(refType);
}

$ReentrantContext* AAShapePipe$1::newContext() {
	return $new($AAShapePipe$TileState);
}

AAShapePipe$1::AAShapePipe$1() {
}

$Class* AAShapePipe$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AAShapePipe$1, init$, void, int32_t)},
		{"newContext", "()Lsun/java2d/pipe/AAShapePipe$TileState;", nullptr, $PROTECTED, $virtualMethod(AAShapePipe$1, newContext, $ReentrantContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.pipe.AAShapePipe",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.AAShapePipe$1", nullptr, nullptr, 0},
		{"sun.java2d.pipe.AAShapePipe$TileState", "sun.java2d.pipe.AAShapePipe", "TileState", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.pipe.AAShapePipe$1",
		"sun.java2d.ReentrantContextProviderTL",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/java2d/ReentrantContextProviderTL<Lsun/java2d/pipe/AAShapePipe$TileState;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.pipe.AAShapePipe"
	};
	$loadClass(AAShapePipe$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AAShapePipe$1);
	});
	return class$;
}

$Class* AAShapePipe$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun