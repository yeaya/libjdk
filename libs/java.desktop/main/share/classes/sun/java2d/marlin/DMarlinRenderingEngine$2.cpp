#include <sun/java2d/marlin/DMarlinRenderingEngine$2.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

void DMarlinRenderingEngine$2::init$(int32_t refType) {
	$ReentrantContextProviderCLQ::init$(refType);
}

$ReentrantContext* DMarlinRenderingEngine$2::newContext() {
	return $RendererContext::createContext();
}

DMarlinRenderingEngine$2::DMarlinRenderingEngine$2() {
}

$Class* DMarlinRenderingEngine$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(DMarlinRenderingEngine$2, init$, void, int32_t)},
		{"newContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $PROTECTED, $virtualMethod(DMarlinRenderingEngine$2, newContext, $ReentrantContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.marlin.DMarlinRenderingEngine",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.DMarlinRenderingEngine$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.marlin.DMarlinRenderingEngine$2",
		"sun.java2d.ReentrantContextProviderCLQ",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/java2d/ReentrantContextProviderCLQ<Lsun/java2d/marlin/RendererContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.marlin.DMarlinRenderingEngine"
	};
	$loadClass(DMarlinRenderingEngine$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DMarlinRenderingEngine$2);
	});
	return class$;
}

$Class* DMarlinRenderingEngine$2::class$ = nullptr;

		} // marlin
	} // java2d
} // sun