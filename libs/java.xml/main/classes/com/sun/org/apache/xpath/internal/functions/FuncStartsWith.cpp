#include <com/sun/org/apache/xpath/internal/functions/FuncStartsWith.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
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

void FuncStartsWith::init$() {
	$Function2Args::init$();
}

$XObject* FuncStartsWith::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	$init($XBoolean);
	return $$nc($$nc($nc(this->m_arg0)->execute(xctxt))->xstr())->startsWith($($$nc($nc(this->m_arg1)->execute(xctxt))->xstr())) ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
}

FuncStartsWith::FuncStartsWith() {
}

$Class* FuncStartsWith::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncStartsWith, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncStartsWith, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncStartsWith, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncStartsWith",
		"com.sun.org.apache.xpath.internal.functions.Function2Args",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncStartsWith, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncStartsWith));
	});
	return class$;
}

$Class* FuncStartsWith::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com