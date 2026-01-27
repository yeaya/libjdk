#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunctionAvailable.h>

#include <com/sun/org/apache/xalan/internal/templates/Constants.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExtensionsProvider.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE
#undef S_XSLNAMESPACEURL

using $Constants = ::com::sun::org::apache::xalan::internal::templates::Constants;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExtensionsProvider = ::com::sun::org::apache::xpath::internal::ExtensionsProvider;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncExtFunctionAvailable_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncExtFunctionAvailable, serialVersionUID)},
	{"m_functionTable", "Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, $PRIVATE | $TRANSIENT, $field(FuncExtFunctionAvailable, m_functionTable)},
	{}
};

$MethodInfo _FuncExtFunctionAvailable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncExtFunctionAvailable, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunctionAvailable, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"setFunctionTable", "(Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunctionAvailable, setFunctionTable, void, $FunctionTable*)},
	{}
};

$ClassInfo _FuncExtFunctionAvailable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncExtFunctionAvailable",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncExtFunctionAvailable_FieldInfo_,
	_FuncExtFunctionAvailable_MethodInfo_
};

$Object* allocate$FuncExtFunctionAvailable($Class* clazz) {
	return $of($alloc(FuncExtFunctionAvailable));
}

void FuncExtFunctionAvailable::init$() {
	$FunctionOneArg::init$();
	$set(this, m_functionTable, nullptr);
}

$XObject* FuncExtFunctionAvailable::execute($XPathContext* xctxt) {
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
	if ($nc(namespace$)->equals($Constants::S_XSLNAMESPACEURL)) {
		try {
			if (nullptr == this->m_functionTable) {
				$set(this, m_functionTable, $new($FunctionTable));
			}
			$init($XBoolean);
			return $nc(this->m_functionTable)->functionAvailable(methName) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
		} catch ($Exception& e) {
			$init($XBoolean);
			return $XBoolean::S_FALSE;
		}
	} else {
		$var($ExtensionsProvider, extProvider, $cast($ExtensionsProvider, $nc(xctxt)->getOwnerObject()));
		$init($XBoolean);
		return $nc(extProvider)->functionAvailable(namespace$, methName) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
	}
}

void FuncExtFunctionAvailable::setFunctionTable($FunctionTable* aTable) {
	$set(this, m_functionTable, aTable);
}

FuncExtFunctionAvailable::FuncExtFunctionAvailable() {
}

$Class* FuncExtFunctionAvailable::load$($String* name, bool initialize) {
	$loadClass(FuncExtFunctionAvailable, name, initialize, &_FuncExtFunctionAvailable_ClassInfo_, allocate$FuncExtFunctionAvailable);
	return class$;
}

$Class* FuncExtFunctionAvailable::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com