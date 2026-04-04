#include <com/sun/tools/javac/comp/Resolve$BadRestrictedTypeError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
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

#undef BAD_RESTRICTED_TYPE

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
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

void Resolve$BadRestrictedTypeError::init$($Resolve* this$0, $Name* typeName) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$ResolveError::init$(this$0, $Kinds$Kind::BAD_RESTRICTED_TYPE, "bad var use"_s);
	$set(this, typeName, typeName);
}

$JCDiagnostic* Resolve$BadRestrictedTypeError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	return $nc(this->this$0->diags)->create(dkind, $($nc(this->this$0->log)->currentSource()), pos, "illegal.ref.to.restricted.type"_s, $$new($ObjectArray, {this->typeName}));
}

Resolve$BadRestrictedTypeError::Resolve$BadRestrictedTypeError() {
}

$Class* Resolve$BadRestrictedTypeError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadRestrictedTypeError, this$0)},
		{"typeName", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Resolve$BadRestrictedTypeError, typeName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;)V", nullptr, 0, $method(Resolve$BadRestrictedTypeError, init$, void, $Resolve*, $Name*)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$BadRestrictedTypeError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError", "com.sun.tools.javac.comp.Resolve", "BadRestrictedTypeError", 0},
		{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError",
		"com.sun.tools.javac.comp.Resolve$ResolveError",
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
	$loadClass(Resolve$BadRestrictedTypeError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$BadRestrictedTypeError));
	});
	return class$;
}

$Class* Resolve$BadRestrictedTypeError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com