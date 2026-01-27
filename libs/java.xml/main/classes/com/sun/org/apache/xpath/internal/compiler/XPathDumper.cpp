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

$MethodInfo _XPathDumper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPathDumper, init$, void)},
	{}
};

$ClassInfo _XPathDumper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.XPathDumper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XPathDumper_MethodInfo_
};

$Object* allocate$XPathDumper($Class* clazz) {
	return $of($alloc(XPathDumper));
}

void XPathDumper::init$() {
}

XPathDumper::XPathDumper() {
}

$Class* XPathDumper::load$($String* name, bool initialize) {
	$loadClass(XPathDumper, name, initialize, &_XPathDumper_ClassInfo_, allocate$XPathDumper);
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