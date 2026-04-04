#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
using $Name = ::com::sun::tools::javac::util::Name;
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

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4::init$($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$sym) {
	$set(this, this$2, this$2);
	$set(this, val$sym, val$sym);
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4::baseSymbol() {
	return this->val$sym;
}

LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, this$2)},
		{"val$sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, val$sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, init$, void, $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*, int64_t, $Name*, $Type*, $Symbol*, $Symbol*)},
		{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, baseSymbol, $Symbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext",
		"translate",
		"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Lcom/sun/tools/javac/code/Symbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaSymbolKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4",
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.LambdaToMethod"
	};
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4));
	});
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com