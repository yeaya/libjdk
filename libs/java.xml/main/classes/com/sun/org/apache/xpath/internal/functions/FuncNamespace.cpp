#include <com/sun/org/apache/xpath/internal/functions/FuncNamespace.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
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

void FuncNamespace::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncNamespace::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	int32_t context = getArg0AsNode(xctxt);
	$var($String, s, nullptr);
	if (context != $DTM::NULL) {
		$var($DTM, dtm, $nc(xctxt)->getDTM(context));
		int32_t t = $nc(dtm)->getNodeType(context);
		if (t == $DTM::ELEMENT_NODE) {
			$assign(s, dtm->getNamespaceURI(context));
		} else if (t == $DTM::ATTRIBUTE_NODE) {
			$assign(s, dtm->getNodeName(context));
			bool var$0 = $nc(s)->startsWith("xmlns:"_s);
			if (var$0 || s->equals("xmlns"_s)) {
				$init($XString);
				return $XString::EMPTYSTRING;
			}
			$assign(s, dtm->getNamespaceURI(context));
		} else {
			$init($XString);
			return $XString::EMPTYSTRING;
		}
	} else {
		$init($XString);
		return $XString::EMPTYSTRING;
	}
	$init($XString);
	return ((nullptr == s) ? $XString::EMPTYSTRING : $new($XString, s));
}

FuncNamespace::FuncNamespace() {
}

$Class* FuncNamespace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncNamespace, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncNamespace, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncNamespace, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncNamespace",
		"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncNamespace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncNamespace));
	});
	return class$;
}

$Class* FuncNamespace::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com