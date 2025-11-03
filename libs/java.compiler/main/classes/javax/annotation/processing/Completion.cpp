#include <javax/annotation/processing/Completion.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

$MethodInfo _Completion_MethodInfo_[] = {
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Completion_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.annotation.processing.Completion",
	nullptr,
	nullptr,
	nullptr,
	_Completion_MethodInfo_
};

$Object* allocate$Completion($Class* clazz) {
	return $of($alloc(Completion));
}

$Class* Completion::load$($String* name, bool initialize) {
	$loadClass(Completion, name, initialize, &_Completion_ClassInfo_, allocate$Completion);
	return class$;
}

$Class* Completion::class$ = nullptr;

		} // processing
	} // annotation
} // javax