#include <com/sun/org/apache/xpath/internal/compiler/XPathDumper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

void XPathDumper::init$() {
}

XPathDumper::XPathDumper() {
}

$Class* XPathDumper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPathDumper, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.compiler.XPathDumper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathDumper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathDumper);
	});
	return class$;
}

$Class* XPathDumper::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com