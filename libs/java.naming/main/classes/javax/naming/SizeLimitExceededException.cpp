#include <javax/naming/SizeLimitExceededException.h>

#include <javax/naming/LimitExceededException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LimitExceededException = ::javax::naming::LimitExceededException;

namespace javax {
	namespace naming {

$FieldInfo _SizeLimitExceededException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SizeLimitExceededException, serialVersionUID)},
	{}
};

$MethodInfo _SizeLimitExceededException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SizeLimitExceededException::*)()>(&SizeLimitExceededException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SizeLimitExceededException::*)($String*)>(&SizeLimitExceededException::init$))},
	{}
};

$ClassInfo _SizeLimitExceededException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.SizeLimitExceededException",
	"javax.naming.LimitExceededException",
	nullptr,
	_SizeLimitExceededException_FieldInfo_,
	_SizeLimitExceededException_MethodInfo_
};

$Object* allocate$SizeLimitExceededException($Class* clazz) {
	return $of($alloc(SizeLimitExceededException));
}

void SizeLimitExceededException::init$() {
	$LimitExceededException::init$();
}

void SizeLimitExceededException::init$($String* explanation) {
	$LimitExceededException::init$(explanation);
}

SizeLimitExceededException::SizeLimitExceededException() {
}

SizeLimitExceededException::SizeLimitExceededException(const SizeLimitExceededException& e) : $LimitExceededException(e) {
}

void SizeLimitExceededException::throw$() {
	throw *this;
}

$Class* SizeLimitExceededException::load$($String* name, bool initialize) {
	$loadClass(SizeLimitExceededException, name, initialize, &_SizeLimitExceededException_ClassInfo_, allocate$SizeLimitExceededException);
	return class$;
}

$Class* SizeLimitExceededException::class$ = nullptr;

	} // naming
} // javax