#include <javax/naming/StringRefAddr.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RefAddr = ::javax::naming::RefAddr;

namespace javax {
	namespace naming {

void StringRefAddr::init$($String* addrType, $String* addr) {
	$RefAddr::init$(addrType);
	$set(this, contents, addr);
}

$Object* StringRefAddr::getContent() {
	return $of(this->contents);
}

StringRefAddr::StringRefAddr() {
}

$Class* StringRefAddr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringRefAddr, contents)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringRefAddr, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringRefAddr, init$, void, $String*, $String*)},
		{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StringRefAddr, getContent, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.StringRefAddr",
		"javax.naming.RefAddr",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringRefAddr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringRefAddr);
	});
	return class$;
}

$Class* StringRefAddr::class$ = nullptr;

	} // naming
} // javax