#include <java/awt/color/ProfileDataException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace color {

void ProfileDataException::init$($String* s) {
	$RuntimeException::init$(s);
}

ProfileDataException::ProfileDataException() {
}

ProfileDataException::ProfileDataException(const ProfileDataException& e) : $RuntimeException(e) {
}

void ProfileDataException::throw$() {
	throw *this;
}

$Class* ProfileDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProfileDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProfileDataException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.color.ProfileDataException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProfileDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProfileDataException);
	});
	return class$;
}

$Class* ProfileDataException::class$ = nullptr;

		} // color
	} // awt
} // java