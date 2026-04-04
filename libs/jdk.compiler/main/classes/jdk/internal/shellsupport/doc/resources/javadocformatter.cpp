#include <jdk/internal/shellsupport/doc/resources/javadocformatter.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				namespace resources {

void javadocformatter::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javadocformatter::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CAP_Parameters"_s,
			"Parameters:"_s
		}),
		$$new($ObjectArray, {
			"CAP_Returns"_s,
			"Returns:"_s
		}),
		$$new($ObjectArray, {
			"CAP_Thrown_Exceptions"_s,
			"Thrown Exceptions:"_s
		}),
		$$new($ObjectArray, {
			"CAP_TypeParameters"_s,
			"Type Parameters:"_s
		}),
		$$new($ObjectArray, {
			"Inline_Returns"_s,
			"Returns {0}."_s
		})
	});
}

javadocformatter::javadocformatter() {
}

$Class* javadocformatter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(javadocformatter, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(javadocformatter, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.shellsupport.doc.resources.javadocformatter",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(javadocformatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(javadocformatter);
	});
	return class$;
}

$Class* javadocformatter::class$ = nullptr;

				} // resources
			} // doc
		} // shellsupport
	} // internal
} // jdk