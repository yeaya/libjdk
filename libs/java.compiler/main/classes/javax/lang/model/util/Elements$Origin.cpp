#include <javax/lang/model/util/Elements$Origin.h>

#include <java/lang/Enum.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

#undef EXPLICIT
#undef MANDATED
#undef SYNTHETIC

using $Elements$OriginArray = $Array<::javax::lang::model::util::Elements$Origin>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$FieldInfo _Elements$Origin_FieldInfo_[] = {
	{"EXPLICIT", "Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Elements$Origin, EXPLICIT)},
	{"MANDATED", "Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Elements$Origin, MANDATED)},
	{"SYNTHETIC", "Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Elements$Origin, SYNTHETIC)},
	{"$VALUES", "[Ljavax/lang/model/util/Elements$Origin;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Elements$Origin, $VALUES)},
	{}
};

$MethodInfo _Elements$Origin_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/util/Elements$Origin;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Elements$Origin, $values, $Elements$OriginArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Elements$Origin, init$, void, $String*, int32_t)},
	{"isDeclared", "()Z", nullptr, $PUBLIC, $method(Elements$Origin, isDeclared, bool)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC | $STATIC, $staticMethod(Elements$Origin, valueOf, Elements$Origin*, $String*)},
	{"values", "()[Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC | $STATIC, $staticMethod(Elements$Origin, values, $Elements$OriginArray*)},
	{}
};

$InnerClassInfo _Elements$Origin_InnerClassesInfo_[] = {
	{"javax.lang.model.util.Elements$Origin", "javax.lang.model.util.Elements", "Origin", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Elements$Origin_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.util.Elements$Origin",
	"java.lang.Enum",
	nullptr,
	_Elements$Origin_FieldInfo_,
	_Elements$Origin_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/util/Elements$Origin;>;",
	nullptr,
	_Elements$Origin_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.util.Elements"
};

$Object* allocate$Elements$Origin($Class* clazz) {
	return $of($alloc(Elements$Origin));
}

Elements$Origin* Elements$Origin::EXPLICIT = nullptr;
Elements$Origin* Elements$Origin::MANDATED = nullptr;
Elements$Origin* Elements$Origin::SYNTHETIC = nullptr;
$Elements$OriginArray* Elements$Origin::$VALUES = nullptr;

$Elements$OriginArray* Elements$Origin::$values() {
	$init(Elements$Origin);
	return $new($Elements$OriginArray, {
		Elements$Origin::EXPLICIT,
		Elements$Origin::MANDATED,
		Elements$Origin::SYNTHETIC
	});
}

$Elements$OriginArray* Elements$Origin::values() {
	$init(Elements$Origin);
	return $cast($Elements$OriginArray, Elements$Origin::$VALUES->clone());
}

Elements$Origin* Elements$Origin::valueOf($String* name) {
	$init(Elements$Origin);
	return $cast(Elements$Origin, $Enum::valueOf(Elements$Origin::class$, name));
}

void Elements$Origin::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool Elements$Origin::isDeclared() {
	return this != Elements$Origin::SYNTHETIC;
}

void clinit$Elements$Origin($Class* class$) {
	$assignStatic(Elements$Origin::EXPLICIT, $new(Elements$Origin, "EXPLICIT"_s, 0));
	$assignStatic(Elements$Origin::MANDATED, $new(Elements$Origin, "MANDATED"_s, 1));
	$assignStatic(Elements$Origin::SYNTHETIC, $new(Elements$Origin, "SYNTHETIC"_s, 2));
	$assignStatic(Elements$Origin::$VALUES, Elements$Origin::$values());
}

Elements$Origin::Elements$Origin() {
}

$Class* Elements$Origin::load$($String* name, bool initialize) {
	$loadClass(Elements$Origin, name, initialize, &_Elements$Origin_ClassInfo_, clinit$Elements$Origin, allocate$Elements$Origin);
	return class$;
}

$Class* Elements$Origin::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax