#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BasicBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TransPatterns$BindingDeclarationFenceBindingContext::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
	$TransPatterns$BasicBindingContext::init$(this$0);
}

$Symbol$VarSymbol* TransPatterns$BindingDeclarationFenceBindingContext::bindingDeclared($Symbol$BindingSymbol* varSymbol) {
	return nullptr;
}

TransPatterns$BindingDeclarationFenceBindingContext::TransPatterns$BindingDeclarationFenceBindingContext() {
}

$Class* TransPatterns$BindingDeclarationFenceBindingContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$BindingDeclarationFenceBindingContext, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, $PRIVATE, $method(TransPatterns$BindingDeclarationFenceBindingContext, init$, void, $TransPatterns*)},
		{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0, $virtualMethod(TransPatterns$BindingDeclarationFenceBindingContext, bindingDeclared, $Symbol$VarSymbol*, $Symbol$BindingSymbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingDeclarationFenceBindingContext", $PRIVATE},
		{"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BasicBindingContext", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext",
		"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.TransPatterns"
	};
	$loadClass(TransPatterns$BindingDeclarationFenceBindingContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransPatterns$BindingDeclarationFenceBindingContext);
	});
	return class$;
}

$Class* TransPatterns$BindingDeclarationFenceBindingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com