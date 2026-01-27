#include <com/sun/org/apache/xpath/internal/functions/FuncCeiling.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncCeiling_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncCeiling, serialVersionUID)},
	{}
};

$MethodInfo _FuncCeiling_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncCeiling, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncCeiling, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncCeiling_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncCeiling",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncCeiling_FieldInfo_,
	_FuncCeiling_MethodInfo_
};

$Object* allocate$FuncCeiling($Class* clazz) {
	return $of($alloc(FuncCeiling));
}

void FuncCeiling::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncCeiling::execute($XPathContext* xctxt) {
	return $new($XNumber, $Math::ceil($nc($($nc(this->m_arg0)->execute(xctxt)))->num()));
}

FuncCeiling::FuncCeiling() {
}

$Class* FuncCeiling::load$($String* name, bool initialize) {
	$loadClass(FuncCeiling, name, initialize, &_FuncCeiling_ClassInfo_, allocate$FuncCeiling);
	return class$;
}

$Class* FuncCeiling::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com