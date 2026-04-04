#include <com/sun/org/apache/xpath/internal/functions/FuncDoclocation.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef DOCUMENT_FRAGMENT_NODE
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

void FuncDoclocation::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncDoclocation::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	int32_t whereNode = getArg0AsNode(xctxt);
	$var($String, fileLocation, nullptr);
	if ($DTM::NULL != whereNode) {
		$var($DTM, dtm, $nc(xctxt)->getDTM(whereNode));
		if ($DTM::DOCUMENT_FRAGMENT_NODE == $nc(dtm)->getNodeType(whereNode)) {
			whereNode = dtm->getFirstChild(whereNode);
		}
		if ($DTM::NULL != whereNode) {
			$assign(fileLocation, dtm->getDocumentBaseURI());
		}
	}
	return $new($XString, (nullptr != fileLocation) ? fileLocation : ""_s);
}

FuncDoclocation::FuncDoclocation() {
}

$Class* FuncDoclocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncDoclocation, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncDoclocation, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncDoclocation, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncDoclocation",
		"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncDoclocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncDoclocation));
	});
	return class$;
}

$Class* FuncDoclocation::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com