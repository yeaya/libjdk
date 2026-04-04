#include <jdk/net/ExtendedSocketOptions$ExtSocketOption.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace net {

void ExtendedSocketOptions$ExtSocketOption::init$($String* name, $Class* type) {
	$set(this, name$, name);
	$set(this, type$, type);
}

$String* ExtendedSocketOptions$ExtSocketOption::name() {
	return this->name$;
}

$Class* ExtendedSocketOptions$ExtSocketOption::type() {
	return this->type$;
}

$String* ExtendedSocketOptions$ExtSocketOption::toString() {
	return this->name$;
}

ExtendedSocketOptions$ExtSocketOption::ExtendedSocketOptions$ExtSocketOption() {
}

$Class* ExtendedSocketOptions$ExtSocketOption::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ExtendedSocketOptions$ExtSocketOption, name$)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions$ExtSocketOption, type$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<TT;>;)V", 0, $method(ExtendedSocketOptions$ExtSocketOption, init$, void, $String*, $Class*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedSocketOptions$ExtSocketOption, name, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedSocketOptions$ExtSocketOption, toString, $String*)},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC, $virtualMethod(ExtendedSocketOptions$ExtSocketOption, type, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.ExtendedSocketOptions$ExtSocketOption", "jdk.net.ExtendedSocketOptions", "ExtSocketOption", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.ExtendedSocketOptions$ExtSocketOption",
		"java.lang.Object",
		"java.net.SocketOption",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/SocketOption<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.net.ExtendedSocketOptions"
	};
	$loadClass(ExtendedSocketOptions$ExtSocketOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOptions$ExtSocketOption);
	});
	return class$;
}

$Class* ExtendedSocketOptions$ExtSocketOption::class$ = nullptr;

	} // net
} // jdk