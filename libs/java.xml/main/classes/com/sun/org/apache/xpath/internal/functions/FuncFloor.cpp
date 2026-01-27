#include <com/sun/org/apache/xpath/internal/functions/FuncFloor.h>

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

$FieldInfo _FuncFloor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncFloor, serialVersionUID)},
	{}
};

$MethodInfo _FuncFloor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncFloor, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncFloor, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncFloor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncFloor",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncFloor_FieldInfo_,
	_FuncFloor_MethodInfo_
};

$Object* allocate$FuncFloor($Class* clazz) {
	return $of($alloc(FuncFloor));
}

void FuncFloor::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncFloor::execute($XPathContext* xctxt) {
	return $new($XNumber, $Math::floor($nc($($nc(this->m_arg0)->execute(xctxt)))->num()));
}

FuncFloor::FuncFloor() {
}

$Class* FuncFloor::load$($String* name, bool initialize) {
	$loadClass(FuncFloor, name, initialize, &_FuncFloor_ClassInfo_, allocate$FuncFloor);
	return class$;
}

$Class* FuncFloor::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com