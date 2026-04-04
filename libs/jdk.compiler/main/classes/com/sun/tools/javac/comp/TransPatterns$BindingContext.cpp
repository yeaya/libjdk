#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TransPatterns$BindingContext::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
}

TransPatterns$BindingContext::TransPatterns$BindingContext() {
}

$Class* TransPatterns$BindingContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$BindingContext, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, 0, $method(TransPatterns$BindingContext, init$, void, $TransPatterns*)},
		{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, bindingDeclared, $Symbol$VarSymbol*, $Symbol$BindingSymbol*)},
		{"bindingVars", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, bindingVars, $List*, int32_t)},
		{"decorateExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, decorateExpression, $JCTree$JCExpression*, $JCTree$JCExpression*)},
		{"decorateStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, decorateStatement, $JCTree$JCStatement*, $JCTree$JCStatement*)},
		{"getBindingFor", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, getBindingFor, $Symbol$VarSymbol*, $Symbol$BindingSymbol*)},
		{"pop", "()Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, pop, TransPatterns$BindingContext*)},
		{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $ABSTRACT, $virtualMethod(TransPatterns$BindingContext, tryPrepend, bool, $Symbol$BindingSymbol*, $JCTree$JCVariableDecl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TransPatterns$BindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingContext", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.TransPatterns$BindingContext",
		"java.lang.Object",
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
	$loadClass(TransPatterns$BindingContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransPatterns$BindingContext);
	});
	return class$;
}

$Class* TransPatterns$BindingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com