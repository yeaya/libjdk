#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void ClientPropertyApplicator$Property::init$($String* name) {
	$set(this, name, name);
}

ClientPropertyApplicator$Property::ClientPropertyApplicator$Property() {
}

$Class* ClientPropertyApplicator$Property::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ClientPropertyApplicator$Property, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClientPropertyApplicator$Property, init$, void, $String*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TX;Ljava/lang/Object;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ClientPropertyApplicator$Property, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.apple.laf.ClientPropertyApplicator$Property",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<X:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.ClientPropertyApplicator"
	};
	$loadClass(ClientPropertyApplicator$Property, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientPropertyApplicator$Property);
	});
	return class$;
}

$Class* ClientPropertyApplicator$Property::class$ = nullptr;

		} // laf
	} // apple
} // com