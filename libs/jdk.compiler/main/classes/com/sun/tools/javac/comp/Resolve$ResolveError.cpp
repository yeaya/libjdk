#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$ResolveError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ResolveError, this$0)},
	{"debugName", "Ljava/lang/String;", nullptr, $FINAL, $field(Resolve$ResolveError, debugName)},
	{}
};

$MethodInfo _Resolve$ResolveError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;Ljava/lang/String;)V", nullptr, 0, $method(Resolve$ResolveError, init$, void, $Resolve*, $Kinds$Kind*, $String*)},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Resolve$ResolveError, accept, $Object*, $ElementVisitor*, Object$*)},
	{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED, $virtualMethod(Resolve$ResolveError, access, $Symbol*, $Name*, $Symbol$TypeSymbol*)},
	{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$ResolveError, exists, bool)},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", $ABSTRACT, $virtualMethod(Resolve$ResolveError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
	{"isStatic", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$ResolveError, isStatic, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Resolve$ResolveError, toString, $String*)},
	{}
};

$InnerClassInfo _Resolve$ResolveError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$ResolveError_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	"com.sun.tools.javac.code.Symbol",
	nullptr,
	_Resolve$ResolveError_FieldInfo_,
	_Resolve$ResolveError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ResolveError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ResolveError($Class* clazz) {
	return $of($alloc(Resolve$ResolveError));
}

void Resolve$ResolveError::init$($Resolve* this$0, $Kinds$Kind* kind, $String* debugName) {
	$set(this, this$0, this$0);
	$Symbol::init$(kind, 0, nullptr, nullptr, nullptr);
	$set(this, debugName, debugName);
}

$Object* Resolve$ResolveError::accept($ElementVisitor* v, Object$* p) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

$String* Resolve$ResolveError::toString() {
	return this->debugName;
}

bool Resolve$ResolveError::exists() {
	return false;
}

bool Resolve$ResolveError::isStatic() {
	return false;
}

$Symbol* Resolve$ResolveError::access($Name* name, $Symbol$TypeSymbol* location) {
	return $nc($($nc(this->this$0->types)->createErrorType(name, location, $nc($nc(this->this$0->syms)->errSymbol)->type)))->tsym;
}

Resolve$ResolveError::Resolve$ResolveError() {
}

$Class* Resolve$ResolveError::load$($String* name, bool initialize) {
	$loadClass(Resolve$ResolveError, name, initialize, &_Resolve$ResolveError_ClassInfo_, allocate$Resolve$ResolveError);
	return class$;
}

$Class* Resolve$ResolveError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com