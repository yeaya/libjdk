#include <com/sun/org/apache/xpath/internal/ExtensionsProvider.h>

#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>
#include <java/util/List.h>
#include <jcpp.h>

using $FuncExtFunction = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _ExtensionsProvider_MethodInfo_[] = {
	{"elementAvailable", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtensionsProvider, elementAvailable, bool, $String*, $String*), "javax.xml.transform.TransformerException"},
	{"extFunction", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/objects/XObject;>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(ExtensionsProvider, extFunction, $Object*, $String*, $String*, $List*, Object$*), "javax.xml.transform.TransformerException"},
	{"extFunction", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Ljava/util/List;)Ljava/lang/Object;", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/objects/XObject;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(ExtensionsProvider, extFunction, $Object*, $FuncExtFunction*, $List*), "javax.xml.transform.TransformerException"},
	{"functionAvailable", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtensionsProvider, functionAvailable, bool, $String*, $String*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _ExtensionsProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.ExtensionsProvider",
	nullptr,
	nullptr,
	nullptr,
	_ExtensionsProvider_MethodInfo_
};

$Object* allocate$ExtensionsProvider($Class* clazz) {
	return $of($alloc(ExtensionsProvider));
}

$Class* ExtensionsProvider::load$($String* name, bool initialize) {
	$loadClass(ExtensionsProvider, name, initialize, &_ExtensionsProvider_ClassInfo_, allocate$ExtensionsProvider);
	return class$;
}

$Class* ExtensionsProvider::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com