#include <com/sun/org/apache/xpath/internal/functions/FuncBoolean.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncBoolean_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncBoolean, serialVersionUID)},
	{}
};

$MethodInfo _FuncBoolean_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncBoolean, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncBoolean, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncBoolean",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncBoolean_FieldInfo_,
	_FuncBoolean_MethodInfo_
};

$Object* allocate$FuncBoolean($Class* clazz) {
	return $of($alloc(FuncBoolean));
}

void FuncBoolean::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncBoolean::execute($XPathContext* xctxt) {
	$init($XBoolean);
	return $nc($($nc(this->m_arg0)->execute(xctxt)))->bool$() ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

FuncBoolean::FuncBoolean() {
}

$Class* FuncBoolean::load$($String* name, bool initialize) {
	$loadClass(FuncBoolean, name, initialize, &_FuncBoolean_ClassInfo_, allocate$FuncBoolean);
	return class$;
}

$Class* FuncBoolean::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com