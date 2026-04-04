#include <com/sun/tools/javac/api/JavacTrees$2.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <jcpp.h>

using $DocTreeArray = $Array<::com::sun::source::doctree::DocTree>;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacTrees$2::init$($JavacTrees* this$0, $DocTreeArray* val$last) {
	$set(this, this$0, this$0);
	$set(this, val$last, val$last);
	$DocTreeScanner::init$();
}

$Void* JavacTrees$2::scan($DocTree* node, $Void* p) {
	if (node != nullptr) {
		$nc(this->val$last)->set(0, node);
	}
	return nullptr;
}

$Object* JavacTrees$2::scan($DocTree* node, Object$* p) {
	return this->scan(node, $cast($Void, p));
}

JavacTrees$2::JavacTrees$2() {
}

$Class* JavacTrees$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$2, this$0)},
		{"val$last", "[Lcom/sun/source/doctree/DocTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$2, val$last)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;[Lcom/sun/source/doctree/DocTree;)V", nullptr, 0, $method(JavacTrees$2, init$, void, $JavacTrees*, $DocTreeArray*)},
		{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JavacTrees$2, scan, $Void*, $DocTree*, $Void*)},
		{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacTrees$2, scan, $Object*, $DocTree*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacTrees",
		"getLastChild",
		"(Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/doctree/DocTree;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTrees$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTrees$2",
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
		"com.sun.tools.javac.api.JavacTrees"
	};
	$loadClass(JavacTrees$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTrees$2);
	});
	return class$;
}

$Class* JavacTrees$2::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com