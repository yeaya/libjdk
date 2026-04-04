#include <com/sun/tools/javac/comp/Resolve$BadClassFileError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef HIDDEN
#undef NON_DEFERRABLE

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$BadClassFileError::init$($Resolve* this$0, $Symbol$CompletionFailure* ex) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InvalidSymbolError::init$(this$0, $Kinds$Kind::HIDDEN, $nc(ex)->sym, "BadClassFileError"_s);
	$set(this, name, $nc(this->sym)->name);
	$set(this, ex, ex);
}

$JCDiagnostic* Resolve$BadClassFileError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($DiagnosticSource, var$0, $nc(this->this$0->log)->currentSource());
	$var($String, var$1, "cant.access"_s);
	$var($JCDiagnostic, d, $nc(this->this$0->diags)->create(dkind, var$0, pos, var$1, $$new($ObjectArray, {
		$nc(this->ex)->sym,
		$($nc(this->ex)->getDetailValue())
	})));
	$init($JCDiagnostic$DiagnosticFlag);
	$nc(d)->setFlag($JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE);
	return d;
}

Resolve$BadClassFileError::Resolve$BadClassFileError() {
}

$Class* Resolve$BadClassFileError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadClassFileError, this$0)},
		{"ex", "Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", nullptr, $PRIVATE | $FINAL, $field(Resolve$BadClassFileError, ex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC, $method(Resolve$BadClassFileError, init$, void, $Resolve*, $Symbol$CompletionFailure*)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$BadClassFileError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$BadClassFileError", "com.sun.tools.javac.comp.Resolve", "BadClassFileError", 0},
		{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$BadClassFileError",
		"com.sun.tools.javac.comp.Resolve$InvalidSymbolError",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$BadClassFileError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$BadClassFileError));
	});
	return class$;
}

$Class* Resolve$BadClassFileError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com