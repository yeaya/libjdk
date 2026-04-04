#include <com/sun/org/apache/xpath/internal/functions/FuncLang.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef NULL
#undef S_FALSE
#undef S_TRUE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
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

void FuncLang::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncLang::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	$var($String, lang, $$nc($nc(this->m_arg0)->execute(xctxt))->str());
	int32_t parent = $nc(xctxt)->getCurrentNode();
	bool isLang = false;
	$var($DTM, dtm, xctxt->getDTM(parent));
	while ($DTM::NULL != parent) {
		if ($DTM::ELEMENT_NODE == $nc(dtm)->getNodeType(parent)) {
			int32_t langAttr = dtm->getAttributeNode(parent, "http://www.w3.org/XML/1998/namespace"_s, "lang"_s);
			if ($DTM::NULL != langAttr) {
				$var($String, langVal, dtm->getNodeValue(langAttr));
				if ($($nc(langVal)->toLowerCase())->startsWith($($nc(lang)->toLowerCase()))) {
					int32_t valLen = lang->length();
					bool var$0 = langVal->length() == valLen;
					if (var$0 || (langVal->charAt(valLen) == u'-')) {
						isLang = true;
					}
				}
				break;
			}
		}
		parent = dtm->getParent(parent);
	}
	$init($XBoolean);
	return isLang ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
}

FuncLang::FuncLang() {
}

$Class* FuncLang::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncLang, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FuncLang, init$, void)},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncLang, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncLang",
		"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncLang, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FuncLang));
	});
	return class$;
}

$Class* FuncLang::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com