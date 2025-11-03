#include <javax/lang/model/element/Modifier.h>

#include <java/lang/Enum.h>
#include <java/util/Locale.h>
#include <javax/lang/model/element/Modifier$1.h>
#include <jcpp.h>

#undef ABSTRACT
#undef DEFAULT
#undef FINAL
#undef NATIVE
#undef NON_SEALED
#undef PRIVATE
#undef PROTECTED
#undef PUBLIC
#undef SEALED
#undef STATIC
#undef STRICTFP
#undef SYNCHRONIZED
#undef TRANSIENT
#undef US
#undef VOLATILE

using $ModifierArray = $Array<::javax::lang::model::element::Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Modifier$1 = ::javax::lang::model::element::Modifier$1;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _Modifier_FieldInfo_[] = {
	{"PUBLIC", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, PUBLIC)},
	{"PROTECTED", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, PROTECTED)},
	{"PRIVATE", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, PRIVATE)},
	{"ABSTRACT", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, ABSTRACT)},
	{"DEFAULT", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, DEFAULT)},
	{"STATIC", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, STATIC)},
	{"SEALED", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, SEALED)},
	{"NON_SEALED", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, NON_SEALED)},
	{"FINAL", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, FINAL)},
	{"TRANSIENT", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, TRANSIENT)},
	{"VOLATILE", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, VOLATILE)},
	{"SYNCHRONIZED", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, SYNCHRONIZED)},
	{"NATIVE", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, NATIVE)},
	{"STRICTFP", "Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Modifier, STRICTFP)},
	{"$VALUES", "[Ljavax/lang/model/element/Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Modifier, $VALUES)},
	{}
};

$MethodInfo _Modifier_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/element/Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModifierArray*(*)()>(&Modifier::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Modifier::*)($String*,int32_t)>(&Modifier::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Modifier*(*)($String*)>(&Modifier::valueOf))},
	{"values", "()[Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModifierArray*(*)()>(&Modifier::values))},
	{}
};

$InnerClassInfo _Modifier_InnerClassesInfo_[] = {
	{"javax.lang.model.element.Modifier$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Modifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"javax.lang.model.element.Modifier",
	"java.lang.Enum",
	nullptr,
	_Modifier_FieldInfo_,
	_Modifier_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/element/Modifier;>;",
	nullptr,
	_Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.lang.model.element.Modifier$1"
};

$Object* allocate$Modifier($Class* clazz) {
	return $of($alloc(Modifier));
}

Modifier* Modifier::PUBLIC = nullptr;
Modifier* Modifier::PROTECTED = nullptr;
Modifier* Modifier::PRIVATE = nullptr;
Modifier* Modifier::ABSTRACT = nullptr;
Modifier* Modifier::DEFAULT = nullptr;
Modifier* Modifier::STATIC = nullptr;
Modifier* Modifier::SEALED = nullptr;
Modifier* Modifier::NON_SEALED = nullptr;
Modifier* Modifier::FINAL = nullptr;
Modifier* Modifier::TRANSIENT = nullptr;
Modifier* Modifier::VOLATILE = nullptr;
Modifier* Modifier::SYNCHRONIZED = nullptr;
Modifier* Modifier::NATIVE = nullptr;
Modifier* Modifier::STRICTFP = nullptr;
$ModifierArray* Modifier::$VALUES = nullptr;

$ModifierArray* Modifier::$values() {
	$init(Modifier);
	return $new($ModifierArray, {
		Modifier::PUBLIC,
		Modifier::PROTECTED,
		Modifier::PRIVATE,
		Modifier::ABSTRACT,
		Modifier::DEFAULT,
		Modifier::STATIC,
		Modifier::SEALED,
		Modifier::NON_SEALED,
		Modifier::FINAL,
		Modifier::TRANSIENT,
		Modifier::VOLATILE,
		Modifier::SYNCHRONIZED,
		Modifier::NATIVE,
		Modifier::STRICTFP
	});
}

$ModifierArray* Modifier::values() {
	$init(Modifier);
	return $cast($ModifierArray, Modifier::$VALUES->clone());
}

Modifier* Modifier::valueOf($String* name) {
	$init(Modifier);
	return $cast(Modifier, $Enum::valueOf(Modifier::class$, name));
}

void Modifier::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$String* Modifier::toString() {
	$init($Locale);
	return $nc($(name()))->toLowerCase($Locale::US);
}

void clinit$Modifier($Class* class$) {
	$assignStatic(Modifier::PUBLIC, $new(Modifier, "PUBLIC"_s, 0));
	$assignStatic(Modifier::PROTECTED, $new(Modifier, "PROTECTED"_s, 1));
	$assignStatic(Modifier::PRIVATE, $new(Modifier, "PRIVATE"_s, 2));
	$assignStatic(Modifier::ABSTRACT, $new(Modifier, "ABSTRACT"_s, 3));
	$assignStatic(Modifier::DEFAULT, $new(Modifier, "DEFAULT"_s, 4));
	$assignStatic(Modifier::STATIC, $new(Modifier, "STATIC"_s, 5));
	$assignStatic(Modifier::SEALED, $new(Modifier, "SEALED"_s, 6));
	$assignStatic(Modifier::NON_SEALED, $new($Modifier$1, "NON_SEALED"_s, 7));
	$assignStatic(Modifier::FINAL, $new(Modifier, "FINAL"_s, 8));
	$assignStatic(Modifier::TRANSIENT, $new(Modifier, "TRANSIENT"_s, 9));
	$assignStatic(Modifier::VOLATILE, $new(Modifier, "VOLATILE"_s, 10));
	$assignStatic(Modifier::SYNCHRONIZED, $new(Modifier, "SYNCHRONIZED"_s, 11));
	$assignStatic(Modifier::NATIVE, $new(Modifier, "NATIVE"_s, 12));
	$assignStatic(Modifier::STRICTFP, $new(Modifier, "STRICTFP"_s, 13));
	$assignStatic(Modifier::$VALUES, Modifier::$values());
}

Modifier::Modifier() {
}

$Class* Modifier::load$($String* name, bool initialize) {
	$loadClass(Modifier, name, initialize, &_Modifier_ClassInfo_, clinit$Modifier, allocate$Modifier);
	return class$;
}

$Class* Modifier::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax