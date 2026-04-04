#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <jcpp.h>

using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$Class* XMLComponentManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getFeature, bool, $String*, bool)},
		{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getFeatureState, $FeatureState*, $String*)},
		{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getProperty, $Object*, $String*, Object$*)},
		{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLComponentManager, getPropertyState, $PropertyState*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLComponentManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLComponentManager);
	});
	return class$;
}

$Class* XMLComponentManager::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com