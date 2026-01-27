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

$MethodInfo _Node_MethodInfo_[] = {
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Node, accept, void, $Visitor*)},
	{}
};

$ClassInfo _Node_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Node",
	nullptr,
	nullptr,
	nullptr,
	_Node_MethodInfo_
};

$Object* allocate$Node($Class* clazz) {
	return $of($alloc(Node));
}

$Class* Node::load$($String* name, bool initialize) {
	$loadClass(Node, name, initialize, &_Node_ClassInfo_, allocate$Node);
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