#include <javax/annotation/processing/Completions$SimpleCompletion.h>
#include <javax/annotation/processing/Completions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace annotation {
		namespace processing {

void Completions$SimpleCompletion::init$($String* value, $String* message) {
	if (value == nullptr || message == nullptr) {
		$throwNew($NullPointerException, "Null completion strings not accepted."_s);
	}
	$set(this, value, value);
	$set(this, message, message);
}

$String* Completions$SimpleCompletion::getValue() {
	return this->value;
}

$String* Completions$SimpleCompletion::getMessage() {
	return this->message;
}

$String* Completions$SimpleCompletion::toString() {
	return $str({"[\""_s, this->value, "\", \""_s, this->message, "\"]"_s});
}

Completions$SimpleCompletion::Completions$SimpleCompletion() {
}

$Class* Completions$SimpleCompletion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Completions$SimpleCompletion, value)},
		{"message", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Completions$SimpleCompletion, message)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(Completions$SimpleCompletion, init$, void, $String*, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Completions$SimpleCompletion, getMessage, $String*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Completions$SimpleCompletion, getValue, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Completions$SimpleCompletion, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.annotation.processing.Completions$SimpleCompletion", "javax.annotation.processing.Completions", "SimpleCompletion", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.annotation.processing.Completions$SimpleCompletion",
		"java.lang.Object",
		"javax.annotation.processing.Completion",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.annotation.processing.Completions"
	};
	$loadClass(Completions$SimpleCompletion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Completions$SimpleCompletion);
	});
	return class$;
}

$Class* Completions$SimpleCompletion::class$ = nullptr;

		} // processing
	} // annotation
} // javax