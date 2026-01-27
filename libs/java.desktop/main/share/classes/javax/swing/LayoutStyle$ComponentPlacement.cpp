#include <javax/swing/LayoutStyle$ComponentPlacement.h>

#include <java/lang/Enum.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $LayoutStyle$ComponentPlacementArray = $Array<::javax::swing::LayoutStyle$ComponentPlacement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _LayoutStyle$ComponentPlacement_FieldInfo_[] = {
	{"RELATED", "Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutStyle$ComponentPlacement, RELATED)},
	{"UNRELATED", "Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutStyle$ComponentPlacement, UNRELATED)},
	{"INDENT", "Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutStyle$ComponentPlacement, INDENT)},
	{"$VALUES", "[Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutStyle$ComponentPlacement, $VALUES)},
	{}
};

$MethodInfo _LayoutStyle$ComponentPlacement_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LayoutStyle$ComponentPlacement, $values, $LayoutStyle$ComponentPlacementArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(LayoutStyle$ComponentPlacement, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutStyle$ComponentPlacement, valueOf, LayoutStyle$ComponentPlacement*, $String*)},
	{"values", "()[Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutStyle$ComponentPlacement, values, $LayoutStyle$ComponentPlacementArray*)},
	{}
};

$InnerClassInfo _LayoutStyle$ComponentPlacement_InnerClassesInfo_[] = {
	{"javax.swing.LayoutStyle$ComponentPlacement", "javax.swing.LayoutStyle", "ComponentPlacement", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LayoutStyle$ComponentPlacement_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.LayoutStyle$ComponentPlacement",
	"java.lang.Enum",
	nullptr,
	_LayoutStyle$ComponentPlacement_FieldInfo_,
	_LayoutStyle$ComponentPlacement_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/LayoutStyle$ComponentPlacement;>;",
	nullptr,
	_LayoutStyle$ComponentPlacement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.LayoutStyle"
};

$Object* allocate$LayoutStyle$ComponentPlacement($Class* clazz) {
	return $of($alloc(LayoutStyle$ComponentPlacement));
}

LayoutStyle$ComponentPlacement* LayoutStyle$ComponentPlacement::RELATED = nullptr;
LayoutStyle$ComponentPlacement* LayoutStyle$ComponentPlacement::UNRELATED = nullptr;
LayoutStyle$ComponentPlacement* LayoutStyle$ComponentPlacement::INDENT = nullptr;
$LayoutStyle$ComponentPlacementArray* LayoutStyle$ComponentPlacement::$VALUES = nullptr;

$LayoutStyle$ComponentPlacementArray* LayoutStyle$ComponentPlacement::$values() {
	$init(LayoutStyle$ComponentPlacement);
	return $new($LayoutStyle$ComponentPlacementArray, {
		LayoutStyle$ComponentPlacement::RELATED,
		LayoutStyle$ComponentPlacement::UNRELATED,
		LayoutStyle$ComponentPlacement::INDENT
	});
}

$LayoutStyle$ComponentPlacementArray* LayoutStyle$ComponentPlacement::values() {
	$init(LayoutStyle$ComponentPlacement);
	return $cast($LayoutStyle$ComponentPlacementArray, LayoutStyle$ComponentPlacement::$VALUES->clone());
}

LayoutStyle$ComponentPlacement* LayoutStyle$ComponentPlacement::valueOf($String* name) {
	$init(LayoutStyle$ComponentPlacement);
	return $cast(LayoutStyle$ComponentPlacement, $Enum::valueOf(LayoutStyle$ComponentPlacement::class$, name));
}

void LayoutStyle$ComponentPlacement::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$LayoutStyle$ComponentPlacement($Class* class$) {
	$assignStatic(LayoutStyle$ComponentPlacement::RELATED, $new(LayoutStyle$ComponentPlacement, "RELATED"_s, 0));
	$assignStatic(LayoutStyle$ComponentPlacement::UNRELATED, $new(LayoutStyle$ComponentPlacement, "UNRELATED"_s, 1));
	$assignStatic(LayoutStyle$ComponentPlacement::INDENT, $new(LayoutStyle$ComponentPlacement, "INDENT"_s, 2));
	$assignStatic(LayoutStyle$ComponentPlacement::$VALUES, LayoutStyle$ComponentPlacement::$values());
}

LayoutStyle$ComponentPlacement::LayoutStyle$ComponentPlacement() {
}

$Class* LayoutStyle$ComponentPlacement::load$($String* name, bool initialize) {
	$loadClass(LayoutStyle$ComponentPlacement, name, initialize, &_LayoutStyle$ComponentPlacement_ClassInfo_, clinit$LayoutStyle$ComponentPlacement, allocate$LayoutStyle$ComponentPlacement);
	return class$;
}

$Class* LayoutStyle$ComponentPlacement::class$ = nullptr;

	} // swing
} // javax