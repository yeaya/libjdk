#include <javax/lang/model/type/TypeKind.h>

#include <java/lang/Enum.h>
#include <javax/lang/model/type/TypeKind$1.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DECLARED
#undef DOUBLE
#undef ERROR
#undef EXECUTABLE
#undef FLOAT
#undef INT
#undef INTERSECTION
#undef LONG
#undef MODULE
#undef NONE
#undef NULL
#undef OTHER
#undef PACKAGE
#undef SHORT
#undef TYPEVAR
#undef UNION
#undef VOID
#undef WILDCARD

using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind$1 = ::javax::lang::model::type::TypeKind$1;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$FieldInfo _TypeKind_FieldInfo_[] = {
	{"BOOLEAN", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, BOOLEAN)},
	{"BYTE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, BYTE)},
	{"SHORT", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, SHORT)},
	{"INT", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, INT)},
	{"LONG", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, LONG)},
	{"CHAR", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, CHAR)},
	{"FLOAT", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, FLOAT)},
	{"DOUBLE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, DOUBLE)},
	{"VOID", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, VOID)},
	{"NONE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, NONE)},
	{"NULL", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, NULL)},
	{"ARRAY", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, ARRAY)},
	{"DECLARED", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, DECLARED)},
	{"ERROR", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, ERROR)},
	{"TYPEVAR", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, TYPEVAR)},
	{"WILDCARD", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, WILDCARD)},
	{"PACKAGE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, PACKAGE)},
	{"EXECUTABLE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, EXECUTABLE)},
	{"OTHER", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, OTHER)},
	{"UNION", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, UNION)},
	{"INTERSECTION", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, INTERSECTION)},
	{"MODULE", "Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeKind, MODULE)},
	{"$VALUES", "[Ljavax/lang/model/type/TypeKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeKind, $VALUES)},
	{}
};

$MethodInfo _TypeKind_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/type/TypeKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TypeKindArray*(*)()>(&TypeKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TypeKind::*)($String*,int32_t)>(&TypeKind::init$))},
	{"isPrimitive", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TypeKind::*)()>(&TypeKind::isPrimitive))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeKind*(*)($String*)>(&TypeKind::valueOf))},
	{"values", "()[Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeKindArray*(*)()>(&TypeKind::values))},
	{}
};

