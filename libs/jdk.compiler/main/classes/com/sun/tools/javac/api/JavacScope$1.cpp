#include <com/sun/tools/javac/api/JavacScope$1.h>
#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef VALIDATOR

using $JavacScope = ::com::sun::tools::javac::api::JavacScope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacScope$1::init$($Env* env) {
	$JavacScope::init$(env);
}

$Iterable* JavacScope$1::getLocalElements() {
	$var($Scope$CompoundScope, result, $new($Scope$CompoundScope, $nc($nc(this->env)->toplevel)->packge));
	result->prependSubScope(this->env->toplevel->toplevelScope);
	result->prependSubScope($nc(this->env->toplevel)->namedImportScope);
	$init($JavacScope);
	return result->getSymbols($JavacScope::VALIDATOR);
}

$JavacScope* JavacScope$1::getEnclosingScope() {
	return $JavacScope::getEnclosingScope();
}

JavacScope$1::JavacScope$1() {
}

$Class* JavacScope$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(JavacScope$1, init$, void, $Env*)},
		{"getEnclosingScope", "()Lcom/sun/source/tree/Scope;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacScope$1, getEnclosingScope, $JavacScope*)},
		{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacScope$1, getLocalElements, $Iterable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacScope",
		"create",
		"(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/api/JavacScope;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacScope$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacScope$1",
		"com.sun.tools.javac.api.JavacScope",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacScope"
	};
	$loadClass(JavacScope$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacScope$1);
	});
	return class$;
}

$Class* JavacScope$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com