#include <com/sun/tools/doclint/DocLint$1.h>
#include <com/sun/tools/doclint/DocLint$NoDocLint.h>
#include <jcpp.h>

using $DocLint$NoDocLint = ::com::sun::tools::doclint::DocLint$NoDocLint;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

void DocLint$1::init$() {
}

$Class* DocLint$1::type() {
	$load($DocLint$NoDocLint);
	return $DocLint$NoDocLint::class$;
}

$Object* DocLint$1::get() {
	return $new($DocLint$NoDocLint);
}

DocLint$1::DocLint$1() {
}

$Class* DocLint$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DocLint$1, init$, void)},
		{"get", "()Lcom/sun/tools/doclint/DocLint;", nullptr, $PUBLIC, $virtualMethod(DocLint$1, get, $Object*)},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Lcom/sun/tools/doclint/DocLint;>;", $PUBLIC, $virtualMethod(DocLint$1, type, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.doclint.DocLint",
		"newDocLint",
		"()Lcom/sun/tools/doclint/DocLint;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.doclint.DocLint$1", nullptr, nullptr, 0},
		{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.doclint.DocLint$1",
		"java.lang.Object",
		"java.util.ServiceLoader$Provider",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/ServiceLoader$Provider<Lcom/sun/tools/doclint/DocLint;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.doclint.DocLint"
	};
	$loadClass(DocLint$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocLint$1);
	});
	return class$;
}

$Class* DocLint$1::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com