$InnerClassInfo _TypeKind_InnerClassesInfo_[] = {
	{"javax.lang.model.type.TypeKind$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.type.TypeKind",
	"java.lang.Enum",
	nullptr,
	_TypeKind_FieldInfo_,
	_TypeKind_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/type/TypeKind;>;",
	nullptr,
	_TypeKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.lang.model.type.TypeKind$1"
};

$Object* allocate$TypeKind($Class* clazz) {
	return $of($alloc(TypeKind));
}

TypeKind* TypeKind::BOOLEAN = nullptr;
TypeKind* TypeKind::BYTE = nullptr;
TypeKind* TypeKind::SHORT = nullptr;
TypeKind* TypeKind::INT = nullptr;
TypeKind* TypeKind::LONG = nullptr;
TypeKind* TypeKind::CHAR = nullptr;
TypeKind* TypeKind::FLOAT = nullptr;
TypeKind* TypeKind::DOUBLE = nullptr;
TypeKind* TypeKind::VOID = nullptr;
TypeKind* TypeKind::NONE = nullptr;
TypeKind* TypeKind::NULL = nullptr;
TypeKind* TypeKind::ARRAY = nullptr;
TypeKind* TypeKind::DECLARED = nullptr;
TypeKind* TypeKind::ERROR = nullptr;
TypeKind* TypeKind::TYPEVAR = nullptr;
TypeKind* TypeKind::WILDCARD = nullptr;
TypeKind* TypeKind::PACKAGE = nullptr;
TypeKind* TypeKind::EXECUTABLE = nullptr;
TypeKind* TypeKind::OTHER = nullptr;
TypeKind* TypeKind::UNION = nullptr;
TypeKind* TypeKind::INTERSECTION = nullptr;
TypeKind* TypeKind::MODULE = nullptr;
$TypeKindArray* TypeKind::$VALUES = nullptr;

$TypeKindArray* TypeKind::$values() {
	$init(TypeKind);
	return $new($TypeKindArray, {
		TypeKind::BOOLEAN,
		TypeKind::BYTE,
		TypeKind::SHORT,
		TypeKind::INT,
		TypeKind::LONG,
		TypeKind::CHAR,
		TypeKind::FLOAT,
		TypeKind::DOUBLE,
		TypeKind::VOID,
		TypeKind::NONE,
		TypeKind::NULL,
		TypeKind::ARRAY,
		TypeKind::DECLARED,
		TypeKind::ERROR,
		TypeKind::TYPEVAR,
		TypeKind::WILDCARD,
		TypeKind::PACKAGE,
		TypeKind::EXECUTABLE,
		TypeKind::OTHER,
		TypeKind::UNION,
		TypeKind::INTERSECTION,
		TypeKind::MODULE
	});
}

$TypeKindArray* TypeKind::values() {
	$init(TypeKind);
	return $cast($TypeKindArray, TypeKind::$VALUES->clone());
}

TypeKind* TypeKind::valueOf($String* name) {
	$init(TypeKind);
	return $cast(TypeKind, $Enum::valueOf(TypeKind::class$, name));
}

void TypeKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool TypeKind::isPrimitive() {
	$init($TypeKind$1);
	switch ($nc($TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->get((this)->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$TypeKind($Class* class$) {
	$assignStatic(TypeKind::BOOLEAN, $new(TypeKind, "BOOLEAN"_s, 0));
	$assignStatic(TypeKind::BYTE, $new(TypeKind, "BYTE"_s, 1));
	$assignStatic(TypeKind::SHORT, $new(TypeKind, "SHORT"_s, 2));
	$assignStatic(TypeKind::INT, $new(TypeKind, "INT"_s, 3));
	$assignStatic(TypeKind::LONG, $new(TypeKind, "LONG"_s, 4));
	$assignStatic(TypeKind::CHAR, $new(TypeKind, "CHAR"_s, 5));
	$assignStatic(TypeKind::FLOAT, $new(TypeKind, "FLOAT"_s, 6));
	$assignStatic(TypeKind::DOUBLE, $new(TypeKind, "DOUBLE"_s, 7));
	$assignStatic(TypeKind::VOID, $new(TypeKind, "VOID"_s, 8));
	$assignStatic(TypeKind::NONE, $new(TypeKind, "NONE"_s, 9));
	$assignStatic(TypeKind::NULL, $new(TypeKind, "NULL"_s, 10));
	$assignStatic(TypeKind::ARRAY, $new(TypeKind, "ARRAY"_s, 11));
	$assignStatic(TypeKind::DECLARED, $new(TypeKind, "DECLARED"_s, 12));
	$assignStatic(TypeKind::ERROR, $new(TypeKind, "ERROR"_s, 13));
	$assignStatic(TypeKind::TYPEVAR, $new(TypeKind, "TYPEVAR"_s, 14));
	$assignStatic(TypeKind::WILDCARD, $new(TypeKind, "WILDCARD"_s, 15));
	$assignStatic(TypeKind::PACKAGE, $new(TypeKind, "PACKAGE"_s, 16));
	$assignStatic(TypeKind::EXECUTABLE, $new(TypeKind, "EXECUTABLE"_s, 17));
	$assignStatic(TypeKind::OTHER, $new(TypeKind, "OTHER"_s, 18));
	$assignStatic(TypeKind::UNION, $new(TypeKind, "UNION"_s, 19));
	$assignStatic(TypeKind::INTERSECTION, $new(TypeKind, "INTERSECTION"_s, 20));
	$assignStatic(TypeKind::MODULE, $new(TypeKind, "MODULE"_s, 21));
	$assignStatic(TypeKind::$VALUES, TypeKind::$values());
}

TypeKind::TypeKind() {
}

$Class* TypeKind::load$($String* name, bool initialize) {
	$loadClass(TypeKind, name, initialize, &_TypeKind_ClassInfo_, clinit$TypeKind, allocate$TypeKind);
	return class$;
}

$Class* TypeKind::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax