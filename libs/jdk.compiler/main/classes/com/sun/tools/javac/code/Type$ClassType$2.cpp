#include <com/sun/tools/javac/code/Type$ClassType$2.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$ClassType$2::init$($Type$ClassType* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata, Object$* val$value) {
	$set(this, this$0, this$0);
	$set(this, val$value, val$value);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

$Object* Type$ClassType$2::constValue() {
	return this->val$value;
}

$Type* Type$ClassType$2::baseType() {
	return $nc(this->tsym)->type;
}

$List* Type$ClassType$2::getTypeArguments() {
	return $Type$ClassType::getTypeArguments();
}

$Type* Type$ClassType$2::getEnclosingType() {
	return $Type$ClassType::getEnclosingType();
}

$Symbol$TypeSymbol* Type$ClassType$2::asElement() {
	return $Type$ClassType::asElement();
}

$1List* Type$ClassType$2::getAnnotationMirrors() {
	return $Type$ClassType::getAnnotationMirrors();
}

$Type$ClassType* Type$ClassType$2::cloneWithMetadata($TypeMetadata* md) {
	return $Type$ClassType::cloneWithMetadata(md);
}

Type$ClassType$2::Type$ClassType$2() {
}

$Class* Type$ClassType$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$ClassType$2, this$0)},
		{"val$value", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Type$ClassType$2, val$value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;Ljava/lang/Object;)V", nullptr, 0, $method(Type$ClassType$2, init$, void, $Type$ClassType*, $Type*, $List*, $Symbol$TypeSymbol*, $TypeMetadata*, Object$*)},
		{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType$2, asElement, $Symbol$TypeSymbol*)},
		{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType$2, baseType, $Type*)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType$2, cloneWithMetadata, $Type$ClassType*, $TypeMetadata*)},
		{"constValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType$2, constValue, $Object*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType$2, getAnnotationMirrors, $1List*)},
		{"getEnclosingType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType$2, getEnclosingType, $Type*)},
		{"getTypeArguments", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType$2, getTypeArguments, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$ClassType",
		"constType",
		"(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$ClassType$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$ClassType$2",
		"com.sun.tools.javac.code.Type$ClassType",
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
	$loadClass(Type$ClassType$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$ClassType$2));
	});
	return class$;
}

$Class* Type$ClassType$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com