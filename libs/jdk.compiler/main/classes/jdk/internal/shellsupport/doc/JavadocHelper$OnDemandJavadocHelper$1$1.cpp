#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$1.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jcpp.h>

using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

void JavadocHelper$OnDemandJavadocHelper$1$1::init$($JavadocHelper$OnDemandJavadocHelper$1* this$1, $String* val$paramName, $List* val$inheritedText) {
	$set(this, this$1, this$1);
	$set(this, val$paramName, val$paramName);
	$set(this, val$inheritedText, val$inheritedText);
	$DocTreeScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1$1::visitParam($ParamTree* node, $Void* p) {
	$useLocalObjectStack();
	if ($$nc($$nc($nc(node)->getName())->getName())->contentEquals(this->val$paramName)) {
		$nc(this->val$inheritedText)->add($(node->getDescription()));
	}
	return $cast($Void, $DocTreeScanner::visitParam(node, p));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1$1::visitParam($ParamTree* node, Object$* p) {
	return this->visitParam(node, $cast($Void, p));
}

JavadocHelper$OnDemandJavadocHelper$1$1::JavadocHelper$OnDemandJavadocHelper$1$1() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, this$1)},
		{"val$inheritedText", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, val$inheritedText)},
		{"val$paramName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, val$paramName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Ljava/lang/String;Ljava/util/List;)V", nullptr, 0, $method(JavadocHelper$OnDemandJavadocHelper$1$1, init$, void, $JavadocHelper$OnDemandJavadocHelper$1*, $String*, $List*)},
		{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$1$1, visitParam, $Void*, $ParamTree*, $Void*)},
		{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$1$1, visitParam, $Object*, $ParamTree*, Object$*)},
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
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1",
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
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$1$1);
	});
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk