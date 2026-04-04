#include <javax/naming/spi/DirContextStringPair.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace spi {

void DirContextStringPair::init$($DirContext* ctx, $String* str) {
	$set(this, ctx, ctx);
	$set(this, str, str);
}

$DirContext* DirContextStringPair::getDirContext() {
	return this->ctx;
}

$String* DirContextStringPair::getString() {
	return this->str;
}

DirContextStringPair::DirContextStringPair() {
}

$Class* DirContextStringPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ctx", "Ljavax/naming/directory/DirContext;", nullptr, 0, $field(DirContextStringPair, ctx)},
		{"str", "Ljava/lang/String;", nullptr, 0, $field(DirContextStringPair, str)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;)V", nullptr, 0, $method(DirContextStringPair, init$, void, $DirContext*, $String*)},
		{"getDirContext", "()Ljavax/naming/directory/DirContext;", nullptr, 0, $virtualMethod(DirContextStringPair, getDirContext, $DirContext*)},
		{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DirContextStringPair, getString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.spi.DirContextStringPair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirContextStringPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirContextStringPair);
	});
	return class$;
}

$Class* DirContextStringPair::class$ = nullptr;

		} // spi
	} // naming
} // javax