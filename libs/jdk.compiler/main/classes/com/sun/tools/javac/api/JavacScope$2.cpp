#include <com/sun/tools/javac/api/JavacScope$2.h>
#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef VALIDATOR

using $JavacScope = ::com::sun::tools::javac::api::JavacScope;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacScope$2::init$($JavacScope* this$0, $Env* env) {
	$set(this, this$0, this$0);
	$JavacScope::init$(env);
}

bool JavacScope$2::isStarImportScope() {
	return true;
}

$JavacScope* JavacScope$2::getEnclosingScope() {
	return nullptr;
}

$Iterable* JavacScope$2::getLocalElements() {
	$init($JavacScope);
	return $nc($nc($nc(this->env)->toplevel)->starImportScope)->getSymbols($JavacScope::VALIDATOR);
}

JavacScope$2::JavacScope$2() {
}

$Class* JavacScope$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/api/JavacScope;", nullptr, $FINAL | $SYNTHETIC, $field(JavacScope$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/JavacScope;Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(JavacScope$2, init$, void, $JavacScope*, $Env*)},
		{"getEnclosingScope", "()Lcom/sun/tools/javac/api/JavacScope;", nullptr, $PUBLIC, $virtualMethod(JavacScope$2, getEnclosingScope, $JavacScope*)},
		{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacScope$2, getLocalElements, $Iterable*)},
		{"isStarImportScope", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacScope$2, isStarImportScope, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacScope",
		"getEnclosingScope",
		"()Lcom/sun/tools/javac/api/JavacScope;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacScope$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacScope$2",
		"com.sun.tools.javac.api.JavacScope",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacScope"
	};
	$loadClass(JavacScope$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacScope$2);
	});
	return class$;
}

$Class* JavacScope$2::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com