#include <com/sun/tools/javac/code/Type$WildcardType$1.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$WildcardType$1::init$($Type$WildcardType* this$0, $Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $Type$TypeVar* bound, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$WildcardType::init$(type, kind, tsym, bound, metadata);
}

$Type* Type$WildcardType$1::baseType() {
	return this->this$0->baseType();
}

$TypeMirror* Type$WildcardType$1::getSuperBound() {
	return $Type$WildcardType::getSuperBound();
}

$TypeMirror* Type$WildcardType$1::getExtendsBound() {
	return $Type$WildcardType::getExtendsBound();
}

$List* Type$WildcardType$1::getAnnotationMirrors() {
	return $Type$WildcardType::getAnnotationMirrors();
}

$Type$WildcardType* Type$WildcardType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$WildcardType::cloneWithMetadata(md);
}

Type$WildcardType$1::Type$WildcardType$1() {
}

$Class* Type$WildcardType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$WildcardType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$WildcardType$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Type$WildcardType$1, init$, void, $Type$WildcardType*, $Type*, $BoundKind*, $Symbol$TypeSymbol*, $Type$TypeVar*, $TypeMetadata*)},
		{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$WildcardType$1, baseType, $Type*)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$WildcardType$1, cloneWithMetadata, $Type$WildcardType*, $TypeMetadata*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$WildcardType$1, getAnnotationMirrors, $List*)},
		{"getExtendsBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$WildcardType$1, getExtendsBound, $TypeMirror*)},
		{"getSuperBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$WildcardType$1, getSuperBound, $TypeMirror*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$WildcardType",
		"cloneWithMetadata",
		"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$WildcardType;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$WildcardType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$WildcardType$1",
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
	$loadClass(Type$WildcardType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$WildcardType$1));
	});
	return class$;
}

$Class* Type$WildcardType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com