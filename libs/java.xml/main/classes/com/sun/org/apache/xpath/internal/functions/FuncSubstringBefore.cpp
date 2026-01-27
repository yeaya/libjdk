#include <com/sun/org/apache/xpath/internal/functions/FuncSubstringBefore.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
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

$FieldInfo _FuncSubstringBefore_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncSubstringBefore, serialVersionUID)},
	{}
};

$MethodInfo _FuncSubstringBefore_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncSubstringBefore, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncSubstringBefore, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncSubstringBefore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncSubstringBefore",
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	nullptr,
	_FuncSubstringBefore_FieldInfo_,
	_FuncSubstringBefore_MethodInfo_
};

$Object* allocate$FuncSubstringBefore($Class* clazz) {
	return $of($alloc(FuncSubstringBefore));
}

void FuncSubstringBefore::init$() {
	$Function2Args::init$();
}

$XObject* FuncSubstringBefore::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($String, s1, $nc($($nc(this->m_arg0)->execute(xctxt)))->str());
	$var($String, s2, $nc($($nc(this->m_arg1)->execute(xctxt)))->str());
	int32_t index = $nc(s1)->indexOf(s2);
	$init($XString);
	return (-1 == index) ? static_cast<$XObject*>($XString::EMPTYSTRING) : static_cast<$XObject*>($new($XString, $(s1->substring(0, index))));
}

FuncSubstringBefore::FuncSubstringBefore() {
}

$Class* FuncSubstringBefore::load$($String* name, bool initialize) {
	$loadClass(FuncSubstringBefore, name, initialize, &_FuncSubstringBefore_ClassInfo_, allocate$FuncSubstringBefore);
	return class$;
}

$Class* FuncSubstringBefore::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com