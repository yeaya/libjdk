#include <com/sun/tools/javac/code/Symbol$VarSymbol$1.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symbol$VarSymbol$1::init$($Symbol$VarSymbol* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$newOwner) {
	$set(this, this$0, this$0);
	$set(this, val$newOwner, val$newOwner);
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$Symbol* Symbol$VarSymbol$1::baseSymbol() {
	return this->this$0;
}

$Object* Symbol$VarSymbol$1::poolKey($Types* types) {
	return $new($Pair, this->val$newOwner, $(baseSymbol()));
}

$Element* Symbol$VarSymbol$1::getEnclosingElement() {
	return $Symbol$VarSymbol::getEnclosingElement();
}

$1Name* Symbol$VarSymbol$1::getSimpleName() {
	return $Symbol$VarSymbol::getSimpleName();
}

$TypeMirror* Symbol$VarSymbol$1::asType() {
	return $Symbol$VarSymbol::asType();
}

$List* Symbol$VarSymbol$1::getAnnotationMirrors() {
	return $Symbol$VarSymbol::getAnnotationMirrors();
}

$Symbol$VarSymbol* Symbol$VarSymbol$1::clone($Symbol* newOwner) {
	return $Symbol$VarSymbol::clone(newOwner);
}

Symbol$VarSymbol$1::Symbol$VarSymbol$1() {
}

$Class* Symbol$VarSymbol$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$VarSymbol$1, this$0)},
		{"val$newOwner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$VarSymbol$1, val$newOwner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Symbol$VarSymbol$1, init$, void, $Symbol$VarSymbol*, int64_t, $Name*, $Type*, $Symbol*, $Symbol*)},
		{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol$1, asType, $TypeMirror*)},
		{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol$1, baseSymbol, $Symbol*)},
		{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol$1, clone, $Symbol$VarSymbol*, $Symbol*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol$1, getAnnotationMirrors, $List*)},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol$1, getEnclosingElement, $Element*)},
		{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Symbol$VarSymbol$1, getSimpleName, $1Name*)},
		{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Symbol$VarSymbol$1, poolKey, $Object*, $Types*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		"clone",
		"(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$VarSymbol$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$VarSymbol$1",
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
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$VarSymbol$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$VarSymbol$1));
	});
	return class$;
}

$Class* Symbol$VarSymbol$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com