#include <com/sun/tools/javac/code/Attribute$UnresolvedClass.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <jcpp.h>

using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Attribute$UnresolvedClass::init$($Type* type, $Type* classType) {
	$Attribute$Error::init$(type);
	$set(this, classType, classType);
}

Attribute$UnresolvedClass::Attribute$UnresolvedClass() {
}

$Class* Attribute$UnresolvedClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attribute$UnresolvedClass, classType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Attribute$UnresolvedClass, init$, void, $Type*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$UnresolvedClass", "com.sun.tools.javac.code.Attribute", "UnresolvedClass", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Attribute$Error", "com.sun.tools.javac.code.Attribute", "Error", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$UnresolvedClass",
		"com.sun.tools.javac.code.Attribute$Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$UnresolvedClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute$UnresolvedClass);
	});
	return class$;
}

$Class* Attribute$UnresolvedClass::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com