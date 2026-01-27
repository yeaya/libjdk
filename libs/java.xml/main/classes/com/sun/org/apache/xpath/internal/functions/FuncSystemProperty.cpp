#include <com/sun/org/apache/xpath/internal/functions/FuncSystemProperty.h>

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityException.h>
#include <java/util/Properties.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef WG_DONT_DO_ANYTHING_WITH_NS
#undef WG_PROPERTY_NOT_SUPPORTED
#undef WG_SECURITY_EXCEPTION
#undef XSLT_PROPERTIES

using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Properties = ::java::util::Properties;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncSystemProperty_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncSystemProperty, serialVersionUID)},
	{"XSLT_PROPERTIES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(FuncSystemProperty, XSLT_PROPERTIES)},
	{}
};

$MethodInfo _FuncSystemProperty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncSystemProperty, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncSystemProperty, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"loadPropertyFile", "(Ljava/util/Properties;)V", nullptr, $PRIVATE, $method(FuncSystemProperty, loadPropertyFile, void, $Properties*)},
	{}
};

$ClassInfo _FuncSystemProperty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncSystemProperty",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncSystemProperty_FieldInfo_,
	_FuncSystemProperty_MethodInfo_
};

$Object* allocate$FuncSystemProperty($Class* clazz) {
	return $of($alloc(FuncSystemProperty));
}

$String* FuncSystemProperty::XSLT_PROPERTIES = nullptr;

void FuncSystemProperty::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncSystemProperty::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($String, fullName, $nc($($nc(this->m_arg0)->execute(xctxt)))->str());
	int32_t indexOfNSSep = $nc(fullName)->indexOf((int32_t)u':');
	$var($String, result, nullptr);
	$var($String, propName, ""_s);
	$var($Properties, xsltInfo, $new($Properties));
	loadPropertyFile(xsltInfo);
	if (indexOfNSSep > 0) {
		$var($String, prefix, (indexOfNSSep >= 0) ? fullName->substring(0, indexOfNSSep) : ""_s);
		$var($String, namespace$, nullptr);
		$assign(namespace$, $nc($($nc(xctxt)->getNamespaceContext()))->getNamespaceForPrefix(prefix));
		$assign(propName, (indexOfNSSep < 0) ? fullName : fullName->substring(indexOfNSSep + 1));
		bool var$0 = $nc(namespace$)->startsWith("http://www.w3.org/XSL/Transform"_s);
		if (var$0 || $nc(namespace$)->equals("http://www.w3.org/1999/XSL/Transform"_s)) {
			$assign(result, xsltInfo->getProperty(propName));
			if (nullptr == result) {
				$init($XPATHErrorResources);
				warn(xctxt, $XPATHErrorResources::WG_PROPERTY_NOT_SUPPORTED, $$new($ObjectArray, {$of(fullName)}));
				$init($XString);
				return $XString::EMPTYSTRING;
			}
		} else {
			$init($XPATHErrorResources);
			warn(xctxt, $XPATHErrorResources::WG_DONT_DO_ANYTHING_WITH_NS, $$new($ObjectArray, {
				$of(namespace$),
				$of(fullName)
			}));
			try {
				$assign(result, $SecuritySupport::getSystemProperty(propName));
				if (nullptr == result) {
					$init($XString);
					return $XString::EMPTYSTRING;
				}
			} catch ($SecurityException& se) {
				warn(xctxt, $XPATHErrorResources::WG_SECURITY_EXCEPTION, $$new($ObjectArray, {$of(fullName)}));
				$init($XString);
				return $XString::EMPTYSTRING;
			}
		}
	} else {
		try {
			$assign(result, $SecuritySupport::getSystemProperty(fullName));
			if (nullptr == result) {
				$init($XString);
				return $XString::EMPTYSTRING;
			}
		} catch ($SecurityException& se) {
			$init($XPATHErrorResources);
			warn(xctxt, $XPATHErrorResources::WG_SECURITY_EXCEPTION, $$new($ObjectArray, {$of(fullName)}));
			$init($XString);
			return $XString::EMPTYSTRING;
		}
	}
	bool var$1 = propName->equals("version"_s);
	if (var$1 && $nc(result)->length() > 0) {
		try {
			return $new($XString, "1.0"_s);
		} catch ($Exception& ex) {
			return $new($XString, result);
		}
	} else {
		return $new($XString, result);
	}
}

void FuncSystemProperty::loadPropertyFile($Properties* target) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $SecuritySupport::getResourceAsStream(FuncSystemProperty::XSLT_PROPERTIES));
		{
			$var($BufferedInputStream, bis, $new($BufferedInputStream, is));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(target)->load(static_cast<$InputStream*>(bis));
					} catch ($Throwable& t$) {
						try {
							bis->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					bis->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($Exception& ex) {
		$throwNew($WrappedRuntimeException, ex);
	}
}

FuncSystemProperty::FuncSystemProperty() {
}

void clinit$FuncSystemProperty($Class* class$) {
	$assignStatic(FuncSystemProperty::XSLT_PROPERTIES, "com/sun/org/apache/xalan/internal/res/XSLTInfo.properties"_s);
}

$Class* FuncSystemProperty::load$($String* name, bool initialize) {
	$loadClass(FuncSystemProperty, name, initialize, &_FuncSystemProperty_ClassInfo_, clinit$FuncSystemProperty, allocate$FuncSystemProperty);
	return class$;
}

$Class* FuncSystemProperty::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com