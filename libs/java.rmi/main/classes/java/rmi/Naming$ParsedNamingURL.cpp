#include <java/rmi/Naming$ParsedNamingURL.h>
#include <java/rmi/Naming.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {

void Naming$ParsedNamingURL::init$($String* host, int32_t port, $String* name) {
	$set(this, host, host);
	this->port = port;
	$set(this, name, name);
}

Naming$ParsedNamingURL::Naming$ParsedNamingURL() {
}

$Class* Naming$ParsedNamingURL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"host", "Ljava/lang/String;", nullptr, 0, $field(Naming$ParsedNamingURL, host)},
		{"port", "I", nullptr, 0, $field(Naming$ParsedNamingURL, port)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(Naming$ParsedNamingURL, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(Naming$ParsedNamingURL, init$, void, $String*, int32_t, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.Naming$ParsedNamingURL", "java.rmi.Naming", "ParsedNamingURL", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.Naming$ParsedNamingURL",
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
		"java.rmi.Naming"
	};
	$loadClass(Naming$ParsedNamingURL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Naming$ParsedNamingURL);
	});
	return class$;
}

$Class* Naming$ParsedNamingURL::class$ = nullptr;

	} // rmi
} // java