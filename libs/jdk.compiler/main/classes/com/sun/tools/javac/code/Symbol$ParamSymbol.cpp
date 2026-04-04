#include <com/sun/tools/javac/code/Symbol$ParamSymbol.h>
#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$RootPackageSymbol = ::com::sun::tools::javac::code::Symbol$RootPackageSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symbol$ParamSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$1Name* Symbol$ParamSymbol::getSimpleName() {
	$useLocalObjectStack();
	if ((this->flags_field & (int64_t)0x0010000000000000) == 0) {
		this->flags_field |= (int64_t)0x0010000000000000;
		$var($Symbol, rootPack, this);
		while (rootPack != nullptr && !($instanceOf($Symbol$RootPackageSymbol, rootPack))) {
			$assign(rootPack, rootPack->owner);
		}
		if (rootPack != nullptr) {
			$var($Name, inferredName, $nc($cast($Symbol$RootPackageSymbol, rootPack)->missingInfoHandler)->getParameterName(this));
			if (inferredName != nullptr) {
				$set(this, name, inferredName);
			}
		}
	}
	return $Symbol$VarSymbol::getSimpleName();
}

Symbol$ParamSymbol::Symbol$ParamSymbol() {
}

$Class* Symbol$ParamSymbol::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Symbol$ParamSymbol, init$, void, int64_t, $Name*, $Type*, $Symbol*)},
		{"getSimpleName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(Symbol$ParamSymbol, getSimpleName, $1Name*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$ParamSymbol", "com.sun.tools.javac.code.Symbol", "ParamSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$ParamSymbol",
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$ParamSymbol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$ParamSymbol));
	});
	return class$;
}

$Class* Symbol$ParamSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com