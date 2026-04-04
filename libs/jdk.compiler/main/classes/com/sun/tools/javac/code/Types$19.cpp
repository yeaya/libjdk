#include <com/sun/tools/javac/code/Types$19.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
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
				namespace code {

void Types$19::init$($Types* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Types$19::baseSymbol() {
	return this->val$s;
}

Types$19::Types$19() {
}

$Class* Types$19::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$19, this$0)},
		{"val$s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Types$19, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Types$19, init$, void, $Types*, int64_t, $Name*, $Type*, $Symbol*, $Symbol*)},
		{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Types$19, baseSymbol, $Symbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		"mergeAbstracts",
		"(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Z)Ljava/util/Optional;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$19", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$19",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$19));
	});
	return class$;
}

$Class* Types$19::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com