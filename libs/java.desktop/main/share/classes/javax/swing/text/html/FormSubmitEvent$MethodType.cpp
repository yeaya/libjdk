#include <javax/swing/text/html/FormSubmitEvent$MethodType.h>
#include <java/lang/Enum.h>
#include <javax/swing/text/html/FormSubmitEvent.h>
#include <jcpp.h>

#undef GET
#undef POST

using $FormSubmitEvent$MethodTypeArray = $Array<::javax::swing::text::html::FormSubmitEvent$MethodType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::GET = nullptr;
FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::POST = nullptr;
$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::$VALUES = nullptr;

$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::$values() {
	$init(FormSubmitEvent$MethodType);
	return $new($FormSubmitEvent$MethodTypeArray, {
		FormSubmitEvent$MethodType::GET,
		FormSubmitEvent$MethodType::POST
	});
}

$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::values() {
	$init(FormSubmitEvent$MethodType);
	return $cast($FormSubmitEvent$MethodTypeArray, FormSubmitEvent$MethodType::$VALUES->clone());
}

FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::valueOf($String* name) {
	$init(FormSubmitEvent$MethodType);
	return $cast(FormSubmitEvent$MethodType, $Enum::valueOf(FormSubmitEvent$MethodType::class$, name));
}

void FormSubmitEvent$MethodType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void FormSubmitEvent$MethodType::clinit$($Class* clazz) {
	$assignStatic(FormSubmitEvent$MethodType::GET, $new(FormSubmitEvent$MethodType, "GET"_s, 0));
	$assignStatic(FormSubmitEvent$MethodType::POST, $new(FormSubmitEvent$MethodType, "POST"_s, 1));
	$assignStatic(FormSubmitEvent$MethodType::$VALUES, FormSubmitEvent$MethodType::$values());
}

FormSubmitEvent$MethodType::FormSubmitEvent$MethodType() {
}

$Class* FormSubmitEvent$MethodType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GET", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormSubmitEvent$MethodType, GET)},
		{"POST", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormSubmitEvent$MethodType, POST)},
		{"$VALUES", "[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FormSubmitEvent$MethodType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FormSubmitEvent$MethodType, $values, $FormSubmitEvent$MethodTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FormSubmitEvent$MethodType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormSubmitEvent$MethodType, valueOf, FormSubmitEvent$MethodType*, $String*)},
		{"values", "()[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormSubmitEvent$MethodType, values, $FormSubmitEvent$MethodTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FormSubmitEvent$MethodType", "javax.swing.text.html.FormSubmitEvent", "MethodType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.text.html.FormSubmitEvent$MethodType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/text/html/FormSubmitEvent$MethodType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.FormSubmitEvent"
	};
	$loadClass(FormSubmitEvent$MethodType, name, initialize, &classInfo$$, FormSubmitEvent$MethodType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FormSubmitEvent$MethodType));
	});
	return class$;
}

$Class* FormSubmitEvent$MethodType::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax