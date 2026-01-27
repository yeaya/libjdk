#include <com/sun/org/apache/xpath/internal/functions/FuncSubstringAfter.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
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

$FieldInfo _FuncSubstringAfter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncSubstringAfter, serialVersionUID)},
	{}
};

$MethodInfo _FuncSubstringAfter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncSubstringAfter, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncSubstringAfter, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncSubstringAfter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncSubstringAfter",
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	nullptr,
	_FuncSubstringAfter_FieldInfo_,
	_FuncSubstringAfter_MethodInfo_
};

$Object* allocate$FuncSubstringAfter($Class* clazz) {
	return $of($alloc(FuncSubstringAfter));
}

void FuncSubstringAfter::init$() {
	$Function2Args::init$();
}

$XObject* FuncSubstringAfter::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XMLString, s1, $nc($($nc(this->m_arg0)->execute(xctxt)))->xstr());
	$var($XMLString, s2, $nc($($nc(this->m_arg1)->execute(xctxt)))->xstr());
	int32_t index = $nc(s1)->indexOf(s2);
	$init($XString);
	return (-1 == index) ? static_cast<$XObject*>($XString::EMPTYSTRING) : $cast($XString, s1->substring(index + $nc(s2)->length()));
}

FuncSubstringAfter::FuncSubstringAfter() {
}

$Class* FuncSubstringAfter::load$($String* name, bool initialize) {
	$loadClass(FuncSubstringAfter, name, initialize, &_FuncSubstringAfter_ClassInfo_, allocate$FuncSubstringAfter);
	return class$;
}

$Class* FuncSubstringAfter::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com