#include <javax/print/URIException.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace javax {
	namespace print {

$Class* URIException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"URIInaccessible", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URIInaccessible)},
		{"URISchemeNotSupported", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URISchemeNotSupported)},
		{"URIOtherProblem", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URIOtherProblem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getReason", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIException, getReason, int32_t)},
		{"getUnsupportedURI", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIException, getUnsupportedURI, $URI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.URIException",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(URIException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URIException);
	});
	return class$;
}

$Class* URIException::class$ = nullptr;

	} // print
} // javax