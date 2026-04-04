#include <com/sun/tools/javac/comp/Resolve$BadMethodReferenceError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$StaticError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$StaticError = ::com::sun::tools::javac::comp::Resolve$StaticError;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
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

void Resolve$BadMethodReferenceError::init$($Resolve* this$0, $Symbol* sym, bool unboundLookup) {
	$set(this, this$0, this$0);
	$Resolve$StaticError::init$(this$0, sym);
	this->unboundLookup = unboundLookup;
}

$JCDiagnostic* Resolve$BadMethodReferenceError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($String, key, nullptr);
	if (!this->unboundLookup) {
		$assign(key, "bad.static.method.in.bound.lookup"_s);
	} else if ($nc(this->sym)->isStatic()) {
		$assign(key, "bad.static.method.in.unbound.lookup"_s);
	} else {
		$assign(key, "bad.instance.method.in.unbound.lookup"_s);
	}
	$var($JCDiagnostic, var$0, nullptr);
	if ($nc($nc(this->sym)->kind)->isResolutionError()) {
		$assign(var$0, $nc($cast($Resolve$ResolveError, this->sym))->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes));
	} else {
		$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
		$assign(var$0, $nc(this->this$0->diags)->create(dkind, var$1, pos, key, $$new($ObjectArray, {
			$($Kinds::kindName(this->sym)),
			this->sym
		})));
	}
	return var$0;
}

Resolve$BadMethodReferenceError::Resolve$BadMethodReferenceError() {
}

$Class* Resolve$BadMethodReferenceError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadMethodReferenceError, this$0)},
		{"unboundLookup", "Z", nullptr, 0, $field(Resolve$BadMethodReferenceError, unboundLookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, $PUBLIC, $method(Resolve$BadMethodReferenceError, init$, void, $Resolve*, $Symbol*, bool)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$BadMethodReferenceError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$BadMethodReferenceError", "com.sun.tools.javac.comp.Resolve", "BadMethodReferenceError", 0},
		{"com.sun.tools.javac.comp.Resolve$StaticError", "com.sun.tools.javac.comp.Resolve", "StaticError", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$BadMethodReferenceError",
		"com.sun.tools.javac.comp.Resolve$StaticError",
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
	$loadClass(Resolve$BadMethodReferenceError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$BadMethodReferenceError));
	});
	return class$;
}

$Class* Resolve$BadMethodReferenceError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com