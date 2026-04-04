#include <com/sun/tools/javac/code/Type$JCPrimitiveType$1.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$JCPrimitiveType$1::init$($Type$JCPrimitiveType* this$0, $TypeTag* tag, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$JCPrimitiveType::init$(tag, tsym, metadata);
}

$Type* Type$JCPrimitiveType$1::baseType() {
	return this->this$0->baseType();
}

$List* Type$JCPrimitiveType$1::getAnnotationMirrors() {
	return $Type$JCPrimitiveType::getAnnotationMirrors();
}

$Type$JCPrimitiveType* Type$JCPrimitiveType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$JCPrimitiveType::cloneWithMetadata(md);
}

Type$JCPrimitiveType$1::Type$JCPrimitiveType$1() {
}

$Class* Type$JCPrimitiveType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$JCPrimitiveType$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$JCPrimitiveType;Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(Type$JCPrimitiveType$1, init$, void, $Type$JCPrimitiveType*, $TypeTag*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$JCPrimitiveType$1, baseType, $Type*)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$JCPrimitiveType$1, cloneWithMetadata, $Type$JCPrimitiveType*, $TypeMetadata*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$JCPrimitiveType$1, getAnnotationMirrors, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$JCPrimitiveType",
		"cloneWithMetadata",
		"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$JCPrimitiveType;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$JCPrimitiveType", "com.sun.tools.javac.code.Type", "JCPrimitiveType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$JCPrimitiveType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$JCPrimitiveType$1",
		"com.sun.tools.javac.code.Type$JCPrimitiveType",
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
	$loadClass(Type$JCPrimitiveType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$JCPrimitiveType$1));
	});
	return class$;
}

$Class* Type$JCPrimitiveType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com