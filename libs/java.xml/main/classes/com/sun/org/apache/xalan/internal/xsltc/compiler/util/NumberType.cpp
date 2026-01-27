#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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
								namespace util {

$MethodInfo _NumberType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NumberType, init$, void)},
	{"isNumber", "()Z", nullptr, $PUBLIC, $virtualMethod(NumberType, isNumber, bool)},
	{"isSimple", "()Z", nullptr, $PUBLIC, $virtualMethod(NumberType, isSimple, bool)},
	{}
};

$ClassInfo _NumberType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NumberType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_NumberType_MethodInfo_
};

$Object* allocate$NumberType($Class* clazz) {
	return $of($alloc(NumberType));
}

void NumberType::init$() {
	$Type::init$();
}

bool NumberType::isNumber() {
	return true;
}

bool NumberType::isSimple() {
	return true;
}

NumberType::NumberType() {
}

$Class* NumberType::load$($String* name, bool initialize) {
	$loadClass(NumberType, name, initialize, &_NumberType_ClassInfo_, allocate$NumberType);
	return class$;
}

$Class* NumberType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com