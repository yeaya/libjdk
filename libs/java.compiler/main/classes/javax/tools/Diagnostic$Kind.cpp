#include <javax/tools/Diagnostic$Kind.h>

#include <java/lang/Enum.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERROR
#undef MANDATORY_WARNING
#undef NOTE
#undef OTHER
#undef WARNING

using $Diagnostic$KindArray = $Array<::javax::tools::Diagnostic$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

$FieldInfo _Diagnostic$Kind_FieldInfo_[] = {
	{"ERROR", "Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Diagnostic$Kind, ERROR)},
	{"WARNING", "Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Diagnostic$Kind, WARNING)},
	{"MANDATORY_WARNING", "Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Diagnostic$Kind, MANDATORY_WARNING)},
	{"NOTE", "Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Diagnostic$Kind, NOTE)},
	{"OTHER", "Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Diagnostic$Kind, OTHER)},
	{"$VALUES", "[Ljavax/tools/Diagnostic$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Diagnostic$Kind, $VALUES)},
	{}
};

$MethodInfo _Diagnostic$Kind_MethodInfo_[] = {
	{"$values", "()[Ljavax/tools/Diagnostic$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Diagnostic$Kind, $values, $Diagnostic$KindArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Diagnostic$Kind, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Diagnostic$Kind, valueOf, Diagnostic$Kind*, $String*)},
	{"values", "()[Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Diagnostic$Kind, values, $Diagnostic$KindArray*)},
	{}
};

$InnerClassInfo _Diagnostic$Kind_InnerClassesInfo_[] = {
	{"javax.tools.Diagnostic$Kind", "javax.tools.Diagnostic", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Diagnostic$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.tools.Diagnostic$Kind",
	"java.lang.Enum",
	nullptr,
	_Diagnostic$Kind_FieldInfo_,
	_Diagnostic$Kind_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/tools/Diagnostic$Kind;>;",
	nullptr,
	_Diagnostic$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.Diagnostic"
};

$Object* allocate$Diagnostic$Kind($Class* clazz) {
	return $of($alloc(Diagnostic$Kind));
}

Diagnostic$Kind* Diagnostic$Kind::ERROR = nullptr;
Diagnostic$Kind* Diagnostic$Kind::WARNING = nullptr;
Diagnostic$Kind* Diagnostic$Kind::MANDATORY_WARNING = nullptr;
Diagnostic$Kind* Diagnostic$Kind::NOTE = nullptr;
Diagnostic$Kind* Diagnostic$Kind::OTHER = nullptr;
$Diagnostic$KindArray* Diagnostic$Kind::$VALUES = nullptr;

$Diagnostic$KindArray* Diagnostic$Kind::$values() {
	$init(Diagnostic$Kind);
	return $new($Diagnostic$KindArray, {
		Diagnostic$Kind::ERROR,
		Diagnostic$Kind::WARNING,
		Diagnostic$Kind::MANDATORY_WARNING,
		Diagnostic$Kind::NOTE,
		Diagnostic$Kind::OTHER
	});
}

$Diagnostic$KindArray* Diagnostic$Kind::values() {
	$init(Diagnostic$Kind);
	return $cast($Diagnostic$KindArray, Diagnostic$Kind::$VALUES->clone());
}

Diagnostic$Kind* Diagnostic$Kind::valueOf($String* name) {
	$init(Diagnostic$Kind);
	return $cast(Diagnostic$Kind, $Enum::valueOf(Diagnostic$Kind::class$, name));
}

void Diagnostic$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Diagnostic$Kind($Class* class$) {
	$assignStatic(Diagnostic$Kind::ERROR, $new(Diagnostic$Kind, "ERROR"_s, 0));
	$assignStatic(Diagnostic$Kind::WARNING, $new(Diagnostic$Kind, "WARNING"_s, 1));
	$assignStatic(Diagnostic$Kind::MANDATORY_WARNING, $new(Diagnostic$Kind, "MANDATORY_WARNING"_s, 2));
	$assignStatic(Diagnostic$Kind::NOTE, $new(Diagnostic$Kind, "NOTE"_s, 3));
	$assignStatic(Diagnostic$Kind::OTHER, $new(Diagnostic$Kind, "OTHER"_s, 4));
	$assignStatic(Diagnostic$Kind::$VALUES, Diagnostic$Kind::$values());
}

Diagnostic$Kind::Diagnostic$Kind() {
}

$Class* Diagnostic$Kind::load$($String* name, bool initialize) {
	$loadClass(Diagnostic$Kind, name, initialize, &_Diagnostic$Kind_ClassInfo_, clinit$Diagnostic$Kind, allocate$Diagnostic$Kind);
	return class$;
}

$Class* Diagnostic$Kind::class$ = nullptr;

	} // tools
} // javax