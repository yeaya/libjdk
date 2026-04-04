#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef MEMBER

using $ClassReader$AttributeKindArray = $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

ClassReader$AttributeKind* ClassReader$AttributeKind::CLASS = nullptr;
ClassReader$AttributeKind* ClassReader$AttributeKind::MEMBER = nullptr;
$ClassReader$AttributeKindArray* ClassReader$AttributeKind::$VALUES = nullptr;

$ClassReader$AttributeKindArray* ClassReader$AttributeKind::$values() {
	$init(ClassReader$AttributeKind);
	return $new($ClassReader$AttributeKindArray, {
		ClassReader$AttributeKind::CLASS,
		ClassReader$AttributeKind::MEMBER
	});
}

$ClassReader$AttributeKindArray* ClassReader$AttributeKind::values() {
	$init(ClassReader$AttributeKind);
	return $cast($ClassReader$AttributeKindArray, ClassReader$AttributeKind::$VALUES->clone());
}

ClassReader$AttributeKind* ClassReader$AttributeKind::valueOf($String* name) {
	$init(ClassReader$AttributeKind);
	return $cast(ClassReader$AttributeKind, $Enum::valueOf(ClassReader$AttributeKind::class$, name));
}

void ClassReader$AttributeKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ClassReader$AttributeKind::clinit$($Class* clazz) {
	$assignStatic(ClassReader$AttributeKind::CLASS, $new(ClassReader$AttributeKind, "CLASS"_s, 0));
	$assignStatic(ClassReader$AttributeKind::MEMBER, $new(ClassReader$AttributeKind, "MEMBER"_s, 1));
	$assignStatic(ClassReader$AttributeKind::$VALUES, ClassReader$AttributeKind::$values());
}

ClassReader$AttributeKind::ClassReader$AttributeKind() {
}

$Class* ClassReader$AttributeKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLASS", "Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassReader$AttributeKind, CLASS)},
		{"MEMBER", "Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassReader$AttributeKind, MEMBER)},
		{"$VALUES", "[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassReader$AttributeKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ClassReader$AttributeKind, $values, $ClassReader$AttributeKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ClassReader$AttributeKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassReader$AttributeKind, valueOf, ClassReader$AttributeKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassReader$AttributeKind, values, $ClassReader$AttributeKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$AttributeKind", "com.sun.tools.javac.jvm.ClassReader", "AttributeKind", $PROTECTED | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.jvm.ClassReader$AttributeKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$AttributeKind, name, initialize, &classInfo$$, ClassReader$AttributeKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClassReader$AttributeKind));
	});
	return class$;
}

$Class* ClassReader$AttributeKind::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com