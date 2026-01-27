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

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
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

$FieldInfo _FuncStartsWith_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncStartsWith, serialVersionUID)},
	{}
};

$MethodInfo _FuncStartsWith_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncStartsWith, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncStartsWith, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncStartsWith_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncStartsWith",
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	nullptr,
	_FuncStartsWith_FieldInfo_,
	_FuncStartsWith_MethodInfo_
};

$Object* allocate$FuncStartsWith($Class* clazz) {
	return $of($alloc(FuncStartsWith));
}

void FuncStartsWith::init$() {
	$Function2Args::init$();
}

$XObject* FuncStartsWith::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$init($XBoolean);
	return $nc($($nc($($nc(this->m_arg0)->execute(xctxt)))->xstr()))->startsWith($($nc($($nc(this->m_arg1)->execute(xctxt)))->xstr())) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

FuncStartsWith::FuncStartsWith() {
}

$Class* FuncStartsWith::load$($String* name, bool initialize) {
	$loadClass(FuncStartsWith, name, initialize, &_FuncStartsWith_ClassInfo_, allocate$FuncStartsWith);
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