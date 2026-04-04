#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>
#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $MissingInfoHandler = ::com::sun::tools::javac::code::MissingInfoHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symbol$RootPackageSymbol::init$($Name* name, $Symbol* owner, $MissingInfoHandler* missingInfoHandler, bool allowPrivateInvokeVirtual) {
	$Symbol$PackageSymbol::init$(name, owner);
	$set(this, missingInfoHandler, missingInfoHandler);
	this->allowPrivateInvokeVirtual = allowPrivateInvokeVirtual;
}

Symbol$RootPackageSymbol::Symbol$RootPackageSymbol() {
}

$Class* Symbol$RootPackageSymbol::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"missingInfoHandler", "Lcom/sun/tools/javac/code/MissingInfoHandler;", nullptr, $PUBLIC | $FINAL, $field(Symbol$RootPackageSymbol, missingInfoHandler)},
		{"allowPrivateInvokeVirtual", "Z", nullptr, $PUBLIC | $FINAL, $field(Symbol$RootPackageSymbol, allowPrivateInvokeVirtual)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/MissingInfoHandler;Z)V", nullptr, $PUBLIC, $method(Symbol$RootPackageSymbol, init$, void, $Name*, $Symbol*, $MissingInfoHandler*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$RootPackageSymbol", "com.sun.tools.javac.code.Symbol", "RootPackageSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$RootPackageSymbol",
		"com.sun.tools.javac.code.Symbol$PackageSymbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$RootPackageSymbol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$RootPackageSymbol));
	});
	return class$;
}

$Class* Symbol$RootPackageSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com