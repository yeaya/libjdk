#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$FilterVisitor.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <java/util/EnumMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $Dependencies$GraphDependencies$CompletionNode = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode;
using $Dependencies$GraphDependencies$CompletionNode$Kind = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind;
using $Dependencies$GraphDependencies$Node = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Dependencies$GraphDependencies$FilterVisitor::init$($Dependencies$GraphDependencies* this$0, $Dependencies$GraphDependencies$CompletionNode$Kind* ck) {
	$set(this, this$0, this$0);
	$GraphUtils$NodeVisitor::init$();
	$set(this, ck, ck);
}

void Dependencies$GraphDependencies$FilterVisitor::visitNode($Dependencies$GraphDependencies$Node* node, $Void* arg) {
	{
		$var($Dependencies$GraphDependencies$CompletionNode, completionNode, nullptr);
		bool var$0 = $instanceOf($Dependencies$GraphDependencies$CompletionNode, node);
		if (var$0) {
			$assign(completionNode, $cast($Dependencies$GraphDependencies$CompletionNode, node));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(completionNode)->ck != this->ck) {
				$nc(this->this$0->dependencyNodeMap)->remove($nc(node)->data);
			}
		}
	}
}

void Dependencies$GraphDependencies$FilterVisitor::visitDependency($GraphUtils$DependencyKind* dk, $Dependencies$GraphDependencies$Node* from, $Dependencies$GraphDependencies$Node* to, $Void* arg) {
	$useLocalObjectStack();
	{
		$var($Dependencies$GraphDependencies$CompletionNode, completionNode, nullptr);
		bool var$0 = $instanceOf($Dependencies$GraphDependencies$CompletionNode, to);
		if (var$0) {
			$assign(completionNode, $cast($Dependencies$GraphDependencies$CompletionNode, to));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(completionNode)->ck != this->ck) {
				$$sure($List, $nc($nc(from)->depsByKind)->get(dk))->remove(to);
			}
		}
	}
}

void Dependencies$GraphDependencies$FilterVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$Node* from, $GraphUtils$Node* to, Object$* arg) {
	this->visitDependency(dk, $cast($Dependencies$GraphDependencies$Node, from), $cast($Dependencies$GraphDependencies$Node, to), $cast($Void, arg));
}

void Dependencies$GraphDependencies$FilterVisitor::visitNode($GraphUtils$Node* node, Object$* arg) {
	this->visitNode($cast($Dependencies$GraphDependencies$Node, node), $cast($Void, arg));
}

Dependencies$GraphDependencies$FilterVisitor::Dependencies$GraphDependencies$FilterVisitor() {
}

$Class* Dependencies$GraphDependencies$FilterVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies;", nullptr, $FINAL | $SYNTHETIC, $field(Dependencies$GraphDependencies$FilterVisitor, this$0)},
		{"ck", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, 0, $field(Dependencies$GraphDependencies$FilterVisitor, ck)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;)V", nullptr, $PRIVATE, $method(Dependencies$GraphDependencies$FilterVisitor, init$, void, $Dependencies$GraphDependencies*, $Dependencies$GraphDependencies$CompletionNode$Kind*)},
		{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Dependencies$GraphDependencies$FilterVisitor, visitDependency, void, $GraphUtils$DependencyKind*, $Dependencies$GraphDependencies$Node*, $Dependencies$GraphDependencies$Node*, $Void*)},
		{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$Node;Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Dependencies$GraphDependencies$FilterVisitor, visitDependency, void, $GraphUtils$DependencyKind*, $GraphUtils$Node*, $GraphUtils$Node*, Object$*)},
		{"visitNode", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Dependencies$GraphDependencies$FilterVisitor, visitNode, void, $Dependencies$GraphDependencies$Node*, $Void*)},
		{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Dependencies$GraphDependencies$FilterVisitor, visitNode, void, $GraphUtils$Node*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "FilterVisitor", $PRIVATE},
		{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "Node", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor",
		"com.sun.tools.javac.util.GraphUtils$NodeVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Dependencies"
	};
	$loadClass(Dependencies$GraphDependencies$FilterVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dependencies$GraphDependencies$FilterVisitor);
	});
	return class$;
}

$Class* Dependencies$GraphDependencies$FilterVisitor::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com