#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Attribute$TypeCompound::init$($Attribute$Compound* compound, $TypeAnnotationPosition* position) {
	$Attribute$Compound::init$($nc(compound)->type, $nc(compound)->values, position);
}

void Attribute$TypeCompound::init$($Type* type, $List* values, $TypeAnnotationPosition* position) {
	$Attribute$Compound::init$(type, values, position);
}

Attribute$TypeCompound::Attribute$TypeCompound() {
}

$Class* Attribute$TypeCompound::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, $PUBLIC, $method(Attribute$TypeCompound, init$, void, $Attribute$Compound*, $TypeAnnotationPosition*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", $PUBLIC, $method(Attribute$TypeCompound, init$, void, $Type*, $List*, $TypeAnnotationPosition*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$TypeCompound", "com.sun.tools.javac.code.Attribute", "TypeCompound", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$TypeCompound",
		"com.sun.tools.javac.code.Attribute$Compound",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$TypeCompound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Attribute$TypeCompound));
	});
	return class$;
}

$Class* Attribute$TypeCompound::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com