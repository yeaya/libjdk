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

$MethodInfo _Completions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Completions::*)()>(&Completions::init$))},
	{"of", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/annotation/processing/Completion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Completion*(*)($String*,$String*)>(&Completions::of))},
	{"of", "(Ljava/lang/String;)Ljavax/annotation/processing/Completion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Completion*(*)($String*)>(&Completions::of))},
	{}
};

$InnerClassInfo _Completions_InnerClassesInfo_[] = {
	{"javax.annotation.processing.Completions$SimpleCompletion", "javax.annotation.processing.Completions", "SimpleCompletion", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Completions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.annotation.processing.Completions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Completions_MethodInfo_,
	nullptr,
	nullptr,
	_Completions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.annotation.processing.Completions$SimpleCompletion"
};

$Object* allocate$Completions($Class* clazz) {
	return $of($alloc(Completions));
}

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
	$loadClass(Completions, name, initialize, &_Completions_ClassInfo_, allocate$Completions);
	return class$;
}

$Class* Completions::class$ = nullptr;

		} // processing
	} // annotation
} // javax