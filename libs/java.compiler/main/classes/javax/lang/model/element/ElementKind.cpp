#include <javax/lang/model/element/ElementKind.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef BINDING_VARIABLE
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef ENUM_CONSTANT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCE_INIT
#undef INTERFACE
#undef LOCAL_VARIABLE
#undef METHOD
#undef MODULE
#undef OTHER
#undef PACKAGE
#undef PARAMETER
#undef RECORD
#undef RECORD_COMPONENT
#undef RESOURCE_VARIABLE
#undef STATIC_INIT
#undef TYPE_PARAMETER

using $ElementKindArray = $Array<::javax::lang::model::element::ElementKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _ElementKind_FieldInfo_[] = {
	{"PACKAGE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, PACKAGE)},
	{"ENUM", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, ENUM)},
	{"CLASS", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, CLASS)},
	{"ANNOTATION_TYPE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, ANNOTATION_TYPE)},
	{"INTERFACE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, INTERFACE)},
	{"ENUM_CONSTANT", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, ENUM_CONSTANT)},
	{"FIELD", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, FIELD)},
	{"PARAMETER", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, PARAMETER)},
	{"LOCAL_VARIABLE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, LOCAL_VARIABLE)},
	{"EXCEPTION_PARAMETER", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, EXCEPTION_PARAMETER)},
	{"METHOD", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, METHOD)},
	{"CONSTRUCTOR", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, CONSTRUCTOR)},
	{"STATIC_INIT", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, STATIC_INIT)},
	{"INSTANCE_INIT", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, INSTANCE_INIT)},
	{"TYPE_PARAMETER", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, TYPE_PARAMETER)},
	{"OTHER", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, OTHER)},
	{"RESOURCE_VARIABLE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, RESOURCE_VARIABLE)},
	{"MODULE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, MODULE)},
	{"RECORD", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, RECORD)},
	{"RECORD_COMPONENT", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, RECORD_COMPONENT)},
	{"BINDING_VARIABLE", "Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementKind, BINDING_VARIABLE)},
	{"$VALUES", "[Ljavax/lang/model/element/ElementKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ElementKind, $VALUES)},
	{}
};

$MethodInfo _ElementKind_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/element/ElementKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ElementKindArray*(*)()>(&ElementKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ElementKind::*)($String*,int32_t)>(&ElementKind::init$))},
	{"isClass", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ElementKind::*)()>(&ElementKind::isClass))},
	{"isField", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ElementKind::*)()>(&ElementKind::isField))},
	{"isInterface", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ElementKind::*)()>(&ElementKind::isInterface))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ElementKind*(*)($String*)>(&ElementKind::valueOf))},
	{"values", "()[Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ElementKindArray*(*)()>(&ElementKind::values))},
	{}
};

$ClassInfo _ElementKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.element.ElementKind",
	"java.lang.Enum",
	nullptr,
	_ElementKind_FieldInfo_,
	_ElementKind_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/element/ElementKind;>;"
};

$Object* allocate$ElementKind($Class* clazz) {
	return $of($alloc(ElementKind));
}

ElementKind* ElementKind::PACKAGE = nullptr;
ElementKind* ElementKind::ENUM = nullptr;
ElementKind* ElementKind::CLASS = nullptr;
ElementKind* ElementKind::ANNOTATION_TYPE = nullptr;
ElementKind* ElementKind::INTERFACE = nullptr;
ElementKind* ElementKind::ENUM_CONSTANT = nullptr;
ElementKind* ElementKind::FIELD = nullptr;
ElementKind* ElementKind::PARAMETER = nullptr;
ElementKind* ElementKind::LOCAL_VARIABLE = nullptr;
ElementKind* ElementKind::EXCEPTION_PARAMETER = nullptr;
ElementKind* ElementKind::METHOD = nullptr;
ElementKind* ElementKind::CONSTRUCTOR = nullptr;
ElementKind* ElementKind::STATIC_INIT = nullptr;
ElementKind* ElementKind::INSTANCE_INIT = nullptr;
ElementKind* ElementKind::TYPE_PARAMETER = nullptr;
ElementKind* ElementKind::OTHER = nullptr;
ElementKind* ElementKind::RESOURCE_VARIABLE = nullptr;
ElementKind* ElementKind::MODULE = nullptr;
ElementKind* ElementKind::RECORD = nullptr;
ElementKind* ElementKind::RECORD_COMPONENT = nullptr;
ElementKind* ElementKind::BINDING_VARIABLE = nullptr;
$ElementKindArray* ElementKind::$VALUES = nullptr;

