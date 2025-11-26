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

$MethodInfo _javadocformatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(javadocformatter::*)()>(&javadocformatter::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _javadocformatter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.shellsupport.doc.resources.javadocformatter",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javadocformatter_MethodInfo_
};

$Object* allocate$javadocformatter($Class* clazz) {
	return $of($alloc(javadocformatter));
}

void javadocformatter::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javadocformatter::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CAP_Parameters"_s),
			$of("Parameters:"_s)
		}),
		$$new($ObjectArray, {
			$of("CAP_Returns"_s),
			$of("Returns:"_s)
		}),
		$$new($ObjectArray, {
			$of("CAP_Thrown_Exceptions"_s),
			$of("Thrown Exceptions:"_s)
		}),
		$$new($ObjectArray, {
			$of("CAP_TypeParameters"_s),
			$of("Type Parameters:"_s)
		}),
		$$new($ObjectArray, {
			$of("Inline_Returns"_s),
			$of("Returns {0}."_s)
		})
	});
}

javadocformatter::javadocformatter() {
}

$Class* javadocformatter::load$($String* name, bool initialize) {
	$loadClass(javadocformatter, name, initialize, &_javadocformatter_ClassInfo_, allocate$javadocformatter);
	return class$;
}

$Class* javadocformatter::class$ = nullptr;

				} // resources
			} // doc
		} // shellsupport
	} // internal
} // jdk