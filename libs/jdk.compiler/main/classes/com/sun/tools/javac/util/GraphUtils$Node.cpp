#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <jcpp.h>

using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* GraphUtils$Node::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor;Ljava/lang/Object;)V", "<A:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<TD;TN;TA;>;TA;)V", $PUBLIC | $ABSTRACT, $virtualMethod(GraphUtils$Node, accept, void, $GraphUtils$NodeVisitor*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.GraphUtils$Node",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.GraphUtils"
	};
	$loadClass(GraphUtils$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphUtils$Node);
	});
	return class$;
}

$Class* GraphUtils$Node::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com