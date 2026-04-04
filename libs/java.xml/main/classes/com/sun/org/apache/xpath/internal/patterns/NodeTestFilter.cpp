#include <com/sun/org/apache/xpath/internal/patterns/NodeTestFilter.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

$Class* NodeTestFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setNodeTest", "(Lcom/sun/org/apache/xpath/internal/patterns/NodeTest;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeTestFilter, setNodeTest, void, $NodeTest*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.patterns.NodeTestFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeTestFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeTestFilter);
	});
	return class$;
}

$Class* NodeTestFilter::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com