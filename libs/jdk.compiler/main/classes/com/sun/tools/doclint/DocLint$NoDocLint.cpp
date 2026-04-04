#include <com/sun/tools/doclint/DocLint$NoDocLint.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/doclint/DocLint.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef XCHECK_PACKAGE
#undef XMSGS_CUSTOM_PREFIX
#undef XMSGS_OPTION

using $JavacTask = ::com::sun::source::util::JavacTask;
using $DocLint = ::com::sun::tools::doclint::DocLint;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

void DocLint$NoDocLint::init$() {
	$DocLint::init$();
}

$String* DocLint$NoDocLint::getName() {
	return "doclint-not-available"_s;
}

void DocLint$NoDocLint::init($JavacTask* task, $StringArray* args) {
	$throwNew($IllegalStateException, "doclint not available"_s);
}

bool DocLint$NoDocLint::isValidOption($String* s) {
	$init($DocLint);
	bool var$1 = $nc(s)->equals($DocLint::XMSGS_OPTION);
	bool var$0 = var$1 || s->startsWith($DocLint::XMSGS_CUSTOM_PREFIX);
	return var$0 || s->startsWith($DocLint::XCHECK_PACKAGE);
}

DocLint$NoDocLint::DocLint$NoDocLint() {
}

$Class* DocLint$NoDocLint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DocLint$NoDocLint, init$, void)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocLint$NoDocLint, getName, $String*)},
		{"init", "(Lcom/sun/source/util/JavacTask;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(DocLint$NoDocLint, init, void, $JavacTask*, $StringArray*)},
		{"isValidOption", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DocLint$NoDocLint, isValidOption, bool, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.doclint.DocLint$NoDocLint", "com.sun.tools.doclint.DocLint", "NoDocLint", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.doclint.DocLint$NoDocLint",
		"com.sun.tools.doclint.DocLint",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.doclint.DocLint"
	};
	$loadClass(DocLint$NoDocLint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocLint$NoDocLint);
	});
	return class$;
}

$Class* DocLint$NoDocLint::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com