#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <jcpp.h>

using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _RelativePathPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(RelativePathPattern, init$, void)},
	{}
};

$ClassInfo _RelativePathPattern_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern",
	nullptr,
	nullptr,
	_RelativePathPattern_MethodInfo_
};

$Object* allocate$RelativePathPattern($Class* clazz) {
	return $of($alloc(RelativePathPattern));
}

void RelativePathPattern::init$() {
	$LocationPathPattern::init$();
}

RelativePathPattern::RelativePathPattern() {
}

$Class* RelativePathPattern::load$($String* name, bool initialize) {
	$loadClass(RelativePathPattern, name, initialize, &_RelativePathPattern_ClassInfo_, allocate$RelativePathPattern);
	return class$;
}

$Class* RelativePathPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com