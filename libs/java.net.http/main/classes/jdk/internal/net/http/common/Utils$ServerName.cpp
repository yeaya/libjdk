#include <jdk/internal/net/http/common/Utils$ServerName.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void Utils$ServerName::init$($String* name, bool isLiteral) {
	$set(this, name, name);
	this->isLiteral$ = isLiteral;
}

$String* Utils$ServerName::getName() {
	return this->name;
}

bool Utils$ServerName::isLiteral() {
	return this->isLiteral$;
}

Utils$ServerName::Utils$ServerName() {
}

$Class* Utils$ServerName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Utils$ServerName, name)},
		{"isLiteral", "Z", nullptr, $FINAL, $field(Utils$ServerName, isLiteral$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(Utils$ServerName, init$, void, $String*, bool)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Utils$ServerName, getName, $String*)},
		{"isLiteral", "()Z", nullptr, $PUBLIC, $virtualMethod(Utils$ServerName, isLiteral, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.Utils$ServerName", "jdk.internal.net.http.common.Utils", "ServerName", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.common.Utils$ServerName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.Utils"
	};
	$loadClass(Utils$ServerName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Utils$ServerName);
	});
	return class$;
}

$Class* Utils$ServerName::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk