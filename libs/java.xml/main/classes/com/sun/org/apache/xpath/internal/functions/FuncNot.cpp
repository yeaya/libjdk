#include <com/sun/org/apache/xpath/internal/functions/FuncNot.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

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

void FuncNot::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncNot::execute($XPathContext* xctxt) {
	$init($XBoolean);
	return $$nc($nc(this->m_arg0)->execute(xctxt))->bool$() ? $XBoolean::S_FALSE : $XBoolean::S_TRUE;
}

FuncNot::FuncNot() {
}

$Class* FuncNot::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncNot, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncNot, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncNot, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncNot",
		"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncNot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncNot));
	});
	return class$;
}

$Class* FuncNot::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com