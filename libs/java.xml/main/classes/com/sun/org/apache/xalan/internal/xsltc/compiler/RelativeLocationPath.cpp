#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
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

$MethodInfo _RelativeLocationPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(RelativeLocationPath, init$, void)},
	{"getAxis", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelativeLocationPath, getAxis, int32_t)},
	{"setAxis", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelativeLocationPath, setAxis, void, int32_t)},
	{}
};

$ClassInfo _RelativeLocationPath_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	nullptr,
	_RelativeLocationPath_MethodInfo_
};

$Object* allocate$RelativeLocationPath($Class* clazz) {
	return $of($alloc(RelativeLocationPath));
}

void RelativeLocationPath::init$() {
	$Expression::init$();
}

RelativeLocationPath::RelativeLocationPath() {
}

$Class* RelativeLocationPath::load$($String* name, bool initialize) {
	$loadClass(RelativeLocationPath, name, initialize, &_RelativeLocationPath_ClassInfo_, allocate$RelativeLocationPath);
	return class$;
}

$Class* RelativeLocationPath::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com