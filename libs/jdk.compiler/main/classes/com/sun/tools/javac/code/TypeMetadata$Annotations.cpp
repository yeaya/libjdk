#include <com/sun/tools/javac/code/TypeMetadata$Annotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef ANNOTATIONS
#undef TO_BE_SET

using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$List* TypeMetadata$Annotations::TO_BE_SET = nullptr;

void TypeMetadata$Annotations::init$($List* annos) {
	$set(this, annos, annos);
}

$List* TypeMetadata$Annotations::getAnnotations() {
	return this->annos;
}

TypeMetadata$Annotations* TypeMetadata$Annotations::combine($TypeMetadata$Entry* other) {
	$Assert::check(this->annos == TypeMetadata$Annotations::TO_BE_SET);
	$set(this, annos, $nc($cast(TypeMetadata$Annotations, other))->annos);
	return this;
}

$TypeMetadata$Entry$Kind* TypeMetadata$Annotations::kind() {
	$init($TypeMetadata$Entry$Kind);
	return $TypeMetadata$Entry$Kind::ANNOTATIONS;
}

$String* TypeMetadata$Annotations::toString() {
	return $str({"ANNOTATIONS [ "_s, this->annos, " ]"_s});
}

void TypeMetadata$Annotations::clinit$($Class* clazz) {
	$assignStatic(TypeMetadata$Annotations::TO_BE_SET, $List::nil());
}

TypeMetadata$Annotations::TypeMetadata$Annotations() {
}

$Class* TypeMetadata$Annotations::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"annos", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PRIVATE, $field(TypeMetadata$Annotations, annos)},
		{"TO_BE_SET", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC | $STATIC | $FINAL, $staticField(TypeMetadata$Annotations, TO_BE_SET)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC, $method(TypeMetadata$Annotations, init$, void, $List*)},
		{"combine", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)Lcom/sun/tools/javac/code/TypeMetadata$Annotations;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata$Annotations, combine, TypeMetadata$Annotations*, $TypeMetadata$Entry*)},
		{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC, $virtualMethod(TypeMetadata$Annotations, getAnnotations, $List*)},
		{"kind", "()Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata$Annotations, kind, $TypeMetadata$Entry$Kind*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata$Annotations, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeMetadata$Annotations", "com.sun.tools.javac.code.TypeMetadata", "Annotations", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.TypeMetadata$Annotations",
		"java.lang.Object",
		"com.sun.tools.javac.code.TypeMetadata$Entry",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.TypeMetadata"
	};
	$loadClass(TypeMetadata$Annotations, name, initialize, &classInfo$$, TypeMetadata$Annotations::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeMetadata$Annotations);
	});
	return class$;
}

$Class* TypeMetadata$Annotations::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com