#include <com/sun/tools/javac/comp/Annotate$2.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Annotate$2::init$($Annotate* this$0) {
	$set(this, this$0, this$0);
}

void Annotate$2::complete($Symbol$ClassSymbol* sym) {
	$var($Env, context, $nc(this->this$0->typeEnvs)->get(sym));
	this->this$0->attributeAnnotationType(context);
}

Annotate$2::Annotate$2() {
}

$Class* Annotate$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;)V", nullptr, 0, $method(Annotate$2, init$, void, $Annotate*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Annotate$2, complete, void, $Symbol$ClassSymbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Annotate",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Annotate$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Annotate$2",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Annotate"
	};
	$loadClass(Annotate$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotate$2);
	});
	return class$;
}

$Class* Annotate$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com