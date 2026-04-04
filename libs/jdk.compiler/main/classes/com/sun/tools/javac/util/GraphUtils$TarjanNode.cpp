#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/lang/Iterable.h>
#include <jcpp.h>

using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$String* GraphUtils$TarjanNode::toString() {
	 return this->$GraphUtils$AbstractNode::toString();
}

int32_t GraphUtils$TarjanNode::hashCode() {
	 return this->$GraphUtils$AbstractNode::hashCode();
}

bool GraphUtils$TarjanNode::equals(Object$* arg0) {
	 return this->$GraphUtils$AbstractNode::equals(arg0);
}

$Object* GraphUtils$TarjanNode::clone() {
	 return this->$GraphUtils$AbstractNode::clone();
}

void GraphUtils$TarjanNode::finalize() {
	this->$GraphUtils$AbstractNode::finalize();
}

void GraphUtils$TarjanNode::init$(Object$* data) {
	$GraphUtils$AbstractNode::init$(data);
	this->index = -1;
}

int32_t GraphUtils$TarjanNode::compareTo(GraphUtils$TarjanNode* o) {
	return (this->index < $nc(o)->index) ? -1 : (this->index == o->index) ? 0 : 1;
}

int32_t GraphUtils$TarjanNode::compareTo(Object$* o) {
	return this->compareTo($cast(GraphUtils$TarjanNode, o));
}

GraphUtils$TarjanNode::GraphUtils$TarjanNode() {
}

$Class* GraphUtils$TarjanNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, 0, $field(GraphUtils$TarjanNode, index)},
		{"lowlink", "I", nullptr, 0, $field(GraphUtils$TarjanNode, lowlink)},
		{"active", "Z", nullptr, 0, $field(GraphUtils$TarjanNode, active)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;)V", "(TD;)V", $PUBLIC, $method(GraphUtils$TarjanNode, init$, void, Object$*)},
		{"compareTo", "(Lcom/sun/tools/javac/util/GraphUtils$TarjanNode;)I", "(TN;)I", $PUBLIC, $virtualMethod(GraphUtils$TarjanNode, compareTo, int32_t, GraphUtils$TarjanNode*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GraphUtils$TarjanNode, compareTo, int32_t, Object$*)},
		{"getAllDependencies", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+TN;>;", $PUBLIC | $ABSTRACT, $virtualMethod(GraphUtils$TarjanNode, getAllDependencies, $Iterable*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.GraphUtils$TarjanNode", "com.sun.tools.javac.util.GraphUtils", "TarjanNode", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.util.GraphUtils$AbstractNode", "com.sun.tools.javac.util.GraphUtils", "AbstractNode", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.util.GraphUtils$TarjanNode",
		"com.sun.tools.javac.util.GraphUtils$AbstractNode",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"<D:Ljava/lang/Object;N:Lcom/sun/tools/javac/util/GraphUtils$TarjanNode<TD;TN;>;>Lcom/sun/tools/javac/util/GraphUtils$AbstractNode<TD;TN;>;Ljava/lang/Comparable<TN;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.GraphUtils"
	};
	$loadClass(GraphUtils$TarjanNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GraphUtils$TarjanNode));
	});
	return class$;
}

$Class* GraphUtils$TarjanNode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com