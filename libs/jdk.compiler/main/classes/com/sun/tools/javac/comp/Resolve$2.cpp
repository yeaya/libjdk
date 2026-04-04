#include <com/sun/tools/javac/comp/Resolve$2.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$2::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

void Resolve$2::argumentsAcceptable($Env* env, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $List* argtypes, $List* formals, $Warner* warn) {
}

$Resolve$MethodCheck* Resolve$2::mostSpecificCheck($List* actuals) {
	return this;
}

Resolve$2::Resolve$2() {
}

$Class* Resolve$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$2, init$, void, $Resolve*)},
		{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $virtualMethod(Resolve$2, argumentsAcceptable, void, $Env*, $DeferredAttr$DeferredAttrContext*, $List*, $List*, $Warner*)},
		{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC, $virtualMethod(Resolve$2, mostSpecificCheck, $Resolve$MethodCheck*, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$2",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$MethodCheck",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$2);
	});
	return class$;
}

$Class* Resolve$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com