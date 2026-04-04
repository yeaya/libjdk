#include <com/sun/tools/javac/api/JavacTrees$6.h>
#include <com/sun/source/tree/LineMap.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef FIRSTPOS

using $LineMap = ::com::sun::source::tree::LineMap;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

void JavacTrees$6::init$($JavacTrees* this$0, $List* defs, $JavaFileObject* val$jfo) {
	$set(this, this$0, this$0);
	$set(this, val$jfo, val$jfo);
	$JCTree$JCCompilationUnit::init$(defs);
}

int32_t JavacTrees$6::getPos() {
	return $Position::FIRSTPOS;
}

$JavaFileObject* JavacTrees$6::getSourcefile() {
	return this->val$jfo;
}

$LineMap* JavacTrees$6::getLineMap() {
	$useLocalObjectStack();
	try {
		$var($CharSequence, content, $nc(this->val$jfo)->getCharContent(true));
		$var($String, s, $nc(content)->toString());
		$var($chars, var$0, $nc(s)->toCharArray());
		return $Position::makeLineMap(var$0, s->length(), true);
	} catch ($IOException& ignore) {
	}
	return nullptr;
}

JavacTrees$6::JavacTrees$6() {
}

$Class* JavacTrees$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$6, this$0)},
		{"val$jfo", "Ljavax/tools/JavaFileObject;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$6, val$jfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/tools/javac/util/List;Ljavax/tools/JavaFileObject;)V", nullptr, 0, $method(JavacTrees$6, init$, void, $JavacTrees*, $List*, $JavaFileObject*)},
		{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC, $virtualMethod(JavacTrees$6, getLineMap, $LineMap*)},
		{"getPos", "()I", nullptr, $PUBLIC, $virtualMethod(JavacTrees$6, getPos, int32_t)},
		{"getSourcefile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $virtualMethod(JavacTrees$6, getSourcefile, $JavaFileObject*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacTrees",
		"makeTreePath",
		"(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileObject;Lcom/sun/source/doctree/DocCommentTree;)Lcom/sun/source/util/TreePath;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTrees$6", nullptr, nullptr, 0},
		{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.api.JavacTrees$6",
		"com.sun.tools.javac.tree.JCTree$JCCompilationUnit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacTrees"
	};
	$loadClass(JavacTrees$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacTrees$6));
	});
	return class$;
}

$Class* JavacTrees$6::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com