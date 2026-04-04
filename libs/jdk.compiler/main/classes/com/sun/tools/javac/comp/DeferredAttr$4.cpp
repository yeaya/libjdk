#include <com/sun/tools/javac/comp/DeferredAttr$4.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void DeferredAttr$4::init$($DeferredAttr* this$0) {
	$set(this, this$0, this$0);
}

bool DeferredAttr$4::isStuck() {
	return false;
}

$Set* DeferredAttr$4::stuckVars() {
	return $Collections::emptySet();
}

$Set* DeferredAttr$4::depVars() {
	return $Collections::emptySet();
}

DeferredAttr$4::DeferredAttr$4() {
}

$Class* DeferredAttr$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;)V", nullptr, 0, $method(DeferredAttr$4, init$, void, $DeferredAttr*)},
		{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(DeferredAttr$4, depVars, $Set*)},
		{"isStuck", "()Z", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$4, isStuck, bool)},
		{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(DeferredAttr$4, stuckVars, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.DeferredAttr",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$4",
		"java.lang.Object",
		"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$4);
	});
	return class$;
}

$Class* DeferredAttr$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com