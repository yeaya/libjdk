#include <com/sun/org/apache/xpath/internal/functions/FuncExtElementAvailable.h>

#include <com/sun/org/apache/xalan/internal/templates/Constants.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExtensionsProvider.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_BUILTIN_EXTENSIONS_URL
#undef S_FALSE
#undef S_TRUE
#undef S_XSLNAMESPACEURL

using $Constants = ::com::sun::org::apache::xalan::internal::templates::Constants;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExtensionsProvider = ::com::sun::org::apache::xpath::internal::ExtensionsProvider;
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

$FieldInfo _FuncExtElementAvailable_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncExtElementAvailable, serialVersionUID)},
	{}
};

$MethodInfo _FuncExtElementAvailable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncExtElementAvailable, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncExtElementAvailable, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncExtElementAvailable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncExtElementAvailable",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncExtElementAvailable_FieldInfo_,
	_FuncExtElementAvailable_MethodInfo_
};

$Object* allocate$FuncExtElementAvailable($Class* clazz) {
	return $of($alloc(FuncExtElementAvailable));
}

void FuncExtElementAvailable::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncExtElementAvailable::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$var($String, namespace$, nullptr);
	$var($String, methName, nullptr);
	$var($String, fullName, $nc($($nc(this->m_arg0)->execute(xctxt)))->str());
	int32_t indexOfNSSep = $nc(fullName)->indexOf((int32_t)u':');
	if (indexOfNSSep < 0) {
		$assign(prefix, ""_s);
		$init($Constants);
		$assign(namespace$, $Constants::S_XSLNAMESPACEURL);
		$assign(methName, fullName);
	} else {
		$assign(prefix, fullName->substring(0, indexOfNSSep));
		$assign(namespace$, $nc($($nc(xctxt)->getNamespaceContext()))->getNamespaceForPrefix(prefix));
		if (nullptr == namespace$) {
			$init($XBoolean);
			return $XBoolean::S_FALSE;
		}
		$assign(methName, fullName->substring(indexOfNSSep + 1));
	}
	$init($Constants);
	bool var$0 = $nc(namespace$)->equals($Constants::S_XSLNAMESPACEURL);
	if (var$0 || $nc(namespace$)->equals($Constants::S_BUILTIN_EXTENSIONS_URL)) {
		$init($XBoolean);
		return $XBoolean::S_FALSE;
	} else {
		$var($ExtensionsProvider, extProvider, $cast($ExtensionsProvider, $nc(xctxt)->getOwnerObject()));
		$init($XBoolean);
		return $nc(extProvider)->elementAvailable(namespace$, methName) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
	}
}

FuncExtElementAvailable::FuncExtElementAvailable() {
}

$Class* FuncExtElementAvailable::load$($String* name, bool initialize) {
	$loadClass(FuncExtElementAvailable, name, initialize, &_FuncExtElementAvailable_ClassInfo_, allocate$FuncExtElementAvailable);
	return class$;
}

$Class* FuncExtElementAvailable::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com