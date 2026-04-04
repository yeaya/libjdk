#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <jcpp.h>

using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$Class* Node::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, accept, void, $Visitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.classfile.Node",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Node);
	});
	return class$;
}

$Class* Node::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com