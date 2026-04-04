#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$2.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TreePath.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

void JavadocHelper$OnDemandJavadocHelper$1$2::init$($JavadocHelper$OnDemandJavadocHelper$1* this$1, $DocCommentTree* val$inheritedDocTree, $String* val$thrownName, $List* val$inheritedText) {
	$set(this, this$1, this$1);
	$set(this, val$inheritedDocTree, val$inheritedDocTree);
	$set(this, val$thrownName, val$thrownName);
	$set(this, val$inheritedText, val$inheritedText);
	$DocTreeScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1$2::visitThrows($ThrowsTree* node, $Void* p) {
	$useLocalObjectStack();
	if ($Objects::equals($($nc(this->this$1->this$0)->getThrownException(this->this$1->inheritedJavacTask, this->this$1->inheritedTreePath, this->val$inheritedDocTree, node)), this->val$thrownName)) {
		$nc(this->val$inheritedText)->add($($nc(node)->getDescription()));
	}
	return $cast($Void, $DocTreeScanner::visitThrows(node, p));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1$2::visitThrows($ThrowsTree* node, Object$* p) {
	return this->visitThrows(node, $cast($Void, p));
}

JavadocHelper$OnDemandJavadocHelper$1$2::JavadocHelper$OnDemandJavadocHelper$1$2() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, this$1)},
		{"val$inheritedText", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$inheritedText)},
		{"val$thrownName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$thrownName)},
		{"val$inheritedDocTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$inheritedDocTree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/String;Ljava/util/List;)V", nullptr, 0, $method(JavadocHelper$OnDemandJavadocHelper$1$2, init$, void, $JavadocHelper$OnDemandJavadocHelper$1*, $DocCommentTree*, $String*, $List*)},
		{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$1$2, visitThrows, $Void*, $ThrowsTree*, $Void*)},
		{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$1$2, visitThrows, $Object*, $ThrowsTree*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1",
		"visitInheritDoc",
		"(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2",
		"com.sun.source.util.DocTreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocHelper"
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$1$2);
	});
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk