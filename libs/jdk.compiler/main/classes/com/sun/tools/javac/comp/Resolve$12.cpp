#include <com/sun/tools/javac/comp/Resolve$12.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
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

void Resolve$12::init$($Resolve* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$spMethod) {
	$set(this, this$0, this$0);
	$set(this, val$spMethod, val$spMethod);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Resolve$12::baseSymbol() {
	return this->val$spMethod;
}

Resolve$12::Resolve$12() {
}

$Class* Resolve$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$12, this$0)},
		{"val$spMethod", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$12, val$spMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Resolve$12, init$, void, $Resolve*, int64_t, $Name*, $Type*, $Symbol*, $Symbol*)},
		{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Resolve$12, baseSymbol, $Symbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		"findPolymorphicSignatureInstance",
		"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$12", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$12",
		"com.sun.tools.javac.code.Symbol$MethodSymbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$12));
	});
	return class$;
}

$Class* Resolve$12::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com