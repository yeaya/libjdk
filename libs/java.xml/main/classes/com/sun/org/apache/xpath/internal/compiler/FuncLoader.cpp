#include <com/sun/org/apache/xpath/internal/compiler/FuncLoader.h>
#include <com/sun/org/apache/xalan/internal/utils/ConfigurationError.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $ConfigurationError = ::com::sun::org::apache::xalan::internal::utils::ConfigurationError;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$String* FuncLoader::getName() {
	return this->m_funcName;
}

void FuncLoader::init$($String* funcName, int32_t funcID) {
	this->m_funcID = funcID;
	$set(this, m_funcName, funcName);
}

$Function* FuncLoader::getFunction() {
	$useLocalObjectStack();
	try {
		$var($String, className, this->m_funcName);
		if ($nc(className)->indexOf("."_s) < 0) {
			$assign(className, $str({"com.sun.org.apache.xpath.internal.functions."_s, className}));
		}
		$var($String, subString, className->substring(0, className->lastIndexOf(u'.')));
		bool var$0 = subString->equals("com.sun.org.apache.xalan.internal.templates"_s);
		if (!(var$0 || subString->equals("com.sun.org.apache.xpath.internal.functions"_s))) {
			$throwNew($TransformerException, "Application can\'t install his own xpath function."_s);
		}
		return $cast($Function, $ObjectFactory::newInstance(className, true));
	} catch ($ConfigurationError& e) {
		$throwNew($TransformerException, $(e->getException()));
	}
	$shouldNotReachHere();
}

FuncLoader::FuncLoader() {
}

$Class* FuncLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_funcID", "I", nullptr, $PRIVATE, $field(FuncLoader, m_funcID)},
		{"m_funcName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FuncLoader, m_funcName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(FuncLoader, init$, void, $String*, int32_t)},
		{"getFunction", "()Lcom/sun/org/apache/xpath/internal/functions/Function;", nullptr, 0, $virtualMethod(FuncLoader, getFunction, $Function*), "javax.xml.transform.TransformerException"},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FuncLoader, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.compiler.FuncLoader",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FuncLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FuncLoader);
	});
	return class$;
}

$Class* FuncLoader::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com