#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* DeferredAttr$DeferredStuckPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DeferredAttr$DeferredStuckPolicy, depVars, $Set*)},
		{"isStuck", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredAttr$DeferredStuckPolicy, isStuck, bool)},
		{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DeferredAttr$DeferredStuckPolicy, stuckVars, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy",
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
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$DeferredStuckPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredStuckPolicy);
	});
	return class$;
}

$Class* DeferredAttr$DeferredStuckPolicy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com