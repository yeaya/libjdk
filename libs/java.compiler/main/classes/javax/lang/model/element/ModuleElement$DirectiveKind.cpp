#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>

#include <java/lang/Enum.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

#undef EXPORTS
#undef OPENS
#undef PROVIDES
#undef REQUIRES
#undef USES

using $ModuleElement$DirectiveKindArray = $Array<::javax::lang::model::element::ModuleElement$DirectiveKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _ModuleElement$DirectiveKind_FieldInfo_[] = {
	{"REQUIRES", "Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleElement$DirectiveKind, REQUIRES)},
	{"EXPORTS", "Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleElement$DirectiveKind, EXPORTS)},
	{"OPENS", "Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleElement$DirectiveKind, OPENS)},
	{"USES", "Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleElement$DirectiveKind, USES)},
	{"PROVIDES", "Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleElement$DirectiveKind, PROVIDES)},
	{"$VALUES", "[Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleElement$DirectiveKind, $VALUES)},
	{}
};

$MethodInfo _ModuleElement$DirectiveKind_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleElement$DirectiveKindArray*(*)()>(&ModuleElement$DirectiveKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleElement$DirectiveKind::*)($String*,int32_t)>(&ModuleElement$DirectiveKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleElement$DirectiveKind*(*)($String*)>(&ModuleElement$DirectiveKind::valueOf))},
	{"values", "()[Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleElement$DirectiveKindArray*(*)()>(&ModuleElement$DirectiveKind::values))},
	{}
};

$InnerClassInfo _ModuleElement$DirectiveKind_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$DirectiveKind", "javax.lang.model.element.ModuleElement", "DirectiveKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleElement$DirectiveKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.element.ModuleElement$DirectiveKind",
	"java.lang.Enum",
	nullptr,
	_ModuleElement$DirectiveKind_FieldInfo_,
	_ModuleElement$DirectiveKind_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/element/ModuleElement$DirectiveKind;>;",
	nullptr,
	_ModuleElement$DirectiveKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$DirectiveKind($Class* clazz) {
	return $of($alloc(ModuleElement$DirectiveKind));
}

ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::REQUIRES = nullptr;
ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::EXPORTS = nullptr;
ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::OPENS = nullptr;
ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::USES = nullptr;
ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::PROVIDES = nullptr;
$ModuleElement$DirectiveKindArray* ModuleElement$DirectiveKind::$VALUES = nullptr;

$ModuleElement$DirectiveKindArray* ModuleElement$DirectiveKind::$values() {
	$init(ModuleElement$DirectiveKind);
	return $new($ModuleElement$DirectiveKindArray, {
		ModuleElement$DirectiveKind::REQUIRES,
		ModuleElement$DirectiveKind::EXPORTS,
		ModuleElement$DirectiveKind::OPENS,
		ModuleElement$DirectiveKind::USES,
		ModuleElement$DirectiveKind::PROVIDES
	});
}

$ModuleElement$DirectiveKindArray* ModuleElement$DirectiveKind::values() {
	$init(ModuleElement$DirectiveKind);
	return $cast($ModuleElement$DirectiveKindArray, ModuleElement$DirectiveKind::$VALUES->clone());
}

ModuleElement$DirectiveKind* ModuleElement$DirectiveKind::valueOf($String* name) {
	$init(ModuleElement$DirectiveKind);
	return $cast(ModuleElement$DirectiveKind, $Enum::valueOf(ModuleElement$DirectiveKind::class$, name));
}

void ModuleElement$DirectiveKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleElement$DirectiveKind($Class* class$) {
	$assignStatic(ModuleElement$DirectiveKind::REQUIRES, $new(ModuleElement$DirectiveKind, "REQUIRES"_s, 0));
	$assignStatic(ModuleElement$DirectiveKind::EXPORTS, $new(ModuleElement$DirectiveKind, "EXPORTS"_s, 1));
	$assignStatic(ModuleElement$DirectiveKind::OPENS, $new(ModuleElement$DirectiveKind, "OPENS"_s, 2));
	$assignStatic(ModuleElement$DirectiveKind::USES, $new(ModuleElement$DirectiveKind, "USES"_s, 3));
	$assignStatic(ModuleElement$DirectiveKind::PROVIDES, $new(ModuleElement$DirectiveKind, "PROVIDES"_s, 4));
	$assignStatic(ModuleElement$DirectiveKind::$VALUES, ModuleElement$DirectiveKind::$values());
}

ModuleElement$DirectiveKind::ModuleElement$DirectiveKind() {
}

$Class* ModuleElement$DirectiveKind::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$DirectiveKind, name, initialize, &_ModuleElement$DirectiveKind_ClassInfo_, clinit$ModuleElement$DirectiveKind, allocate$ModuleElement$DirectiveKind);
	return class$;
}

$Class* ModuleElement$DirectiveKind::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax