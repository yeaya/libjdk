#include <com/sun/tools/javac/util/GraphUtils$DotVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/Collection.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$DottableNode = ::com::sun::tools::javac::util::GraphUtils$DottableNode;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void GraphUtils$DotVisitor::init$() {
	$GraphUtils$NodeVisitor::init$();
}

void GraphUtils$DotVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$DottableNode* from, $GraphUtils$DottableNode* to, $StringBuilder* buf) {
	$useLocalObjectStack();
	$nc(buf)->append($($String::format("%s -> %s"_s, $$new($ObjectArray, {
		$($Integer::valueOf($nc($of(from))->hashCode())),
		$($Integer::valueOf($nc($of(to))->hashCode()))
	}))));
	buf->append($(formatProperties($(from->dependencyAttributes(to, dk)))));
	buf->append(u'\n');
}

void GraphUtils$DotVisitor::visitNode($GraphUtils$DottableNode* node, $StringBuilder* buf) {
	$useLocalObjectStack();
	$nc(buf)->append($($String::format("%s "_s, $$new($ObjectArray, {$($Integer::valueOf($nc($of(node))->hashCode()))}))));
	buf->append($(formatProperties($(node->nodeAttributes()))));
	buf->append(u'\n');
}

$String* GraphUtils$DotVisitor::formatProperties($Properties* p) {
	$useLocalObjectStack();
	return $($($$nc($nc(p)->toString())->replaceAll(","_s, " "_s))->replaceAll("\\{"_s, "["_s))->replaceAll("\\}"_s, "]"_s);
}

$String* GraphUtils$DotVisitor::wrap($String* s) {
	$init(GraphUtils$DotVisitor);
	$var($String, res, $str({"\""_s, s, "\""_s}));
	return res->replaceAll("\n"_s, ""_s);
}

void GraphUtils$DotVisitor::visit($Collection* nodes, Object$* arg) {
	$GraphUtils$NodeVisitor::visit(nodes, arg);
}

void GraphUtils$DotVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$Node* from, $GraphUtils$Node* to, Object$* buf) {
	this->visitDependency(dk, $cast($GraphUtils$DottableNode, from), $cast($GraphUtils$DottableNode, to), $cast($StringBuilder, buf));
}

void GraphUtils$DotVisitor::visitNode($GraphUtils$Node* node, Object$* buf) {
	this->visitNode($cast($GraphUtils$DottableNode, node), $cast($StringBuilder, buf));
}

GraphUtils$DotVisitor::GraphUtils$DotVisitor() {
}

$Class* GraphUtils$DotVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GraphUtils$DotVisitor, init$, void)},
		{"formatProperties", "(Ljava/util/Properties;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(GraphUtils$DotVisitor, formatProperties, $String*, $Properties*)},
		{"visit", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GraphUtils$DotVisitor, visit, void, $Collection*, Object$*)},
		{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Ljava/lang/StringBuilder;)V", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;TN;TN;Ljava/lang/StringBuilder;)V", $PUBLIC, $virtualMethod(GraphUtils$DotVisitor, visitDependency, void, $GraphUtils$DependencyKind*, $GraphUtils$DottableNode*, $GraphUtils$DottableNode*, $StringBuilder*)},
		{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$Node;Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GraphUtils$DotVisitor, visitDependency, void, $GraphUtils$DependencyKind*, $GraphUtils$Node*, $GraphUtils$Node*, Object$*)},
		{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Ljava/lang/StringBuilder;)V", "(TN;Ljava/lang/StringBuilder;)V", $PUBLIC, $virtualMethod(GraphUtils$DotVisitor, visitNode, void, $GraphUtils$DottableNode*, $StringBuilder*)},
		{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GraphUtils$DotVisitor, visitNode, void, $GraphUtils$Node*, Object$*)},
		{"wrap", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(GraphUtils$DotVisitor, wrap, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.GraphUtils$DotVisitor", "com.sun.tools.javac.util.GraphUtils", "DotVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.GraphUtils$DotVisitor",
		"com.sun.tools.javac.util.GraphUtils$NodeVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$DottableNode<TD;TN;>;>Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<TD;TN;Ljava/lang/StringBuilder;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.GraphUtils"
	};
	$loadClass(GraphUtils$DotVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphUtils$DotVisitor);
	});
	return class$;
}

$Class* GraphUtils$DotVisitor::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com