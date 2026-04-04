#include <com/sun/org/apache/xpath/internal/functions/FuncTranslate.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

void FuncTranslate::init$() {
	$Function3Args::init$();
}

$XObject* FuncTranslate::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	$var($String, theFirstString, $$nc($nc(this->m_arg0)->execute(xctxt))->str());
	$var($String, theSecondString, $$nc($nc(this->m_arg1)->execute(xctxt))->str());
	$var($String, theThirdString, $$nc($nc(this->m_arg2)->execute(xctxt))->str());
	int32_t theFirstStringLength = $nc(theFirstString)->length();
	int32_t theThirdStringLength = $nc(theThirdString)->length();
	$var($StringBuffer, sbuffer, $new($StringBuffer));
	for (int32_t i = 0; i < theFirstStringLength; ++i) {
		char16_t theCurrentChar = theFirstString->charAt(i);
		int32_t theIndex = $nc(theSecondString)->indexOf(theCurrentChar);
		if (theIndex < 0) {
			sbuffer->append(theCurrentChar);
		} else if (theIndex < theThirdStringLength) {
			sbuffer->append(theThirdString->charAt(theIndex));
		} else {
		}
	}
	return $new($XString, $(sbuffer->toString()));
}

FuncTranslate::FuncTranslate() {
}

$Class* FuncTranslate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncTranslate, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncTranslate, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncTranslate, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncTranslate",
		"com.sun.org.apache.xpath.internal.functions.Function3Args",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncTranslate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncTranslate));
	});
	return class$;
}

$Class* FuncTranslate::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com