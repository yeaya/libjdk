#include <com/sun/org/apache/xpath/internal/functions/FuncGenerateId.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

void FuncGenerateId::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncGenerateId::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	int32_t which = getArg0AsNode(xctxt);
	if ($DTM::NULL != which) {
		return $new($XString, $$str({"N"_s, $($$nc($Integer::toHexString(which))->toUpperCase())}));
	} else {
		$init($XString);
		return $XString::EMPTYSTRING;
	}
}

FuncGenerateId::FuncGenerateId() {
}

$Class* FuncGenerateId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncGenerateId, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncGenerateId, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncGenerateId, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncGenerateId",
		"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncGenerateId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncGenerateId));
	});
	return class$;
}

$Class* FuncGenerateId::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com