#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* GraphUtils$DottableNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dependencyAttributes", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", "(TN;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", $PUBLIC | $ABSTRACT, $virtualMethod(GraphUtils$DottableNode, dependencyAttributes, $Properties*, GraphUtils$DottableNode*, $GraphUtils$DependencyKind*)},
		{"nodeAttributes", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphUtils$DottableNode, nodeAttributes, $Properties*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.GraphUtils$DottableNode",
		nullptr,
		"com.sun.tools.javac.util.GraphUtils$Node",
		nullptr,
		methodInfos$$,
		"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$DottableNode<TD;TN;>;>Ljava/lang/Object;Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.GraphUtils"
	};
	$loadClass(GraphUtils$DottableNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphUtils$DottableNode);
	});
	return class$;
}

$Class* GraphUtils$DottableNode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com