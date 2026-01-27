#include <com/sun/org/apache/xpath/internal/functions/FuncRound.h>

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
using $Double = ::java::lang::Double;
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

$FieldInfo _FuncRound_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncRound, serialVersionUID)},
	{}
};

$MethodInfo _FuncRound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncRound, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncRound, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncRound_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncRound",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncRound_FieldInfo_,
	_FuncRound_MethodInfo_
};

$Object* allocate$FuncRound($Class* clazz) {
	return $of($alloc(FuncRound));
}

void FuncRound::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncRound::execute($XPathContext* xctxt) {
	$var($XObject, obj, $nc(this->m_arg0)->execute(xctxt));
	double val = $nc(obj)->num();
	if (val >= -0.5 && val < 0) {
		return $new($XNumber, -0.0);
	}
	if (val == 0.0) {
		return $new($XNumber, val);
	}
	return $new($XNumber, $Math::floor(val + 0.5));
}

FuncRound::FuncRound() {
}

$Class* FuncRound::load$($String* name, bool initialize) {
	$loadClass(FuncRound, name, initialize, &_FuncRound_ClassInfo_, allocate$FuncRound);
	return class$;
}

$Class* FuncRound::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com