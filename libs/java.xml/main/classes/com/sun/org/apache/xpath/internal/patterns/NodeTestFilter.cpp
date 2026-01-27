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

$MethodInfo _NodeTestFilter_MethodInfo_[] = {
	{"setNodeTest", "(Lcom/sun/org/apache/xpath/internal/patterns/NodeTest;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeTestFilter, setNodeTest, void, $NodeTest*)},
	{}
};

$ClassInfo _NodeTestFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.patterns.NodeTestFilter",
	nullptr,
	nullptr,
	nullptr,
	_NodeTestFilter_MethodInfo_
};

$Object* allocate$NodeTestFilter($Class* clazz) {
	return $of($alloc(NodeTestFilter));
}

$Class* NodeTestFilter::load$($String* name, bool initialize) {
	$loadClass(NodeTestFilter, name, initialize, &_NodeTestFilter_ClassInfo_, allocate$NodeTestFilter);
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