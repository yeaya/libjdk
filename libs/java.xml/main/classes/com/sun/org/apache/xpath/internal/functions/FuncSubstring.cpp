#include <com/sun/org/apache/xpath/internal/functions/FuncSubstring.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef ER_TWO_OR_THREE

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
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

$FieldInfo _FuncSubstring_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncSubstring, serialVersionUID)},
	{}
};

$MethodInfo _FuncSubstring_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncSubstring, init$, void)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(FuncSubstring, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncSubstring, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(FuncSubstring, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$ClassInfo _FuncSubstring_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncSubstring",
	"com.sun.org.apache.xpath.internal.functions.Function3Args",
	nullptr,
	_FuncSubstring_FieldInfo_,
	_FuncSubstring_MethodInfo_
};

$Object* allocate$FuncSubstring($Class* clazz) {
	return $of($alloc(FuncSubstring));
}

void FuncSubstring::init$() {
	$Function3Args::init$();
}

$XObject* FuncSubstring::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XMLString, s1, $nc($($nc(this->m_arg0)->execute(xctxt)))->xstr());
	double start = $nc($($nc(this->m_arg1)->execute(xctxt)))->num();
	int32_t lenOfS1 = $nc(s1)->length();
	$var($XMLString, substr, nullptr);
	if (lenOfS1 <= 0) {
		$init($XString);
		return $XString::EMPTYSTRING;
	} else {
		int32_t startIndex = 0;
		if ($Double::isNaN(start)) {
			start = (double)(int32_t)0xFFF0BDC0;
			startIndex = 0;
		} else {
			start = (double)$Math::round(start);
			startIndex = (start > 0) ? $cast(int32_t, start) - 1 : 0;
		}
		if (nullptr != this->m_arg2) {
			double len = $nc(this->m_arg2)->num(xctxt);
			int32_t end = $cast(int32_t, ($Math::round(len) + start)) - 1;
			if (end < 0) {
				end = 0;
			} else if (end > lenOfS1) {
				end = lenOfS1;
			}
			if (startIndex > lenOfS1) {
				startIndex = lenOfS1;
			}
			$assign(substr, s1->substring(startIndex, end));
		} else {
			if (startIndex > lenOfS1) {
				startIndex = lenOfS1;
			}
			$assign(substr, s1->substring(startIndex));
		}
	}
	return $cast($XString, substr);
}

void FuncSubstring::checkNumberArgs(int32_t argNum) {
	if (argNum < 2) {
		reportWrongNumberArgs();
	}
}

void FuncSubstring::reportWrongNumberArgs() {
	$init($XPATHErrorResources);
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_TWO_OR_THREE, nullptr)));
}

FuncSubstring::FuncSubstring() {
}

$Class* FuncSubstring::load$($String* name, bool initialize) {
	$loadClass(FuncSubstring, name, initialize, &_FuncSubstring_ClassInfo_, allocate$FuncSubstring);
	return class$;
}

$Class* FuncSubstring::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com