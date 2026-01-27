#include <com/sun/org/apache/xpath/internal/functions/FuncContains.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

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

$FieldInfo _FuncContains_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncContains, serialVersionUID)},
	{}
};

$MethodInfo _FuncContains_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncContains, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncContains, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncContains_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncContains",
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	nullptr,
	_FuncContains_FieldInfo_,
	_FuncContains_MethodInfo_
};

$Object* allocate$FuncContains($Class* clazz) {
	return $of($alloc(FuncContains));
}

void FuncContains::init$() {
	$Function2Args::init$();
}

$XObject* FuncContains::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($String, s1, $nc($($nc(this->m_arg0)->execute(xctxt)))->str());
	$var($String, s2, $nc($($nc(this->m_arg1)->execute(xctxt)))->str());
	bool var$0 = $nc(s1)->length() == 0;
	if (var$0 && $nc(s2)->length() == 0) {
		$init($XBoolean);
		return $XBoolean::S_TRUE;
	}
	int32_t index = $nc(s1)->indexOf(s2);
	$init($XBoolean);
	return (index > -1) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

FuncContains::FuncContains() {
}

$Class* FuncContains::load$($String* name, bool initialize) {
	$loadClass(FuncContains, name, initialize, &_FuncContains_ClassInfo_, allocate$FuncContains);
	return class$;
}

$Class* FuncContains::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com