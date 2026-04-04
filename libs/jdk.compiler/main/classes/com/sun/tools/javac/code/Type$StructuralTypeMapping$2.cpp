#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$2.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
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

void Type$StructuralTypeMapping$2::init$($Type$StructuralTypeMapping* this$0, $Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $Type$TypeVar* bound, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$WildcardType::init$(type, kind, tsym, bound, metadata);
}

bool Type$StructuralTypeMapping$2::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$2::Type$StructuralTypeMapping$2() {
}

$Class* Type$StructuralTypeMapping$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Type$StructuralTypeMapping$2, init$, void, $Type$StructuralTypeMapping*, $Type*, $BoundKind*, $Symbol$TypeSymbol*, $Type$TypeVar*, $TypeMetadata*)},
		{"needsStripping", "()Z", nullptr, $PROTECTED, $virtualMethod(Type$StructuralTypeMapping$2, needsStripping, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$StructuralTypeMapping",
		"visitWildcardType",
		"(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Type$StructuralTypeMapping$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$StructuralTypeMapping$2",
		"com.sun.tools.javac.code.Type$WildcardType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$StructuralTypeMapping$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$StructuralTypeMapping$2));
	});
	return class$;
}

$Class* Type$StructuralTypeMapping$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com