$ElementKindArray* ElementKind::$values() {
	$init(ElementKind);
	return $new($ElementKindArray, {
		ElementKind::PACKAGE,
		ElementKind::ENUM,
		ElementKind::CLASS,
		ElementKind::ANNOTATION_TYPE,
		ElementKind::INTERFACE,
		ElementKind::ENUM_CONSTANT,
		ElementKind::FIELD,
		ElementKind::PARAMETER,
		ElementKind::LOCAL_VARIABLE,
		ElementKind::EXCEPTION_PARAMETER,
		ElementKind::METHOD,
		ElementKind::CONSTRUCTOR,
		ElementKind::STATIC_INIT,
		ElementKind::INSTANCE_INIT,
		ElementKind::TYPE_PARAMETER,
		ElementKind::OTHER,
		ElementKind::RESOURCE_VARIABLE,
		ElementKind::MODULE,
		ElementKind::RECORD,
		ElementKind::RECORD_COMPONENT,
		ElementKind::BINDING_VARIABLE
	});
}

$ElementKindArray* ElementKind::values() {
	$init(ElementKind);
	return $cast($ElementKindArray, ElementKind::$VALUES->clone());
}

ElementKind* ElementKind::valueOf($String* name) {
	$init(ElementKind);
	return $cast(ElementKind, $Enum::valueOf(ElementKind::class$, name));
}

void ElementKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool ElementKind::isClass() {
	return this == ElementKind::CLASS || this == ElementKind::ENUM || this == ElementKind::RECORD;
}

bool ElementKind::isInterface() {
	return this == ElementKind::INTERFACE || this == ElementKind::ANNOTATION_TYPE;
}

bool ElementKind::isField() {
	return this == ElementKind::FIELD || this == ElementKind::ENUM_CONSTANT;
}

void clinit$ElementKind($Class* class$) {
	$assignStatic(ElementKind::PACKAGE, $new(ElementKind, "PACKAGE"_s, 0));
	$assignStatic(ElementKind::ENUM, $new(ElementKind, "ENUM"_s, 1));
	$assignStatic(ElementKind::CLASS, $new(ElementKind, "CLASS"_s, 2));
	$assignStatic(ElementKind::ANNOTATION_TYPE, $new(ElementKind, "ANNOTATION_TYPE"_s, 3));
	$assignStatic(ElementKind::INTERFACE, $new(ElementKind, "INTERFACE"_s, 4));
	$assignStatic(ElementKind::ENUM_CONSTANT, $new(ElementKind, "ENUM_CONSTANT"_s, 5));
	$assignStatic(ElementKind::FIELD, $new(ElementKind, "FIELD"_s, 6));
	$assignStatic(ElementKind::PARAMETER, $new(ElementKind, "PARAMETER"_s, 7));
	$assignStatic(ElementKind::LOCAL_VARIABLE, $new(ElementKind, "LOCAL_VARIABLE"_s, 8));
	$assignStatic(ElementKind::EXCEPTION_PARAMETER, $new(ElementKind, "EXCEPTION_PARAMETER"_s, 9));
	$assignStatic(ElementKind::METHOD, $new(ElementKind, "METHOD"_s, 10));
	$assignStatic(ElementKind::CONSTRUCTOR, $new(ElementKind, "CONSTRUCTOR"_s, 11));
	$assignStatic(ElementKind::STATIC_INIT, $new(ElementKind, "STATIC_INIT"_s, 12));
	$assignStatic(ElementKind::INSTANCE_INIT, $new(ElementKind, "INSTANCE_INIT"_s, 13));
	$assignStatic(ElementKind::TYPE_PARAMETER, $new(ElementKind, "TYPE_PARAMETER"_s, 14));
	$assignStatic(ElementKind::OTHER, $new(ElementKind, "OTHER"_s, 15));
	$assignStatic(ElementKind::RESOURCE_VARIABLE, $new(ElementKind, "RESOURCE_VARIABLE"_s, 16));
	$assignStatic(ElementKind::MODULE, $new(ElementKind, "MODULE"_s, 17));
	$assignStatic(ElementKind::RECORD, $new(ElementKind, "RECORD"_s, 18));
	$assignStatic(ElementKind::RECORD_COMPONENT, $new(ElementKind, "RECORD_COMPONENT"_s, 19));
	$assignStatic(ElementKind::BINDING_VARIABLE, $new(ElementKind, "BINDING_VARIABLE"_s, 20));
	$assignStatic(ElementKind::$VALUES, ElementKind::$values());
}

ElementKind::ElementKind() {
}

$Class* ElementKind::load$($String* name, bool initialize) {
	$loadClass(ElementKind, name, initialize, &_ElementKind_ClassInfo_, clinit$ElementKind, allocate$ElementKind);
	return class$;
}

$Class* ElementKind::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax