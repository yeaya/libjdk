#include <javax/annotation/processing/Completions.h>
#include <javax/annotation/processing/Completion.h>
#include <javax/annotation/processing/Completions$SimpleCompletion.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Completion = ::javax::annotation::processing::Completion;
using $Completions$SimpleCompletion = ::javax::annotation::processing::Completions$SimpleCompletion;

namespace javax {
	namespace annotation {
		namespace processing {

void Completions::init$() {
}

$Completion* Completions::of($String* value, $String* message) {
	return $new($Completions$SimpleCompletion, value, message);
}

$Completion* Completions::of($String* value) {
	return $new($Completions$SimpleCompletion, value, ""_s);
}

Completions::Completions() {
}

$Class* Completions::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Completions, init$, void)},
		{"of", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/annotation/processing/Completion;", nullptr, $PUBLIC | $STATIC, $staticMethod(Completions, of, $Completion*, $String*, $String*)},
		{"of", "(Ljava/lang/String;)Ljavax/annotation/processing/Completion;", nullptr, $PUBLIC | $STATIC, $staticMethod(Completions, of, $Completion*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.annotation.processing.Completions$SimpleCompletion", "javax.annotation.processing.Completions", "SimpleCompletion", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.annotation.processing.Completions",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.annotation.processing.Completions$SimpleCompletion"
	};
	$loadClass(Completions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Completions);
	});
	return class$;
}

$Class* Completions::class$ = nullptr;

		} // processing
	} // annotation
} // javax