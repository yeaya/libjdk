#include <sun/java2d/marlin/DMarlinRenderingEngine$1.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

void DMarlinRenderingEngine$1::init$(int32_t refType) {
	$ReentrantContextProviderTL::init$(refType);
}

$ReentrantContext* DMarlinRenderingEngine$1::newContext() {
	return $RendererContext::createContext();
}

DMarlinRenderingEngine$1::DMarlinRenderingEngine$1() {
}

$Class* DMarlinRenderingEngine$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(DMarlinRenderingEngine$1, init$, void, int32_t)},
		{"newContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $PROTECTED, $virtualMethod(DMarlinRenderingEngine$1, newContext, $ReentrantContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.marlin.DMarlinRenderingEngine",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.DMarlinRenderingEngine$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.marlin.DMarlinRenderingEngine$1",
		"sun.java2d.ReentrantContextProviderTL",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/java2d/ReentrantContextProviderTL<Lsun/java2d/marlin/RendererContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.marlin.DMarlinRenderingEngine"
	};
	$loadClass(DMarlinRenderingEngine$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DMarlinRenderingEngine$1);
	});
	return class$;
}

$Class* DMarlinRenderingEngine$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun